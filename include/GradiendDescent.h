#ifndef GRADIENT_DESCENT_H
#define GRADIENT_DESCENT_H

#include "Function.h"
#include "RectangularInterval.h"

namespace GradientDescent {
    double gradient_descent(const Function& f, const RectangularInterval& domain, const Point& p, double step, unsigned int N);
}

#endif