/*
 * Leg.h
 *
 *  Created on: Aug 4, 2018
 *      Author: julia
 */

#ifndef LEG_H_
#define LEG_H_

class Leg {
public:
	Leg();
	Leg(bool);
	bool setFootPos();
	virtual ~Leg();

private:
	bool calculateAngles(double, double, double);
	//AdafruitServo servo1, servo2, servo3;

	double hipAngle = 90;
	double kneeAngle = 90;
	double ankleAngle = 90;
	float hipCenter = 90;
	float kneeCenter = 90;
	float ankleCenter = 7;

	float minimumPulseWidth = 0.6f;
	float neutralPulseWidth = 1.575f;
	float maximumPulseWidth = 2.55f;

	bool left = false;
};

#endif /* LEG_H_ */
