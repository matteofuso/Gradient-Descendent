#include "../include/Function.h"
#include "../include/Point.h"
#include "../include/Vector2D.h"
#include <iostream>
#include <string>

//constructor of function that takes in input a string with the reprensation of the function
Function::Function(std::string expression) : expression{expression} {}

//evaluate_gradient(const Point&) is defined here so that all other classes can inherit the same behavior, as is the definition of the gradient
Vector2D Function::evaluate_gradient(const Point &p) const
{
    return Vector2D(evaluate_dx(p), evaluate_dy(p));
}

//method to get the reprensation of the function for output purposes
const std::string &Function::to_string() const
{
    return expression;
}

//operator to make the output easier
std::ostream &operator<<(std::ostream &out, const Function &f)
{
    return out << f.to_string();
}