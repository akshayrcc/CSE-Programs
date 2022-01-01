//============================================================================
// Name        : OOMP_B7.cpp
// Author      : Akshay Chaudhari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include<stdlib.h>
using namespace std;
class mylist
{
private:
	list <int> l1,l2;
	list<int> :: const_iterator dis;
	int n,item,no,insrt;
public:
	void Display();
	void Empty();
	void Rev();
	void create();
	void Sort();
	void Merge();
	void Insert();
};
void mylist :: Insert()
{
	int ins;
	cout<<"\nEnter the Value to be Inserted";
	cin>>ins;
	//++insrt;
	l1.push_back(ins);
}
void mylist :: create()
{
	int i;
	cout<<"\nEnter the No. of Elements ";
	cin>>n;
	cout<<"\nEnter the Elements:";
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter:";
		cin>>item;
		l1.push_back(item);

	}
	//insrt=i;
}
void mylist :: Display()
{
	cout<<"\n List is:";
	for( dis = l1.begin();dis!= l1.end();++dis)
	{
		cout<< *dis <<" ";
	}
	cout<<endl;
}

void mylist :: Empty()
{
	l1.empty();
}
void mylist :: Rev()
{
	l1.reverse();
}
void mylist :: Sort()
{
	l1.sort();
}
void mylist :: Merge()
{
	cout<<"\nFor Merging.....Enter the Other List:";
	cout<<"\nEnter the No. of Elements in the  2nd List: ";
	cin>>no;
	cout<<"\nEnter the Elements:";
	for(int i=0;i<no;i++)
	{
		cout<<"\nEnter:";
		cin>>item;
		l2.push_back(item);
	}
	l1.merge(l2);
}
int main()
{
	mylist m1;
	int ch;
	//Getting the Elements
	m1.create();

	while(1)
	{
	cout<<"\n**********MENU FOR LIST OPERATIONS**********";
	cout<<"\n1.Empty the List\n2.Reverse the List\n3.Sort the List\n4.Merge the Other list\n5.Insert the new Item\n6.Display the List\n7.Exit\nEnter your Choice: ";
	cin>>ch;
	switch(ch)
	{
	case 1:
		//Emptying the List....
		m1.Empty();
		m1.Display();
		break;
	case 2:
		//Reversing the List
		m1.Rev();
		m1.Display();
		break;
	case 3:
		//Sorting the list
		m1.Sort();
		m1.Display();
		break;
	case 4:
		//Merging the Other List
		m1.Merge();
		m1.Display();
		break;
	case 5:
		//Inserting the Element
		m1.Insert();
		m1.Display();
		break;
	case 6:
		//Displaying the Elements......
		m1.Display();
		break;
	case 7: exit(0);

	default: cout<<endl<<"Invalid choice";

	}
	}
	return 0;
}
