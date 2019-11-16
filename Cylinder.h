#pragma once
#include "Circle.h"
class Cylinder :public Circle
{
public:
	Cylinder(int ,int ,double,double,const const char*);
	void print();
    double Area() ;
	 double Volume();
	~Cylinder();
protected:
	double height;
};

