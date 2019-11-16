#pragma once
#include "Point.h"
class Circle :
	public Point
{
public:
	virtual void print();
	virtual double Area();
	virtual double Volume();
	Circle(int ,int ,double ,const char*);
	~Circle();
protected:
	double radius;
};

