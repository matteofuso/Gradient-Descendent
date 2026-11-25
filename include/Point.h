#ifndef POINT_H
#define POINT_H

#include "Vector2D.h"
#include <iostream>

class Point{
    public:
        Point();
        Point(double x, double y);
        double getX() const;
        double getY() const;
        
    private:
        double x;
        double y;
};

Point operator - (const Point& p, const Vector2D& v);
std::ostream& operator << (std::ostream& out, const Point& point);

#endif