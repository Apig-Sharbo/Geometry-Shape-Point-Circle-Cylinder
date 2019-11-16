#include "stdafx.h"
#include "Circle.h"
#include "Point.h"
#include "Shape.h"
#include <cmath>
#include <iostream>
using namespace std;


Circle::Circle( int a, int b,double r,const char *n):Point(a,b,n)
{
	radius = abs(r);
}
void Circle::print()
{
	Point::print();
	cout << "radius=" << radius << endl;
}
double Circle::Area()
{
	double S;
	S = 3.14*radius*radius;
	return S;
}
double Circle::Volume()
{
	return 0;
}
Circle::~Circle()
{
}
