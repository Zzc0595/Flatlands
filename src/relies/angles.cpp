#ifndef ANGLES_CPP
#define ANGLES_CPP
#include <numbers>
constexpr double PI = std::numbers::pi;

struct angle {
    double rad;
    
    static angle deg(double d) { return angle{d * PI / 180}; }
    double deg() const { return rad * 180 / PI; }
};

#endif