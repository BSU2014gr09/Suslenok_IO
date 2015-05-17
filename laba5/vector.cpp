#include <iostream>
using namespace std;
#include <math.h>
#include "vector.h"

void Vector::enterVector(double a, double b)
{
	x = a;
	y = b;
}

void Vector::vector_print()
{
    cout<<"("<<x<<", "<<y<<")";
}

double Vector::dot_product(Vector b)
{
    return x*b.x+y*b.y;
}

Vector Vector::multiple(double alfa)
{
    Vector c;

    c.x=x*alfa;
    c.y=y*alfa;

    return c;
}

double Vector::length()
{
    double val;

    val=sqrt(x*x+y*y);

    return val;
}

void Vector::normalize()
{
    x/=length();
    y/=length();
}
