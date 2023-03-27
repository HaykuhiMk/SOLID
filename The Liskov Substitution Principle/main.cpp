
#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "square.h"

void printArea(const Shape& shp);

int main()
{
    Rectangle rec(2.5, 6.3);
    Square sq(7.5);
    printArea(rec);
    printArea(sq);
}

void printArea(const Shape& shp)
{
    std::cout << shp.area() << std::endl;
}
