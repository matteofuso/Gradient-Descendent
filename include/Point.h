#ifndef POINT_H
#define POINT_H

#include "Vector2D.h"

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

#endif