
/* Problem Statement:

Design a C++ Class ‘Complex’ with data members for real and imaginary part. Provide default and parameterized constructors. Write a program to perform arithmetic operations of two complex numbers using operator overloading (using either member functions or friend functions).

*/


/* Complex.cpp*/

#include<iostream>
Using namespace std;

class complex
{
  float real,imag;
  public:
  complex()
  {
    real=imag=0;
  }

  void getdata()
  {
    cout<<"\nEnter the real and imaginary part of complex no : ";
    cin>>real>>imag;
  }

  void display()
  {
    cout<<"\n"<<real<<"+"<<imag<<"i";
  }

  complex operator +(complex c1)
  {
    complex c3;
    c3.real=real+c1.real;
    c3.imag=imag+c1.imag;
    return c3;
  }

  complex operator -(complex c1)
  {
    complex c3;
    c3.real=real-c1.real;
    c3.imag=imag-c1.imag;
    return c3;
  }

  complex operator *(complex c1)
  {
    complex c3;
    c3.real=real*c1.real-imag*c1.imag;
    c3.imag=real*c1.imag+imag*c1.real;
    return c3;
  }

  complex operator /(complex c1)
  {
    complex c3;
    float den;
    den=c1.real*c1.real-c1.imag*c1.imag;
    c1.imag=c1.imag*(-1);
    c3.real=real*c1.real-imag*c1.imag;
    c3.imag=real*c1.imag+imag*c1.real;
    c3.real=c3.real/den;
    c3.imag=c3.imag/den;
    return c3;
  }
};

void main()
{
  int m;
  char n;
  complex c1,c2,c3,c4,c5,c6;
  c1.getdata();
  c2.getdata();
  cout<<"\nGiven two complex numbers:\n";
  c1.display();
  c2.display();
  do
  {
  cout<<"\nMENU:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nChoice= ";
  cin>>m;
  switch(m)
  {
  case 1: cout<<"\n\nAddition:\n ";
	  c3=c1+c2;
	  c3.display();
	  break;
  case 2: cout<<"\n\nSubtraction:\n ";
	  c4=c1-c2;
	  c4.display();
	  break;
  case 3: cout<<"\n\nMultiplication:\n ";
	  c5=c1*c2;
	  c5.display();
	  break;
  case 4: cout<<"\n\nDivision:\n ";
	  c6=c1/c2;
	  c6.display();
	  break;
  }
  cout<<"\nDo you want to continue-y/n : ";
  cin>>n;
  }while(n=='y');
}
