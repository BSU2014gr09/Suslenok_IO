#include <iostream>
using namespace std;

#include "vector.h"

int main()
{
    Vector v={2,3}, a={3,4},rez;

    v.vector_print();
    // TODO чтобы заработало cout<<"first vector= "<<v<<" Fnd now, second:"endl;
    cout<<endl;

	v.multiple(0.5).vector_print();
        cout<<endl;
	cout<<v.dot_product(a)<<endl;
    cout<<endl;
/* TODO
	rez=v*5;cout<<rez<<endl;
	rez=v*a;cout<<rez<<endl;
*/
    v.normalize();
    v.vector_print();

    return 0;
}
