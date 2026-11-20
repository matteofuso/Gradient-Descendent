#ifndef FUNCTION_H
#define FUNCTION_H
#include "Vector2D.h"
#include "Point.h"
#include <string>

class Function{
    public:
        virtual ~Function() = default;
        virtual double evaluate(const Point& p) const = 0;
        virtual double evaluate_dx(const Point& p) const = 0;//return partial deritive in x
        virtual double evaluate_dy(const Point& p) const = 0;//return partial deritive in y
        virtual Vector2D evaluate_gradient(const Point& p) const = 0;//return gradient
        virtual std::string to_string() const = 0;
};

std::ostream& operator<<(std::ostream &out, const Function& f);

#endif