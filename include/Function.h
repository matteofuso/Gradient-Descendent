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
        Vector2D evaluate_gradient(const Point& p) const;//return gradient
        const std::string& to_string() const;
    
    protected:
        Function(std::string expression);

    private:
        std::string const expression;
};

std::ostream& operator<<(std::ostream &out, const Function& f);

#endif