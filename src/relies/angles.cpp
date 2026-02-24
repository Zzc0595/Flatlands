#ifndef ANGLES_CPP
#define ANGLES_CPP
#include <numbers>
constexpr double PI = std::numbers::pi;

struct angle {
    double rad;
    static angle deg(double d) { return angle{d * PI / 180}; }//input a deg,return a angle
    double deg() const { return rad * 180 / PI; }//just return its deg value
    double pi() const {return rad/PI;}//how much π does it have 
};

#endif