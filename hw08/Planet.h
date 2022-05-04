#ifndef PLANET_H
#define PLANET_H

class Planet {
private:
  double mass = 0.0;
  double rP = 0.0;

public:
  Planet();
  Planet(double mass, double rP);
  virtual ~Planet();
}; // end of Planet class

#endif
