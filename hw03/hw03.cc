#include <cstdio>
#include <cmath>
#include "aOfY.h"
#include "aOfX.h"
#include "drag.h"
#include "dTravel.h"
#include "velocity.h"
#include "vOfN.h"

int main (int argc, char** argv) {
	for (int i = 0; i < 5; i++) {
		int m = 80;			// mass of canonball in kg
		double t = 0.0;			// initial time
		double y = 0.0;			// vertical height above ground
		double x = 0.0;			// horizontal distance over ground
		double v = 0.0;			// initial velocity
		double cD = 0.45;		// drag coefficient
		double aA = 0.03;		// area of object in square meters
		double dt = 1.0;		// change in time
		double g = 9.81;		// gravity acceleration in meters per second squared
		double p = 1.2;			// air density in kilograms per square meter
		double d;			// drag
		double ay;			// acceleration of vertical travel
		double ax;			// acceleration of horizontal travel

		double delta = rand();	// initial height of launch in meters
		double vy = 250 * sin(delta);	// initial muzzle velocity of y in meters
		double vx = 250 * cos(delta);	// initial muzzle velicity of x in meters
		double maxY = 0.0;		// holds max height
		double maxX = 0.0;		// holds max distance
		double *ptrY = &maxY;		// ptr to max height
		double *ptrX = &maxX;		// ptr to max distance
		printf("Launched from %lf radians.\n", delta);

		// loop until cannonball hits ground (y==0)
		while (y >= 0.0) {
			delta = delta * M_PI / 180.0;	// converts delta to radians from degrees
			v = velocity(vy, vx);	// calculate velocity for drag
			d = drag(cD, aA, p, v, m);	// calculate drag
			ay = aOfY(g, d, vy, v);	// calculate ay
			ax = aOfX(d, vx, v);	// calculate ax
			vy = vOfN(vy, ay, dt);	// calculate velocity of y
			vx = vOfN(vx, ax, dt);	// calculate velocity of x
			y = dTravel(y, vy, dt);	// calculate change in height
			x = dTravel(x, vx, dt);	// calculate change in distance
			if (y > maxY) {
				*ptrY = y;
			}
			if (x > maxX) {
				*ptrX = y;
			}
			t += 1.0;	// increment time by 1 second
			delta -= 100;	// decrease angle
		}
		printf("Max height was %lf and max distance was %lf.\n", maxY, maxX);
	}
}
