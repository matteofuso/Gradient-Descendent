#ifndef GRADIENT_DESCENT_H
#define GRADIENT_DESCENT_H

#include "Function.h"
#include "RectangularInterval.h"

namespace GradientDescent {
    class OutOfDomainException{};
    class InvalidStepException{};

    enum class Status {
        Converged,
        Diverged,
        MaxIterationsReached
    };

    struct Result {
        Point final_point;
        double final_value;
        double final_error;
        double final_gradient_magnitude;
        unsigned int iterations;
        Status status;
    };

    Result gradient_descent(const Function& f, const RectangularInterval& domain, const Point& p, double step, double expected_min, unsigned int max_iteractions, double epsilon = 1E-6);

    std::ostream& operator << (std::ostream& out, const Result& res);
}

#endif