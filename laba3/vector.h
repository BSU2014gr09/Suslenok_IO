#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

struct Vector
{
    double x, y;
};

void vector_print(Vector v);
void normalize(Vector *v);
Vector dot_product(Vector a, Vector b);
Vector multiple(Vector v, double alfa);
double length(Vector v);

#endif // VECTOR_H_INCLUDED
