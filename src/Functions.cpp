#include "../include/Functions.h"
#include "../include/Point.h"

F1::F1() : Function{"(x^2 + y^2)/2"} {}

double F1::evaluate(const Point& p) const{
    double x = p.getX(), y = p.getY();
    return (x * x + y * y)/2;
}
double F1::evaluate_dx(const Point& p) const{
    double x = p.getX();
    return x;
}
double F1::evaluate_dy(const Point& p) const{
    double y = p.getY();
    return y;
}