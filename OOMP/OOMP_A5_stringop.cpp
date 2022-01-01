//============================================================================
// Name        : OOMP_A5.cpp
// Author      : Akshay Chaudhari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstring>
using namespace std;

class stringop
{
private:
	char s1[50];
	int l1,l2;
public:
	void operator = (stringop s);			//equality
	void operator == (stringop s);			//copy
	void operator + (stringop s);			//Concatenate
	void operator << (stringop s);			//Display
	void operator >> (stringop s);			//Reverse
	int length(string s);
	void getstring();
	void clearstring();
	void palcheck();
};
void stringop :: palcheck()
{
	char temp[50];
	cout<<"\nChecking for the Palindrome.....";

}
void stringop :: clearstring()
{
	cout<<"\nClearing the string.....";
	for(int i=0;i<50;i++)
	{
		s1[i]=NULL;
	}
}
void stringop :: getstring()
{
	cout<<"\nEnter the String: ";
	cin>>s1;
}
int stringop :: length(string s)
{
	int len=0;
	for(int i=0;s[i]!=NULL;i++)
	{
		len++;
	}
	return len;
}

void stringop :: operator = (stringop s)
{
	int x;
	l1 = length(s1);
	l2 = length(s.s1);

	if(l1==l2)
	{
		for(int i=0;s1[i]!=NULL;i++)
		{
			if(s1[i]==s.s1[i])
			{
				x=0;
			}
			else
			{
				x=1;
				break;
			}
		}
	}
	if(x != 1)
	{
		cout<<"\nThe strings are equal.... ";
	}
	else
	{
		cout<<"\nThe Strings are not equal....";
	}
}

void stringop :: operator == (stringop s)
{
	int i;
	for(i=0;s.s1[i]!=NULL;i++)
	{
		s1[i]=s.s1[i];
	}
	s1[i]=NULL;
	cout<<"\nCopied string is:"<<s1;
}

void stringop :: operator + (stringop s)
{
	int i,k=0;
	char s3[50];
	l1 = length(s1);
	l2 = length(s.s1);

	for(i=0;i<l1;i++)
	{
		s3[i]= s1[i];
	}
	k=l1;
	for(i=0;i<l2;i++)
	{
		s3[k] = s.s1[i];
		k++;
	}
	//s3[k] = '\o';

	cout<<"\nThe Concatenated string is: "<<s3;

}
void stringop :: operator << (stringop s)
{
	cout<<"\nThe string is:"<<s1<<endl;
}
void stringop :: operator >> (stringop s)
{
	int i;
	char s2[50];
	cout<<"\nReversing the String....";
	l1 = length(s.s1);
	int j = l1-1;
	for(i=0;i<l1;i++)
	{
		s2[i] = s1[j];
		j--;
	}
	//s2[i] = '\o' ;

	cout<<"\nReversed string is:"<<s2;

}


int main()
{

	stringop s1,s2;

	s1.clearstring();
	s2.clearstring();
	cout<<"\nReading two Strings: ";
	s1.getstring();
	s1.operator <<(s1);
	s2.getstring();
	s2.operator <<(s2);
	int ch;
	while(1)
	{
		cout<<"\n**********MENU**********";
		cout<<"\n1.Compare\n2.Copy\n3.Concatenate\n4.Display\n5.Reverse\n6.Palindrome\n7.Occurence of Substring\n8.Exit\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			s1 = s2;
			break;
		case 2:
			s1 == s2;
			break;
		case 3:
				//Concatenate....
				s1 + s2;
			break;
		case 4:
			s1.operator <<(s1);
			s2.operator <<(s2);
			break;
		case 5:
			cout<<"\nReverse for S1: ";
			s1.operator >>(s1);
			cout<<"\nReverse for S2: ";
			s2.operator >>(s2);
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			exit(0);
		default:
			cout<<"\nInvalid choice Entered...";
			break;
		}
	}
	return 0;
}
