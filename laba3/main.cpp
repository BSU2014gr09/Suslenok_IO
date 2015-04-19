#include <iostream>
using namespace std;

#include "vector.h"

int main()
{
    Vector v={2,3}, a={3,4};

    vector_print(v);
    cout<<endl;

    vector_print(multiple(v, 0.5));
    cout<<endl;
    vector_print(dot_product(v, a));
    cout<<endl;

    normalize(&v);
    vector_print(v);

    return 0;
}
