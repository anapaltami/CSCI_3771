#include <cstdio>
#include <cmath>
#include "functions.h"

double aOfX(double d, double vx, double v) {
        return (-d * vx) / v;
}

double aOfY(double g, double d, double vy, double v) {
        return (-g - d * vy) / v;
}

double drag(double cD, double aA, double p, double v, int m) {
        return (0.5 * cD * aA * p * (v*v)) / m;
}

double dTravel(double n, double v, double dt) {
        return n + v * dt;
}

void fillArray(int** array, int height, int width) {
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			array[y][x] = ' ';
		}
	}
}

void printArray(int** array, int height, int width) {
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			printf("%c ", array[y][x]);
		}
		printf("\n");
	}
}

double velocity(double y, double x) {
        return sqrt(y*y + x*x);
}

double vOfN(double v, double a, double dt) {
        return v + a * dt;
}
