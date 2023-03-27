#include <iostream>
#include "addition.h"
#include "calculator.h"
#include "icalculator.h"
#include "subtraction.h"

int main()
{
    Addition add;
    Calculator calculator(&add);
    std::cout << calculator.calculate(5, 8) << std::endl;
    Subtraction sub;
    calculator = Calculator(&sub);
    std::cout << calculator.calculate(1, 2) << std::endl;
}