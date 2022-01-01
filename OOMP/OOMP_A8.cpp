//============================================================================
// Name        : OOMP_A8.cpp
// Author      : Akshay Chaudhari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>

using namespace std;
class Base_Stud
{
private:
	char name[50];
	char subject[24];
	int roll_no;
};
class Derived_Stud : public Base_Stud
{
public:
	int sub_code;
	int internal_marks;
	int theory_marks;
	void input()
	{
		cout<<"\nDetails of Student..........";
		cout<<"\nEnter the name of the Student:";
		cin>>name;
		cout<<"\nEnter the Roll Number:";
		cin>>roll_no;
		cout<<"\nEnter the subject name:";
		cin>>subject;
		cout<<"\nEnter the subject code";
		cin>>sub_code;
		cout<<"\nEnter the internal Marks Obtained:";
		cin>>internal_marks;
		cout<<"\nEnter the Theory Exam Marks Obtained:";
		cin>>theory_marks;
		cout<<"\nThank You for the Data Entry!!!";
	}
	void display()
	{
		cout<<"\nDetails of Student is..........";
		cout<<"\n----------------------------------------------------------------------------------------------------------------------------------";
		cout<<"\nRoll_No."<<setw(24)<<"Name  "<<setw(24)<<"Subject"<<setw(24)<<"Subject Code"<<setw(24)<<"Internal Marks"<<setw(24)<<"External Marks"<<endl;
		cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<roll_no<<setw(24)<<name<<setw(24)<<subject<<setw(24)<<sub_code<<setw(24)<<internal_marks<<setw(24)<<theory_marks<<endl;
		cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
	}
	void master_disp()
	{
		cout<<"\n----------------------------------------------------------------------------------------------------------------------------------";
		cout<<"\nRoll No."<<setw(24)<<"Name   "<<setw(24)<<"Subject"<<setw(24)<<"Subject Code"<<setw(24)<<"Internal Marks"<<setw(24)<<"External Marks"<<endl;
		cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
	}
	void disp()
	{
		cout<<roll_no<<setw(24)<<name<<setw(24)<<subject<<setw(24)<<sub_code<<setw(24)<<internal_marks<<setw(24)<<theory_marks<<endl;
		cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;

	}
};
int main()
{
	int n,ch;
	char name[50];
	char name2[50];
	int flag = 0;
	Derived_Stud s,s1[100];
	//Reading the Records...........
	cout<<"\nEnter the Number of Student for the record Entry:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	s1[i].input();
	s1[i].display();
	cout<<"\nRecord Entered Successfully........."<<endl;
	}
	while(1)
	{
	cout<<"\n**********MENU FOR THE OPERATIONS**********";
	cout<<"\n1.Display the Records\n2.Insert New Record\n3.Search for a Record\n4.Edit a Record\n5.Exit\nEnter your Choice:";
	cin>>ch;
	switch(ch)
	{
	case 1:
		//Records Displaying............
		cout<<"\n*************DETAILS RECORD******************";
		s.master_disp();
		for(int i=1;i<=n;i++)
		{
		s1[i].disp();
		}
		break;
	case 2:
		//Record Appending..........
		cout<<"\nEnter the Record  details..";
		n++;
		s1[n].input();
		s1[n].display();
		cout<<"\nRecord Entered Successfully.........";
		break;
	case 3:
		//Searching for Record..............
		cout<<"Enter the Name for Searching the Record:";
		cin>>name;
		for(int i=1;i<=n;i++)
		{
			if( strcmp(s1[i].name , name) == 0  )
			{
				cout<<"Record Found!";
				s1[i].display();
				flag = 0;
			}
			else
			{
				flag = 1;
			}
		}
		if(flag == 1)
		{
			cout<<"\n No Matching Record Found.................";
		}
		break;
	case 4:
		//Editing A Record..........
		cout<<"Enter the Name for Editing the Record:";
		cin>>name2;
		for(int i=1;i<=n;i++)
		{
		if( strcmp(s1[i].name , name2) == 0  )
		{
			cout<<"Record Found!";
			s1[i].display();
			cout<<"\nModifying.............";
			s1[i].input();
			s1[i].display();
		}
		}
		break;
	case 5:
		exit(0);
		break;
	default:
		cout<<"\nInvalid choice Entered...Please Re-Enter The choice";
		break;
	}
}
	return 0;
}
