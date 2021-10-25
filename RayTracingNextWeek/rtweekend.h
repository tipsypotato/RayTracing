#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>

#include <cstdlib>

// Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return pi * degrees / 180.0;
}

inline double random_double() {
    // returns random number in [0,1)
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    return min+random_double()*(max-min);
}

inline int random_int(int min, int max) {
    // Returns a random integer in [min,max].
    return static_cast<int>(random_double(min, max+1));
}

inline double clamp(double x, double min, double max) {
    if(x < min) return min;
    if(max < x) return max;
    return x;
}

// Common headers

#include "vec3.h"
#include "ray.h"

#endif
