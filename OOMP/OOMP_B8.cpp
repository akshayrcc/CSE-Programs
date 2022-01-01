//============================================================================
// Name        : OOMP_B8.cpp
// Author      : Akshay Chaudhari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Div
{
private:
	double num,den,result;
public:
	void Read();
	void Division();
	void Validation();
};
void Div :: Read()
{
	cout<<"\nEnter the Two Double Values for Division......";
	cout<<"\nEnter the Numerator:";
	cin>>num;
	if(cin.fail())
	{
		throw 'x';
	}
	cout<<"\nEnter the Denominator";
	cin>>den;
	if(cin.fail())
	{
		throw 'x';
	}
}
void Div :: Division()
{
	if(den == 0)
	{
		throw (1);
	}
	else
	{
	cout<<"\nThe Division is "<<(num / den);
	}
}
void Div :: Validation()
{

}
int main()
{
	Div d1;
	try
	{
		d1.Read();
		d1.Division();

	}
	catch (char a)
	{
		if(a == 'x')
		cout<<"\nThe Inputs are non-double......";
	}
	catch (int b)
	{
		if(b == 1)
		{
			cout<<"\nDivide by zero Error....";
		}

	}
	return 0;
}
