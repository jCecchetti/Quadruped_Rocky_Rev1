/*
 * Body.cpp
 *
 *  Created on: Sep 5, 2018
 *      Author: julia
 */

#include "Body.h"
#include "Constants.h"
#include "Position.h"
#include "PositionCluster.h"
#include <math.h>

PositionCluster Body::getLocalCornerPos(Position localBodyPos){
	double unrotatedLocalCornerPos [4][3] = {{Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0},
									{Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0},
									{-Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0},
									{-Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0}};

	double pitchRotationMatrix [3][3]= {{cos(toRadians(localBodyPos.pitch)), 0, -sin(toRadians(localBodyPos.pitch))},
									 {0, 1, 0},
									 {sin(toRadians(localBodyPos.pitch)), 0, cos(toRadians(localBodyPos.pitch))}};
	double rollRotationMatrix [3][3]= {{1, 0, 0},
									  {0, cos(toRadians(localBodyPos.roll)), sin(toRadians(localBodyPos.roll))},
									  {0, -sin(toRadians(localBodyPos.roll)), cos(toRadians(localBodyPos.roll))}};
	double yawRotationMatrix [3][3]= {{cos(toRadians(localBodyPos.yaw)), -sin(toRadians(localBodyPos.yaw)), 0},
								    {sin(toRadians(localBodyPos.yaw)), cos(toRadians(localBodyPos.yaw)), 0},
								    {0, 0, 1}};
	for(int i = 0; i < 4; i++){
		unrotatedLocalCornerPos[i] = Matrix.multiply(rollRotationMatrix, unrotatedLocalCornerPos[i]);
		unrotatedLocalCornerPos[i] = Matrix.multiply(pitchRotationMatrix, unrotatedLocalCornerPos[i]);
		double[] rotatedLocalCornerPos = Matrix.multiply(yawRotationMatrix, unrotatedLocalCornerPos[i]);
		localCornerPos[i] = new Position(rotatedLocalCornerPos[0] + localBodyPos.x, rotatedLocalCornerPos[1] + localBodyPos.y,
				rotatedLocalCornerPos[2] + localBodyPos.z, localBodyPos.roll, localBodyPos.pitch, localBodyPos.yaw);
		//System.out.println(rotatedLocalCornerPos[0]);
	}
	return localCornerPos;
}

double Body::toRadians(double degrees){
	return degrees*0.0174533;
}


Body::Body() {

}

Body::~Body() {

}
