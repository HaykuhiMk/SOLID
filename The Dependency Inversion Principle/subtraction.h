#ifndef SUBTRACTION_H
#define SUBTRACTION_H
#include "addition.h"

class Subtraction : public ICalculator
{
public:
    ~Subtraction() = default;
    int toDo(int num1, int num2) override;
};

#endif  //SUBTRACTION_H