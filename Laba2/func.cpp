#include<iostream>
#include<iomanip>
#include<fstream>
#include"func.h"
using namespace std;

void initArr(float **&a, float *&p, int &n, int &m)
{
	ifstream in("in.txt");
	in >> n;//выделили размеры
	in >> m;
	a = new float *[n];// выделяем н ячеек памяти указательна флоат
	for (float ** i = a; i < a + n; i++)//выделяем память для обычных массиво
	{
		*i = new float[m];// начиая с этого указателя выделяем память
	}
	for (float **i = a; i < a+n; i++) 
		for (int j = 0; j < m; j++)
			in >> (*i)[j];//водим из файла
	p = new float[m];
	for (int i = 0; i < m; i++)
		in >> p[i];// вводим вектор
	in.close();//закрываем файлувую перемнную
}

int nmbSignChange(float * a, int n)//  коолечество перемены знаков в строке
{
	int nmb = 0;
	for (int i = 0; i < n - 1; i++)
		nmb += (a[i] * a[i + 1] <= 0 && a[i]-a[i+1]);
	return nmb;
}

float * searchMaxSignChange(float **a, int n, int m){// максимальное количество смены знаков в строке
	int max = 0;
	float *pToMax = *a;
	for (float **i = a; i < a + n; i++)
	{
		pToMax = (nmbSignChange(*i, m) > max) ? *i : pToMax;
	}
	return pToMax;
}

float multiply(float *p1, float *p2, int n)/
{
	float mult = 0;
	for (int i = 0; i < n; i++)
		mult += p1[i] * p2[i];
	return mult;
}

void justDoIt()
{
	ofstream out("out.txt");
	float **arr, *v;
	int n, m;
	initArr(arr, v, n, m);
	float *p = searchMaxSignChange(arr, n, m);
	out << multiply(p, v, m);
	out.close();
}