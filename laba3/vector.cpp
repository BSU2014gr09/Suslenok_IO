#include <iostream>
using namespace std;
#include <math.h>
#include "vector.h"


void vector_print(Vector v)
{
    cout<<"("<<v.x<<", "<<v.y<<")";
}

Vector dot_product(Vector a, Vector b)
{
    Vector c;

    c.x=a.x*b.x;
    c.y=a.y*b.y;

    return c;
}

Vector multiple(Vector v, double alfa)
{
    Vector c;

    c.x=v.x*alfa;
    c.y=v.y*alfa;

    return c;
}

double length(Vector v)
{
    double val;

    val=sqrt(v.x*v.x+v.y*v.y);

    return val;
}

void normalize(Vector *v)
{
    v->x/=length(*v);
    v->y/=length(*v);
}
