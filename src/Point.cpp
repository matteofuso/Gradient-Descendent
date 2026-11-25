#include "../include/Point.h"
#include "../include/Vector2D.h"

Point::Point() : x{0}, y{0} {}
Point::Point(double x, double y) : x{x}, y{y} {}
double Point::getX() const {
    return x;
}
double Point::getY() const{
    return y;
}

Point operator - (const Point& p, const Vector2D& v){
    return Point{p.getX() - v.getX(), p.getY() - v.getY()};
}

std::ostream& operator << (std::ostream& out, const Point& point){
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}