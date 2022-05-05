#ifndef SATELLITE_H
#define SATELLITE_H

class Satellite {

private:
    double y = 0.0;
    double vel = 0.0;
    double m = 0.0;
    double updPos = 0.0;
    double updVel = 0.0;

public:
    Satellite();
    Satellite(Vector& sPos, Vector& zVel, Planet& p);
    virtual ~Satellite();

    void Update(Vector& sPos, Vector& z, Vector& vel, int time);
};

#endif