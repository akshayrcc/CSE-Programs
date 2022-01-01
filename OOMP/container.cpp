
/* Problem Statement:

Refer the standard template library to use list container and using C++/Java implement following member functions of list class :
empty, insert, merge, reverse, sort


*/


/*container.cpp*/

#include<iostream>
#inlcude<list>
#include<stdlib>
using namespace std;
void display(list <int> &lst)
{
	list<int> :: iterator p;
	for(p=lst.begin();p!=lst.end();++p)
	cout<<*p<<”,”;
	cout<<”\n\n”;
}
int main()
{
	list<int> list1;
	list <int> list2(5);
	for(int i=0;i<3;i++)
	list1.push_back(rand()/100);
	list<int>::iterator p;
	for(p=list2.begin();p!=list2.end();++p)
	*p=rand()/100;
	cout<<”list1\n”;
	display(list1);
	cout<<”list2\n”;
	display(list2);
	//add two elements at the end of list1
	list1.push_front(100);
	list1.push_back(200);
	//remove an element at the front of list2
	list2.pop_front();
	cout<<” Modified list1\n”;
	display(list1);
	cout<<”Modified list2\n”;
	display(list2);
	list<int>listA,listB;
	listA=list1;
	listB=list2;
	//Merging Two lists
	list1.merge(list2);
	cout<<”merged unsorted list”;
	display(list1);

	//sorting and merging
	listA.sort();
	listB.sort();
	listA.merge(listB);
	cout<<”Merged sorted list\n”;
	display(listA);

	//Reversing a list
	listA.reverse();
	cout<<”Reversed sorted list\n”;
	display(listA);
	return 0;
}
