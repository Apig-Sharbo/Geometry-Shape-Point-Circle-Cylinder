#pragma once
class Shape
{
public:
	Shape(const char *);
	virtual void print();
	virtual double Area() = 0;
	virtual double Volume() = 0;
	~Shape();
protected:
	char *name;
};

