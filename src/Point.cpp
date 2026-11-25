#include "../include/Point.h"
#include "../include/Vector2D.h"

Point::Point() : x{0}, y{0} {} //default constructor definition
Point::Point(double x, double y) : x{x}, y{y} {} //normal constructor definition if you want to set the point with its coordinates

//GETS
double Point::getX() const
{
    return x;
}
double Point::getY() const
{
    return y;
}

//definition of minus operator between a point and a vector, following affine geometry rules
Point operator-(const Point &p, const Vector2D &v)
{
    return Point{p.getX() - v.getX(), p.getY() - v.getY()};
}

//definition of << operator for outputting purposes
std::ostream &operator<<(std::ostream &out, const Point &point)
{
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}