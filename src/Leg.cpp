/*
 * Leg.cpp
 *
 *  Created on: Aug 4, 2018
 *      Author: julia
 */

#include "Leg.h"

Leg::Leg() {
}

Leg::Leg(bool left){
	this->left = left;
}

bool Leg::setFootPos(Position pos){
		calculateAngles(pos.x, pos.y, pos.z);
		//System.out.println(pos.x + " " + pos.y + " " + pos.z);
		servo1.setPosition((float) hipAngle);
		servo2.setPosition((float) kneeAngle);
		servo3.setPosition((float) ankleAngle);

		return true;
}

bool Leg::calculateAngles(double x, double y, double z){
	return true;
}

Leg::~Leg() {
	// TODO Auto-generated destructor stub
}

