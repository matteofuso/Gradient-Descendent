#include "../include/GradiendDescent.h"
#include "../include/Vector2D.h"
#include "../include/Function.h"
#include "../include/RectangularInterval.h"


GradientDescent::Result GradientDescent::gradient_descent(const Function& f, const RectangularInterval& domain, const Point& p, double step, double expected_min, unsigned int max_iteractions, double epsilon){
    double x = p.getX();
    double y = p.getY();
    
    if(!domain.contains(p))
        throw GradientDescent::OutOfDomainException();
    
    if(step < 0)
        throw GradientDescent::InvalidStepException();

    GradientDescent::Status s;
    Point point_k = p;
    unsigned int k = 0;
    Vector2D gradient_k = f.evaluate_gradient(point_k);
    while(k < max_iteractions && gradient_k.magnitude() > epsilon && domain.contains(point_k)){
        point_k = point_k - step * gradient_k;
        k++;
        gradient_k = f.evaluate_gradient(point_k);
    }
    if(k == max_iteractions)
        s = GradientDescent::Status::MaxIterationsReached;
    else if(gradient_k.magnitude() <= epsilon)
            s = GradientDescent::Status::Converged;
        else
            s = GradientDescent::Status::Diverged;
    double f_k = f.evaluate(point_k);
    return GradientDescent::Result { point_k, f_k, f_k - expected_min, gradient_k.magnitude(), k, s};
}