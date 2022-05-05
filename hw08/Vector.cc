#include <cmath>
#include <ostream>
#include "Vector.h"

Vector::Vector() {
}	// end of constructor

Vector::Vector(double y, double z) {
	this->y = y;
	this->z = z;
}	// end of constructor

Vector::~Vector() {
}	// end of destructor

double Vector::getY() const {
	return y;
}	// end of getX method

double Vector::getZ() const {
	return z;
}	// end of getY method

void Vector::set(double y, double z) {
	this->y = y;
	this->z = z;
}	// end of set method

Vector Vector::operator+(const Vector& vector) const {
	return Vector(y + vector.y, z + vector.z);
}	// end of + operator method

Vector Vector::operator-(const Vector& vector) const {
	return Vector(y - vector.y, z - vector.z);
} // end of - operator method

Vector& Vector::operator+=(const Vector& vector) {
	y += vector.y;
	z += vector.z;
	return *this;
}	// end of += operator method

Vector Vector::operator*(const double n) const {
	return Vector(y * n, z * n);
}	// end of multiply method

double Vector::operator*(const Vector& vector) const {
	return (y * vector.y) + (z * vector.z);
}	// end of mulVector method

std::ostream& operator<<(std::ostream& out, const Vector& v) {
	out << "("<<v.y<<", "<<v.z<<")";
	return out;
}	// end of print function