#include <cmath>
#include "Planet.h"
#include "Vector.h"

Planet::Planet() {
} // end of constructor

Planet::Planet(double m, double r) {
  this->m = m;
  this->r = r;
} // end of constructor

Planet::~Planet() {
} // end of destructor

double Planet::getR() {
  return r;
} // end of r getter

double Planet::setM(double mass) {
  this->m = mass;
} // end of m setter

double Planet::setR(double radius) {
  this->r = radius;
} // end of r setter

bool Planet::gAcceleration(const Vector& sPos, Vector& pPos) const {
  double al = sPos.getY();
	double ac = pPos.getZ();
	bool goBoom = false;
	double alSq = al * al;

	if (alSq < (r * r)) return true;
} // end of gravitational acceleration method