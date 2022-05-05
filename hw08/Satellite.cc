#include "Satellite.h"
#include "Planet.h"
#include "Vector.h"

Satellite::Satellite() {
} // end of constructor

Satellite::Satellite(Vector& yPos, Vector& vel, Planet& p) {
	this->y = yPos.getY();
	this->vel = vel.getZ();
	this->m = p.getR();
} // end of constructor

Satellite::~Satellite() {
} // end of destructor