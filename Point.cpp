#include "stdafx.h"
#include "Point.h"
#include "Shape.h"
#include <iostream>
using namespace std;


Point::Point(int a,int b,const char *n):Shape(n)
{
	x = a;
	y = b;
}
void Point::print()
{
	Shape::print();
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
}
double Point::Area()
{
	return 0;
}
double Point::Volume()
{
	return 0;
}
Point::~Point()
{
}
