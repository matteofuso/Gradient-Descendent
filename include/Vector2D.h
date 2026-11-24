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

Vector2D operator * (const Vector2D& v, double scalar);

Vector2D operator * (double scalar, const Vector2D& v);

#endif