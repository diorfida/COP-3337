#include "Circle2D.h"

int Circle2D::numberOfCircles = 0;

Circle2D::Circle2D(double _x, double _y, double _radius)
{
    x = _x;
    y = _y;
    radius = _radius;
    numberOfCircles++;
}

Circle2D::Circle2D(const Circle2D & circle)
{
    x = circle.getX();
    y = circle.getY();
    radius = circle.getRadius();
    numberOfCircles++;
}

Circle2D::~Circle2D()
{
    numberOfCircles--;
}

double Circle2D::getX() const
{
    return x;
}

double Circle2D::getY() const
{
    return y;
}

double Circle2D::getRadius() const
{
    return radius;
}

int Circle2D::getNumberOfCircles()
{
    return numberOfCircles;
}

bool Circle2D::overlaps(const Circle2D & circle) const
{
    double distance = sqrt(pow(x - circle.getX(), 2) + pow(y - circle.getY(), 2));
    if(distance < (radius + circle.getRadius()))
        return true;
    return false;
}