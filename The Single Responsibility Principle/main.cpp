#include <iostream>
#include "calculator.h"
#include "resultSaver.h"

int main()
{
    ResultSaver resSev;
    Calculator calc(resSev);
    std::cout << calc.add(2, 4);
}