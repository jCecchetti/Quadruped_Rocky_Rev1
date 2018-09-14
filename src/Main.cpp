
#include <stdio.h>
#include "Leg.h"
#include "PositionCluster.h"
#include <iostream>
#include "RobotMotion.h"



int main(int argc, char *argv[])
{
	Leg frontLeftLeg;
	Leg frontRightLeg;
	Leg rearLeftLeg;
	Leg rearRightLeg;

	RobotMotion motion(frontLeftLeg, frontRightLeg, rearLeftLeg, rearRightLeg);
	motion.update();

	//std::cout << a.position[0].x;

	/*double a[3][3] = {{1,2,3},{2,3,4},{3,4,5}};
	double x[3] = {1,2,3};


	        int m = 3;
	        int n = 3;
	        double y[3] = {0,0,0};
	        for (int i = 0; i < m; i++){
	        	for (int j = 0; j < n; j++){
	        		y[i] += a[i][j] * x[j];
	        		std::cout << y[i] << std::endl;
	        	}
	        }
*/
	        //std::cout << x[0];


	//time timer = time();
	/*double fps = 60;// updates per second
	double timePerTick = 1000000000/fps;
	double delta = 0;
	long now;
	long lastTime = 0;//nanotime
	long timer = 0;
	int ticks = 0;
	long totalSeconds = 0;
	bool running = true;*/

	/*
	while(running){
		now = std::chrono::system_clock::now();
		delta += (now - lastTime) / timePerTick;
		timer += now - lastTime;
		lastTime = now;
		//cout << now;

		if(delta >= 1){
			//update();
			ticks++;
			delta--;
			//if(motion.end) running = false;
		}

		if(timer >= 1000000000){
			//System.out.println("Ticks and Frames " + ticks);
			timer = 0;
			ticks = 0;
			totalSeconds++;
		}
	}*/

	return 0;
}
