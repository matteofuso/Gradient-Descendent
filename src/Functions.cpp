#include "../include/Functions.h"
#include "../include/Point.h"
#include <cmath>
#include "../include/Constants.h"

//EACH FUNCTION IS THE SAME
//it calls the super constructor to set the string reprensation
//it then fills the methods defined in the class Function as needed based on each specific mathematical function

//
//FIRST FUNCTION
//
F1::F1() : Function{"(x^2 + y^2)/2"} {}

double F1::evaluate(const Point &p) const
{
    double x = p.getX(), y = p.getY();
    return (x * x + y * y) / 2;
}
double F1::evaluate_dx(const Point &p) const
{
    double x = p.getX();
    return x;
}
double F1::evaluate_dy(const Point &p) const
{
    double y = p.getY();
    return y;
}

//
//SECOND FUNCTION
//
F2::F2() : Function{"(x^2 + 16y^2)/2"} {}

double F2::evaluate(const Point &p) const
{
    double x = p.getX(), y = p.getY();
    return (x * x + 16 * y * y) / 2;
}
double F2::evaluate_dx(const Point &p) const
{
    return p.getX();
}
double F2::evaluate_dy(const Point &p) const
{
    return 16 * p.getY();
}

//
//THIRD FUNCTION
//
F3::F3() : Function{"(x^2-1)^2 + y^2"} {}

double F3::evaluate(const Point &p) const
{
    double x = p.getX(), y = p.getY();
    return std::pow((x * x - 1), 2) + y * y;
}
double F3::evaluate_dx(const Point &p) const
{
    double x = p.getX();
    return 4 * x * (x * x - 1);
}
double F3::evaluate_dy(const Point &p) const
{
    return 2 * p.getY();
}


//
//FOURTH FUNCTION
//
F4::F4() : Function{"(x^2 - 1)^2 + ((x-1)^2)/5 + y^2"} {}

double F4::evaluate(const Point &p) const
{
    double x = p.getX(), y = p.getY();
    return std::pow((x * x - 1), 2) + (std::pow(x - 1, 2) / 5) + y * y;
}
double F4::evaluate_dx(const Point &p) const
{
    double x = p.getX();
    return 4 * x * (x * x - 1) + (2.0 / 5.0) * (x - 1);
}
double F4::evaluate_dy(const Point &p) const
{
    return 2 * p.getY();
}


//
//FIFTH FUNCTION
//
F5::F5() : Function{"4(sinh(x/2))^2 + y^2"} {}

double F5::evaluate(const Point &p) const
{
    double x = p.getX(), y = p.getY();
    return 4 * std::pow(std::sinh(x / 2), 2) + y * y;
}
double F5::evaluate_dx(const Point &p) const
{
    double x = p.getX();
    return 2 * std::sinh(x);
}
double F5::evaluate_dy(const Point &p) const
{
    return 2 * p.getY();
}


//
//SIXTH FUNCTION
//
F6::F6() : Function{"ln(1 + x^2 + y^2)"} {}

double F6::evaluate(const Point &p) const
{
    double x = p.getX(), y = p.getY();
    return std::log(1 + x * x + y * y);
}
double F6::evaluate_dx(const Point &p) const
{
    double x = p.getX();
    double y = p.getY();
    return 2 * x / (1 + x * x + y * y);
}
double F6::evaluate_dy(const Point &p) const
{
    double x = p.getX();
    double y = p.getY();
    return 2 * y / (1 + x * x + y * y);
}


//
//SEVENTH FUNCTION
//
F7::F7() : Function{"1 - e^(-x^2 -y^2)"} {}

double F7::evaluate(const Point &p) const
{
    double x = p.getX(), y = p.getY();
    return 1 - std::exp(-(x * x + y * y));
}
double F7::evaluate_dx(const Point &p) const
{
    double x = p.getX();
    double y = p.getY();
    return 2 * x * std::exp(-(x * x + y * y));
}
double F7::evaluate_dy(const Point &p) const
{
    double x = p.getX();
    double y = p.getY();
    return 2 * y * std::exp(-(x * x + y * y));
}


//
//EIGHT FUNCTION
//
F8::F8() : Function{"2 - cos(pi * x) - cos(pi * y)"} {}

double F8::evaluate(const Point &p) const
{
    double x = p.getX(), y = p.getY();
    return 2 - std::cos(Constants::PI * x) - std::cos(Constants::PI * y);
}
double F8::evaluate_dx(const Point &p) const
{
    double x = p.getX();
    return Constants::PI * std::sin(Constants::PI * x);
}
double F8::evaluate_dy(const Point &p) const
{
    double y = p.getY();
    return Constants::PI * std::sin(Constants::PI * y);
}