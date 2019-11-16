// Geometry.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
using namespace std;
int main()
{
	/*Shape *ob;
	ob = new Point(10, 20, "Point");
	ob->print();
	cout<<"Area of a Point ="<<ob->Area()<<endl;
	cout << "Volume of a Point =" << ob->Volume()<<endl;
	cout << endl;
	delete ob;
	ob = new Circle(10,20, 1 / 1.7720045146669350401991125097536,"Circle");
	ob->print();
	cout << "Area of a Circle =" << ob->Area() << endl;
	cout << "Volume of a Volume =" << ob->Volume() << endl;
	delete ob;
	cout << endl;
	ob = new Cylinder(10, 20, 1 / 1.7720045146669350401991125097536, 10,"Cylinder");
	ob->print();
	cout << "Surface Area of a Circle =" << ob->Area() << endl;
	cout << "Volume of a Volume =" << ob->Volume() << endl;
	delete ob;*/
	Shape *ob[2] = { new Point p(10,5,"Point"),new Circle(10,20, 1 / 1.7720045146669350401991125097536,"Circle")};
	ob[1]->print();
	ob[2]->print();
    return 0;
}

