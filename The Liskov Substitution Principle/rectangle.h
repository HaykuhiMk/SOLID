#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
class Rectangle : public Shape
{
public:
    Rectangle(double width, double height) : mWidth(width) , mHeight(height) {}
    double area() const override;
    ~Rectangle() = default;

private:
    double mWidth;
    double mHeight;
};
 
#endif  //RECTANGLE_H