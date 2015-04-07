#include<iostream>
#include<iomanip>
#include<fstream>
#include"func.h"
using namespace std;

void initArr(float **&a, float *&p, int &n, int &m)
{
	ifstream in("in.txt");
	in >> n;
	in >> m;
	a = new float *[n];
	for (float ** i = a; i < a + n; i++)
	{
		*i = new float[m];
	}
	for (float **i = a; i < a+n; i++)
		for (int j = 0; j < m; j++)
			in >> (*i)[j];
	p = new float[m];
	for (int i = 0; i < m; i++)
		in >> p[i];
	in.close();
}

int nmbSignChange(float * a, int n)
{
	int nmb = 0;
	for (int i = 0; i < n - 1; i++)
		nmb += (a[i] * a[i + 1] <= 0 && a[i]-a[i+1]);
	return nmb;
}

float * searchMaxSignChange(float **a, int n, int m){
	int max = 0;
	float *pToMax = *a;
	for (float **i = a; i < a + n; i++)
	{
		pToMax = (nmbSignChange(*i, m) > max) ? *i : pToMax;
	}
	return pToMax;
}

float multiply(float *p1, float *p2, int n)
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