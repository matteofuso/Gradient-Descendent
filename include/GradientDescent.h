#ifndef GRADIENT_DESCENT_H
#define GRADIENT_DESCENT_H

#include "Function.h"
#include "RectangularInterval.h"

// Namespace containing Gradient Descent algorithm and needed Structs
namespace GradientDescent
{
    // Exception for when a point is out of the domain
    class OutOfDomainException
    {
    };

    // Exception for when you input an invalid step
    class InvalidStepException
    {
    };

    // Status of the instance of the alghorithm
    enum class Status
    {
        Converged,
        Diverged,
        MaxIterationsReached
    };

    // Result data from the alghorithm
    struct Result
    {
        Point final_point;
        double final_value;
        double final_gradient_magnitude;
        unsigned int iterations;
        Status status;
    };

    // Gradient Descent Algorithm
    Result gradient_descent(const Function &f, const RectangularInterval &domain, const Point &p, double step, unsigned int max_iteractions, double epsilon = 1E-6);

    // Operator used to concatenate the status expression in output streams
    std::ostream &operator<<(std::ostream &out, const Status &status);
    // Operator used to concatenate the result expression in output streams
    std::ostream &operator<<(std::ostream &out, const Result &res);
}

#endif