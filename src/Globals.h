/*
 * Constants.h
 *
 *  Created on: Sep 5, 2018
 *      Author: julia
 */

#ifndef GLOBALS_H_
#define GLOBALS_H_

#include "Position.h"
#include "PositionCluster.h"

namespace Globals {

extern Position g_globalRobotPos(0.0,0.0,6.5,0.0,0.0,0.0);
extern Position g_localRobotPos(0.0,0.0,0.0,0.0,0.0,0.0);
extern PositionCluster g_globalFeetPos(Position(Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0,0,0,0),
		Position(Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0,0,0,0),
		Position(-Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0,0,0,0),
		Position(-Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0,0,0,0));
extern PositionCluster g_globalCornerPos(Position(Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0,0,0,0),
		Position(Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0,0,0,0),
		Position(-Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0,0,0,0),
		Position(-Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0,0,0,0));
extern PositionCluster g_globalStepCenter(Position(Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0,0,0,0),
		Position(Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0,0,0,0),
		Position(-Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0,0,0,0),
		Position(-Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0,0,0,0));
extern PositionCluster g_lastGlobalStepCenter(Position(Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0,0,0,0),
		Position(Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0,0,0,0),
		Position(-Constants::BODYLENGTH/2, Constants::BODYWIDTH/2, 0,0,0,0),
		Position(-Constants::BODYLENGTH/2, -Constants::BODYWIDTH/2, 0,0,0,0));
extern double g_stepLengthX = 0;
extern double g_stepLengthY = 0;

extern enum legID{frontLeft = 0, frontRight = 1, rearLeft = 2, rearRight = 3};
extern legID steppingLeg = frontLeft;
extern legID lastSteppingLeg = frontLeft;


}

#endif /* GLOBALS_H_ */
