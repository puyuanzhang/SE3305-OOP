#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <iostream>
using namespace std;
class Circle:public Point
{
public:
    Circle(float x = 0,float y = 0,float r = 0);
    void setRadius(float);
    float getRadius() const;
    float area() const;
    friend ostream &operator <<(iostream &,const Circle &);

protected:
    float radius;
};

#endif
