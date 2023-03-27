#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "resultSaver.h"

class Calculator
{
public:
    Calculator(const ResultSaver& rs);
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);
    
private:
    ResultSaver mResSev;
};

#endif  //CALCULATOR_H