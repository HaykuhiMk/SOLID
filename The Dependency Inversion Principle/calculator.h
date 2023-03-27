#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "icalculator.h"

class Calculator 
{
public:
    Calculator(ICalculator* iclc) : ptrC(iclc) {}
    int calculate(int num1, int num2);
    ~Calculator() = default;
private:
    ICalculator* ptrC;
};

#endif  //CALCULATOR_H