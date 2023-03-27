#ifndef AREA_CALCULATOR_H
#define AREA_CALCULATOR_H
#include <vector>
#include "shape.h"

class AreaCalculator
{
public:
    double calculateArea(const std::vector<Shape*>& shapes);
};

#endif  //AREA_CALCULATOR_H
