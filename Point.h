#pragma once
#include "Shape.h"
class Point :
	public Shape
{
public:
	Point(int  , int ,const char* );
	virtual void print();
	virtual double Area();
	virtual double Volume();
	~Point();
protected:
	int x, y;
};

