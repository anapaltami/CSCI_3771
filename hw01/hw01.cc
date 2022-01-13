#include <cstdio>

int main (int argc, char** argv) {
	
	double y = 1000.0;	// initial height value (meters)
	double v = 0.0;		// initial velocity
	double t = 0.0;		// initial time in seconds
	double dt = 1.0;	// change in time
	double g = 9.81;	// acceleration of gravity
	double cd = 1.0;	// drag coefficient
	double aA = 1;		// area of the object
	double p = 1.2;		// density of air
	double m = 80;		// object mass in kg
	double a;		// acceleration computation

	// loop until splat on ground (y==0)
	while (y >= 0.0) {
		y = y+v*dt;
		a = (-g + (1/2) * cd * aA * p * (v*v)) / m;
		v = v+a*dt;
		printf("%lf meters\n", y);
		y -= 1.0;	// decrement y by 1m
		t += 1.0;	// increment t by 1s
	}
	printf("You fell 1000 meters in %lf seconds.\n", t);
	
} // end of main
