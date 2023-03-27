#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{
public:
    Circle(double radius) : mRadius(radius) {}
    ~Circle() = default; 
    double area() const override;

private:
    double mRadius;
};

#endif  //CIRCLE_H
