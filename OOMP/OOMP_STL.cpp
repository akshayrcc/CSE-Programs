//============================================================================
// Name        : OOMP_B9.cpp
// Author      : Akshay Chaudhari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
using namespace std;

int main()
{
	list<char> coll;
	for(char c = 'a';c != 'z';++c)
	{
		coll.push_back(c);
	}
	list<char> :: const_iterator pos;
	for( pos = coll.begin();pos!= coll.end();pos)
	{
		cout<< *pos <<" ";
	}
	cout<<endl;

	return 0;
}
