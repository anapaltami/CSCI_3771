#include "drag.h"

double drag(double cD, double aA, double p, double v, int m) {
        return (0.5 * cD * aA * p * (v*v)) / m;
}
