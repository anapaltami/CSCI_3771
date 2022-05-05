#ifndef PLANET_H
#define PLANET_H

class Planet {
private:
  static const double g = 0.000000000066742; // gravitational constant
  double m = 0.0; // planet mass
  double r = 0.0; // planet radius
  double rE = 40.233579079557416; // earth radius

public:
  Planet();
  Planet(double m, double r);
  virtual ~Planet();

  double getR();

  double setM(double mass);
  double setR(double radius);

  bool gAcceleration(const Vector& sPos, Vector& returnAccel) const;
}; // end of Planet class

#endif
