#include "stdafx.h"
#include "Cylinder.h"
#include "Circle.h"
#include<iostream>
#include <cmath>
using namespace std;

Cylinder::Cylinder(int a, int b, double r, double h, const const char*n):Circle(a,b,r,n)
{
	height = h;
}

void Cylinder::print()
{
	Circle::print();
	cout << "height=" << height << endl;
}
double Cylinder::Area()
{
	double SA;
	SA = (2 * 3.14*radius*height) + (2 * 3.14*radius*radius);
	return SA;
}
double Cylinder::Volume()
{
	double V;
	V = 3.14*height*radius*radius;
	return V;
}
Cylinder::~Cylinder()
{
}
