#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

class Vector
{
	private:
		double x, y;
	public:
	//TODO Great 4
		Vector(double a, double b) : x(a), y(b){}	
		Vector() :x(0), y(0){}                        
		~Vector()
	
		void enterVector(double, double);
		void vector_print();
		void normalize();
		double dot_product(Vector);
		Vector multiple(double);
		double length();

};

#endif // VECTOR_H_INCLUDED
