#include <iostream>
#include <vector>
#include "../include/Function.h"
#include "../include/Functions.h"
#include "../include/RectangularInterval.h"
#include "../include/GradientDescent.h"
#include "../include/Point.h"

using namespace GradientDescent;

struct Example {
    const Function& f;
    RectangularInterval domain;
    Point starting_point;
    double step;
    int max_iteration;
    double expected_min;
};

void print_result(Example e, int step_print){
    std::cout << "Function: " << e.f << std::endl;
    std::cout << "Final Point - Final Value - Final Gradient Magnitude - Iteration - Status - Error" << std::endl;
    int step = e.max_iteration / step_print;
    int step_remainder = e.max_iteration % step_print;
    Point starting_point = e.starting_point;
    for (int i = 0; i < step; i++)
    {
        Result r = gradient_descent(e.f, e.domain, starting_point, e.step, step_print);
        std::cout << r << " - " << r.final_value - e.expected_min << std::endl;
        starting_point = r.final_point;
        if (r.status == Status::Converged){
            std::cout << std::endl;
            return;
        }
    }
    Result r = gradient_descent(e.f, e.domain, starting_point, e.step, step_remainder);
    std::cout << r << " - " << r.final_value - e.expected_min << std::endl << std::endl;
}

int main(int argc, char **argv){
    constexpr int step_print = 10;
    // Dataset definition
    F1 f1;
    F2 f2;
    F3 f3;
    F4 f4;
    F5 f5;
    F6 f6;
    F7 f7;
    F8 f8;
    const std::vector<Example> dataset = {
        {f1, RectangularInterval{-4.0, 4.0, -4.0, 4.0}, Point{ 3.0, -2.5}, 0.2,  100, 0.0},
        {f2, RectangularInterval{-4.0, 4.0, -4.0, 4.0}, Point{ 3.0, -2.5}, 0.05, 100, 0.0},
        {f3, RectangularInterval{-2.0, 2.0, -2.0, 2.0}, Point{ 1.8, -1.5}, 0.05, 100, 0.0},
        {f4, RectangularInterval{-2.0, 2.0, -2.0, 2.0}, Point{ 1.5, -1.2}, 0.05, 100, 0.0},
        {f4, RectangularInterval{-2.0, 2.0, -2.0, 2.0}, Point{-1.5,  1.2}, 0.05, 100, 0.0},
        {f5, RectangularInterval{-2.0, 2.0, -2.0, 2.0}, Point{ 1.5, -1.2}, 0.1,  100, 0.0},
        {f6, RectangularInterval{-4.0, 4.0, -4.0, 4.0}, Point{ 3.0, -2.5}, 0.5,  100, 0.0},
        {f7, RectangularInterval{-1.5, 1.5, -1.5, 1.5}, Point{ 1.0, -0.8}, 0.5,  100, 0.0},
        {f8, RectangularInterval{-2.0, 2.0, -2.0, 2.0}, Point{ 0.7, -0.6}, 0.05, 100, 0.0}
    };


    for (Example e : dataset){
        print_result(e, step_print);
    }

    return 0;
}