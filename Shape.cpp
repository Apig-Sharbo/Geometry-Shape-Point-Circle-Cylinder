#include "stdafx.h"
#include "Shape.h"
#include <iostream>
using namespace std;


Shape::Shape(const char *n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void Shape::print()
{
	cout << "Shape:" << name << endl;
}
Shape::~Shape()
{
	delete[]name;
}
