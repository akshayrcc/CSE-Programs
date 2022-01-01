
/* Problem Statement:

Write a C++/Java program for the following :
1) 	A function to read two double type numbers from keyboard.
2) 	A function to calculate the division of these two numbers.
3) 	A try block to throw an exception when a wrong type of data is keyed in.
4) 	A try block to detect and throw an exception if the condition “divide-by-zero” 	occurs.	
5) 	Appropriate catch block to handle the exceptions thrown.


*/


/*exception.cpp*/

#include<iostream>
using namespace std;
void divide(double x,double y)
{
	try
	{
		if(y==0.0)
		throw y;
		else
		cout<<”Result=”<<x/y;
	}
	catch(double)
	{
		cout<<”divide by zero error \n”
	}
}
int Main()
{
	divide(15.5  ,5.0);
	divide(13.0 ,0.0);
	return 0;
}
