#ifndef VECTOR2D_H
#define VECTOR2D_H

// Class containing a 2D Vector definition
class Vector2D
{
public:
    // Default constructor
    Vector2D();
    // Constructor given (x,y) vector
    Vector2D(double x, double y);
    // Function that return the X coordinate
    double getX() const;
    // Function that return the Y coordinate
    double getY() const;
    // Function that return the vector magnitude
    double magnitude() const;

private:
    // X coordinate
    double x;
    // Y coordinate
    double y;
};

// Operators to multiply a vector by a scalar
Vector2D operator*(const Vector2D &v, double scalar);
Vector2D operator*(double scalar, const Vector2D &v);

#endif