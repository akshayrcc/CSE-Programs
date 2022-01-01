//============================================================================
// Name        : Shape.cpp
// Author      : Akshay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

class shape
{
private:
	float x,y,area;
public:
	void display()
	{
		cout<<"\nThe area is: "<<area;
	}
	void virtual calculate() = 0;
	void putx(float m)
	{
		x = m;
	}
	void puty(float n)
	{
		y = n;
	}
	void putarea(float a)
	{
		area = a;
	}
	float getx()
	{
		return x;
	}
	float gety()
	{
		return y;
	}
};
class triangle : public shape
{
private:
	float height,base;
public:
	void accept()
	{
		cout<<"\nEnter the height of triangle:";
		cin>>height;
		putx(height);
		cout<<"\nEnter the base length of the triangle:";
		cin>>base;
		puty(base);
	}
	void calculate()
	{
		cout<<"\nFor Triangle:";
		float area = 0.5 * getx() * gety();
		putarea(area);
	}
};
class rectangle : public shape
{
private:
	float l,b;
public:
	void accept()
	{
		cout<<"\nEnter the length of rectangle:";
		cin>>l;
		putx(l);
		cout<<"\nEnter the breadth of rectangle:";
		cin>>b;
		puty(b);
	}
	void calculate()
	{
		cout<<"\nFor Rectangle:";
		float area= getx() * gety();
		putarea(area);
	}
};
int main()
{
	triangle t1;
	rectangle r1;
	int ch;
	while(1)
	{
	cout<<"\n**********MENU**********";
	cout<<"\nAREA CALCULATION....\n1.For Triangle\n2.For Rectangle\n3.Exit\nEnter your choice: ";
	cin>>ch;
	switch(ch)
	{
	case 1:
		t1.accept();
		t1.calculate();
		t1.display();
		break;
	case 2:
		r1.accept();
		r1.calculate();
		r1.display();
		break;
	case 3:
		exit(0);
		break;
	default:
		cout<<"\nInvalid Choice";
		break;
	}
	}
	return 0;
}
