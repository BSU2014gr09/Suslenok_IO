#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

class Vector
{
	private:
		double x, y;
	public:
	//TODO Great 4
		Vector(double a, double b) : x(a), y(b){}	// constructor
		Vector() :x(0), y(0){}                         // Default constructor
		// destructor
		// copy constructor
		// operator=
		
		void enterVector(double, double);
		void vector_print();//TODO лучше перегрузить оператор <<
		//TODO нет операторов SET и GET
		void normalize();
		double dot_product(Vector);
		Vector multiple(double);
		double length();

};

#endif // VECTOR_H_INCLUDED
