#ifndef FUNCTION_H
#define FUNCTION_H
#include "Vector2D.h"
#include "Point.h"
#include <string>

// Abstract Class of a Generic Mathematical Function
class Function
{
public:
    // Default distructor, used when defined as a pointer
    virtual ~Function() = default;
    // Evaluate and return the function given a point p
    virtual double evaluate(const Point &p) const = 0;
    // Evaluate and return the function partial derivative in x given a point p
    virtual double evaluate_dx(const Point &p) const = 0; // return partial deritive in x
    // Evaluate and return the function partial derivative in y given a point p
    virtual double evaluate_dy(const Point &p) const = 0;
    // Evaluate and return the gradient given a point p
    Vector2D evaluate_gradient(const Point &p) const;
    // Return the string rappresentation of the expression
    const std::string &to_string() const;

protected:
    // Constructor given the function expression 
    Function(std::string expression);

private:
    // String that contains the string rappresentation of the expression
    std::string const expression;
};

// Operator used to concatenate the Function expression in output streams
std::ostream &operator<<(std::ostream &out, const Function &f);

#endif