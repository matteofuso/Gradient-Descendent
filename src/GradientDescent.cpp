#include "../include/GradientDescent.h"
#include "../include/Vector2D.h"
#include "../include/Function.h"
#include "../include/RectangularInterval.h"

namespace GradientDescent
{
    Result gradient_descent(const Function &f, const RectangularInterval &domain, const Point &p, double step, unsigned int max_iteractions, double epsilon)
    {
        // Boundary Check
        if (!domain.contains(p))
            throw OutOfDomainException();

        // Input check
        if (step <= 0)
            throw InvalidStepException();

        // Initialization of variables
        Status s;
        Point point_k = p;
        unsigned int k = 0;
        Vector2D gradient_k = f.evaluate_gradient(point_k);

        // main loop
        while (k < max_iteractions && gradient_k.magnitude() >= epsilon && domain.contains(point_k))
        {
            // Updating variables for each step
            point_k = point_k - step * gradient_k;
            ++k;
            gradient_k = f.evaluate_gradient(point_k);
        }

        // Logic behind status
        if (!domain.contains(point_k))
            s = Status::Diverged;
        else if (gradient_k.magnitude() < epsilon)
            s = Status::Converged;
        else
            s = Status::MaxIterationsReached;

        // Formatting output
        double f_k = f.evaluate(point_k);
        return Result{point_k, f_k, gradient_k.magnitude(), k, s};
    }

    // Definition of << operator for output purposes
    std::ostream &operator<<(std::ostream &out, const Status &status)
    {
        switch (status)
        {
        case Status::Converged:
            return out << "Converged";
        case Status::MaxIterationsReached:
            return out << "MaxIterationsReached";
        case Status::Diverged:
            return out << "Diverged";
        }
        return out << "Unknown";
    }

    // Definition of << operator for output purposes
    std::ostream &operator<<(std::ostream &out, const Result &res)
    {
        out << res.final_point << " - " << res.final_value << " - " << res.final_gradient_magnitude << " - " << res.iterations << " - " << res.status;
        return out;
    }
}