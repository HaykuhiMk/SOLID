#include <iostream>
#include <vector>
#include "shape.h"
#include "areaCalculator.h"
#include "circle.h"
#include "square.h"

int main()
{
    std::vector<Shape*> shapes = {new Circle(2.5), new Square(3.6)};
    AreaCalculator calculator;
    std::cout << calculator.calculateArea(shapes);
}
