#ifndef RECTANGULARINTERVAL_H
#define RECTANGULARINTERVAL_H

#include "Point.h"

class RectangularInterval
{
public:
    RectangularInterval();
    RectangularInterval(double x1, double x2, double y1, double y2);
    double getX1() const;
    double getX2() const;
    double getY1() const;
    double getY2() const;
    bool contains(const Point &p) const;

private:
    double x1, x2;
    double y1, y2;
};

std::ostream &operator<<(std::ostream &out, const RectangularInterval &point);

#endif