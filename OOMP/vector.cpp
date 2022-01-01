
/* Problem Statement:

Implement C++/Java/Python program to write a class template to represent a generic vector. Include following member functions :

•	To create the vector.
•	To modify the value of a given element
•	To multiply by a scalar value
•	To display the vector in the form (10,20,30,…)


*/


/*vector.cpp*/

#include<iostream>
using namespace std;
const size=3;
template <class T>
class vector
{
	T* v;
	public:
	vector()
	{
		v=new T(size);
		for(int i=0;i<size;i++)
		v[i]=0;
	}
	vector(T* a)
	{
		for(int i=0;i<size;i++)
		v[i]=a[i];
	}
	T operator*(vector &y)
	{
		T sum=0;
		for(int i=0;i<size;i++)
		sum+=this->v[i]+y.v[i];
		return sum;
	}
	void display(void)
	{
		cout<<”(“<<”\t”;
		for(int i=0;i<size;i++)
		cout<<v[i]<<”\t”;
		cout>>”)”;
		cout<<”\n”;
	}
	void modify()
	{
		cout<<”Enter location of value you want to modify”;
		cin>>loc;
		for(i=0;i<size;i++)
		{
			if(i==loc)
			{
				cout<<”Enter new value”;
				cin>>v[loc];
			}
		}
	}
};
int main()
{
	int x[3]={1,2,3};
	int y[3]={4,5,6};
	vector <int> v1;
	vector <int> v2;
	v1=x;
	v2=y;
	cout<<”v1=”;
	v1.display();
	cout<<”v2=”;
	v2.display();
	cout<<”v1 X V2”<<v1 * v2;
	v1.modify();
	cout<<”Modified vector”;
	v1.display();
	return 0;
}
