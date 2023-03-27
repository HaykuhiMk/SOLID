#ifndef ADDITION_H
#define ADDITION_H
#include "icalculator.h"

class Addition : public ICalculator
{
public:
    ~Addition() = default;
    int toDo(int num1, int num2) override;
};

#endif  //ADDITION_H