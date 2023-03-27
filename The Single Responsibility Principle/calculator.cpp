#include <iostream>
#include "calculator.h"
#include "resultSaver.h"

Calculator::Calculator(const ResultSaver& rs)
{
    mResSev = rs;
}

int Calculator::add(int a, int b)
{
    int tmp = a + b;
    mResSev.saveResult(tmp);
    return tmp;
}
int Calculator::subtract(int a, int b)
{
    int tmp = a - b;
    mResSev.saveResult(tmp);
    return tmp;
}
int Calculator::multiply(int a, int b)
{
    int tmp = a * b;
    mResSev.saveResult(tmp);
    return tmp;
}
int Calculator::divide(int a, int b)
{
    if (b == 0)
    {
        throw std::runtime_error("division by zero");
    }
    int tmp = a / b;
    mResSev.saveResult(tmp);
    return tmp;
}

