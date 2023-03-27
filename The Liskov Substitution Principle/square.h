#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square : public Shape
{
public:
    Square(double size) : mSize(size) {}
    double area() const override;
    ~Square() = default;

private:
    double mSize;
};

#endif  //SQUARE_H