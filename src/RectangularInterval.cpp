#include "../include/RectangularInterval.h"
#include "../include/Point.h"

RectangularInterval::RectangularInterval() : x1{0}, x2{0}, y1{0}, y2{0} {} //default constructor definition
RectangularInterval::RectangularInterval(double x1, double x2, double y1, double y2) : x1{x1}, x2{x2}, y1{y1}, y2{y2} {} //normal constructor definition for a [x1, x2] X [y1, y2] interval

//GETS
double RectangularInterval::getX1() const
{
    return x1;
}
double RectangularInterval::getX2() const
{
    return x2;
}
double RectangularInterval::getY1() const
{
    return y1;
}
double RectangularInterval::getY2() const
{
    return y2;
}

//method that checks if a point is contained in the interval
bool RectangularInterval::contains(const Point &p) const
{
    double x = p.getX();
    double y = p.getY();

    return (x >= x1 && x <= x2 && y >= y1 && y <= y2);
}

//definition of << operator for outputting purposes
std::ostream &operator<<(std::ostream &out, const RectangularInterval &point)
{
    out << "[" << point.getX1() << ", " << point.getX2() << "]x[" << point.getY1() << ", " << point.getY2() << "]";
    return out;
}