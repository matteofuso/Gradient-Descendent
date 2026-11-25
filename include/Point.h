#ifndef POINT_H
#define POINT_H

#include "Vector2D.h"
#include <iostream>

// Class containing a point definition
class Point
{
public:
    // Default constructor
    Point();
    // Constructor given (x,y) coordinate
    Point(double x, double y);
    // Function that return the X coordinate
    double getX() const;
    // Function that return the Y coordinate
    double getY() const;

private:
    // X coordinate
    double x;
    // Y coordinate
    double y;
};

// Affine Algebra Point - Vector operator
Point operator-(const Point &p, const Vector2D &v);
// Operator used to concatenate the Point expression in output streams
std::ostream &operator<<(std::ostream &out, const Point &point);

#endif