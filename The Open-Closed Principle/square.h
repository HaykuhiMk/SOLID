#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square : public Shape
{
public:
    Square(double side) : mSide(side) {} 
    ~Square() = default;
    double area() const override;

private:
    double mSide;
};


#endif  //SQUARE_H
