#include <cmath>
#include <ostream>
#include "Vector.h"

Vector::Vector() {
}	// end of constructor

Vector::Vector(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}	// end of constructor

Vector::~Vector() {
}	// end of destructor

double Vector::getX() const {
	return x;
}	// end of getX method

double Vector::getY() const {
	return y;
}	// end of getY method

double Vector::getZ() const {
	return z;
}	// end of getZ method

void Vector::set(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}	// end of set method

double Vector::add(const Vector& vector) const {
	double xx = x + vector.getX();
	double yy = y + vector.getY();
	double zz = z + vector.getZ();
	return xx+yy+zz;
}	// end of add method

Vector& Vector::operator+=(const Vector& vector) {
	x += vector.getX();
	y += vector.getY();
	z += vector.getZ();
	return *this;
}	// end of += operator method

double Vector::multiply(const double a) {
	x = x * a;
	y = y * a;
	z = z * a;
	return x+y+z;
}	//end of multiply method

double Vector::mulVector(const Vector& vector) {
	double xx = x * vector.getX();
	double yy = y * vector.getY();
	double zz = z * vector.getZ();
	return xx+yy+zz;
}	// end of mulVector method

std::ostream& operator<<(std::ostream& out, const Vector& v) {
	out << "("<<v.x<<", "<<v.y<<", "<<v.z<<")";
	return out;
}	// end of print function
