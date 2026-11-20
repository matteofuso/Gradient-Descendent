#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Point.h"
#include "Function.h"

class F1 final : public Function {
    public:
        F1();
        double evaluate(const Point& p) const override;
        double evaluate_dx(const Point& p) const override;
        double evaluate_dy(const Point& p) const override;
};

class F2 final : public Function {
    public:
        F2();
        double evaluate(const Point& p) const override;
        double evaluate_dx(const Point& p) const override;
        double evaluate_dy(const Point& p) const override;
};

class F3 final : public Function {
    public:
        F3();
        double evaluate(const Point& p) const override;
        double evaluate_dx(const Point& p) const override;
        double evaluate_dy(const Point& p) const override;
};

class F4 final : public Function {
    public:
        F4();
        double evaluate(const Point& p) const override;
        double evaluate_dx(const Point& p) const override;
        double evaluate_dy(const Point& p) const override;
};

class F5 final : public Function {
    public:
        F5();
        double evaluate(const Point& p) const override;
        double evaluate_dx(const Point& p) const override;
        double evaluate_dy(const Point& p) const override;
};

class F6 final : public Function {
    public:
        F6();
        double evaluate(const Point& p) const override;
        double evaluate_dx(const Point& p) const override;
        double evaluate_dy(const Point& p) const override;
};

class F7 final : public Function {
    public:
        F7();
        double evaluate(const Point& p) const override;
        double evaluate_dx(const Point& p) const override;
        double evaluate_dy(const Point& p) const override;
};

class F8 final : public Function {
    public:
        F8();
        double evaluate(const Point& p) const override;
        double evaluate_dx(const Point& p) const override;
        double evaluate_dy(const Point& p) const override;
};

#endif