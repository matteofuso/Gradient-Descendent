#ifndef RECTANGULARINTERVAL_H
#define RECTANGULARINTERVAL_H

#include "Point.h"

// Class containing a RectangularInterval definition
class RectangularInterval
{
public:
    // Default constructor
    RectangularInterval();
    // Constructor given [x1,x2]x[y1,y2] domain
    RectangularInterval(double x1, double x2, double y1, double y2);
    // Function that return the X1 coordinate
    double getX1() const;
    // Function that return the X2 coordinate
    double getX2() const;
    // Function that return the Y1 coordinate
    double getY1() const;
    // Function that return the Y2 coordinate
    double getY2() const;
    // Function that checks whether the domain contains a point
    bool contains(const Point &p) const;

private:
    // X coordinate
    double x1, x2;
    // Y coordinate
    double y1, y2;
};

// Operator used to concatenate the Domain expression in output streams
std::ostream &operator<<(std::ostream &out, const RectangularInterval &point);

#endif