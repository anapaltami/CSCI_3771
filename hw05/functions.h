#ifndef FUNCTIONS_H
#define FUNCTIONS_H

double aOfX(double d, double vx, double v);
double aOfY(double g, double d, double vy, double v);
int** cannonball(int** array, int scale);
double drag(double cD, double aA, double p, double v, int m);
double dTravel(double n, double v, double dt);
void fillArray(int** array, int height, int width);
void printArray(int** array, int height, int width);
double velocity(double y, double x);
double vOfN(double v, double a, double dt);

#endif
