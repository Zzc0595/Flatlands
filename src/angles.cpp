#ifndef ANGLES_CPP
#define ANGLES_CPP
#include <numbers>
constexpr double PI = std::numbers::pi;

struct angle {
    double rad;  // 直接公开
    
    static angle deg(double d) { return angle{d * PI / 180}; }
    double deg() const { return rad * 180 / PI; }
};

#endif