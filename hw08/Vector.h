#ifndef VECTOR_H
#define VECTOR_H
#include <ostream>

class Vector {

private:
	double y = 0.0;
	double z = 0.0;

public:
	Vector();	// constructor
	Vector(double y, double z);	// constructor
	virtual ~Vector();	// destructor
	
	double getY() const;	// getter
	double getZ() const;	// getter
	
	void set(double y, double z);	// setter
	
	Vector operator+(const Vector& vector) const;	// + operator method
	Vector operator-(const Vector& vector) const; // - operator method
	Vector& operator+=(const Vector& vector);	// += operator method
	Vector operator*(const double n) const;	// multiply method
	double operator*(const Vector& vector) const;	// mulVector method
	
	friend std::ostream& operator<<(std::ostream& out, const Vector& v);	
};	// end of Vector class

#endif
