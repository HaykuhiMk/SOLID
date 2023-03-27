#ifndef ICALCULATOR_H
#define ICALCULATOR_H

class ICalculator
{
public:
    virtual ~ICalculator() = default;
    virtual int toDo(int num1, int num2) = 0;
};

#endif  //ICALCULATOR_H