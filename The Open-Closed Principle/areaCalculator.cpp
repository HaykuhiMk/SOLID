#include <iostream>
#include "areaCalculator.h"
#include "shape.h"
#include "circle.h"
#include "square.h"

double AreaCalculator::calculateArea(const std::vector<Shape*>& shapes)
{
    double totalArea = 0.0;
    for (const auto& shape : shapes)
    {
        totalArea += shape->area();
    }
    return totalArea;
}   
