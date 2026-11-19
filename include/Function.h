#ifndef FUNCTION_H
#define FUNCTION_H
#include "Vector2D.h"
#include "Point.h"
#include <string>

class Function{
    public:
        Function();
        double evaluate(const Point& p) const;
        double evaluate_dx(const Point& p) const;//return partial deritive in x
        double evaluate_dy(const Point& p) const;//return partial deritive in y
        Vector2D evaluate_gradient(const Point& p) const;//return gradient
        const std::string& to_string() const; 
    private:
        static constexpr std::string rappresentation;//func rappresentation as a string
                   
};


#endif