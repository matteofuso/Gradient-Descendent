#include "../include/Function.h"
#include "../include/Point.h"
#include "../include/Vector2D.h"
#include <iostream>
#include <string>

Function::Function(std::string expression) : expression{expression} {}

Vector2D Function::evaluate_gradient(const Point &p) const
{
    return Vector2D(evaluate_dx(p), evaluate_dy(p));
}
const std::string &Function::to_string() const
{
    return expression;
}

std::ostream &operator<<(std::ostream &out, const Function &f)
{
    return out << f.to_string();
}