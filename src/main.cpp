#include <iostream>
#include "../include/Function.h"
#include "../include/Functions.h"

int main(int argc, char **argv){
    F1 f1;
    std::cout<<f1<<std::endl;
    std::cout<<f1.evaluate_dx(Point(1,2))<<std::endl;
    return 0;
}