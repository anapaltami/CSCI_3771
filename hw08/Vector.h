#ifndef VECTOR_H
#define VECTOR_H

class Vector {

private:
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;

public:
	Vector();	// constructor
	Vector(double x, double y, double z);	// constructor
	virtual ~Vector();	// destructor
	
	double getX() const;	// getter
	double getY() const;	// getter
	double getZ() const;	// getter
	
	void set(double x, double y, double z);	// setter
	
	Vector operator+(const Vector& vector) const;	// + operator method
	Vector operator-(const Vector& vector) const; // - operator method
	Vector& operator+=(const Vector& vector);	// += operator method
	Vector operator*(const double n) const;	// multiply method
	double operator*(const Vector& vector) const;	// mulVector method
	
	friend std::ostream& operator<<(std::ostream& out, const Vector& v);
	
};	// end of Vector class

#endif
