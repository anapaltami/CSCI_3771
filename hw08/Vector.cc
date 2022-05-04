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

Vector Vector::operator+(const Vector& vector) const {
	return Vector(x + vector.x, y + vector.y, z + vector.z);
}	// end of + operator method

Vector Vector::operator-(const Vector& vector) const {
	return Vector(x - vector.x, y - vector.y, z - vector.z);
} // end of - operator method

Vector& Vector::operator+=(const Vector& vector) {
	x += vector.x;
	y += vector.y;
	z += vector.z;
	return *this;
}	// end of += operator method

Vector Vector::operator*(const double n) const {
	return Vector(x * n, y * n, z * n);
}	// end of multiply method

double Vector::operator*(const Vector& vector) const {
	return (x * vector.x) + (y * vector.y) + (z * vector.z);
}	// end of mulVector method

std::ostream& operator<<(std::ostream& out, const Vector& v) {
	out << "("<<v.x<<", "<<v.y<<", "<<v.z<<")";
	return out;
}	// end of print function
