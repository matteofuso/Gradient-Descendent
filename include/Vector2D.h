#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D{
    public:
        Vector2D();
        Vector2D(double x, double y);
        double getX() const;
        double getY() const;
        double magnitude() const;
        
    private:
        double x;
        double y;
};

#endif