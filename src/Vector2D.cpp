#include "../include/Vector2D.h"
#include <cmath>

Vector2D::Vector2D() : x{0}, y{0} {} //default constructor definition
Vector2D::Vector2D(double x, double y) : x{x}, y{y} {} //normal constructor definition for a (x, y) vector

//GETS
double Vector2D::getX() const
{
    return x;
}
double Vector2D::getY() const
{
    return y;
}

//definition of magninute as the distance from the origin point
double Vector2D::magnitude() const
{
    return std::sqrt(x * x + y * y);
}

//defintion of scalar multiplication of a vector
Vector2D operator*(const Vector2D &v, double scalar)
{
    return Vector2D{v.getX() * scalar, v.getY() * scalar};
}

//simmetric defintion of scalar multiplication of a vector
Vector2D operator*(double scalar, const Vector2D &v)
{
    return v * scalar;
}