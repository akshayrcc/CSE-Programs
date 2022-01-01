
/* Problem Statement:

Develop an object oriented program in C++ to create a database of the personnel information system containing the following information: Name, Date of Birth, Blood group, Height, Weight, Insurance Policy, number, Contact address, telephone number, driving license no. etc Construct the database with suitable member functions for initializing and destroying the data viz. constructor, default constructor, copy, constructor, destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation operators-new and delete.

*/

/* Personnel.cpp*/
#include<iostream>
#include<string.h>
#include<iomanip.h>

class db
{
	char nm[20];
  	char dob[10];
  	char bg[3];
  	float wt;
  	float ht;
 	int ins;
  	long no;
  	public:
  	static int stdno;
  	static void count()
  	{
    		cout<<"\nNo. of objects created: "<<stdno;
  	}
	void fin() { cout<<"\nInline Function!";}

  	db()
  	{
	 	strcpy(nm,"Name");
    		strcpy(dob,"DOB");
    		strcpy(bg,"BG");
    		wt=ins=ht=no=0;
    		++stdno;
  	}
  	db (db *ob)
  	{
    		strcpy(nm,ob->nm);
    		strcpy(dob,ob->dob);
    		strcpy(bg,ob->bg);
    		wt=ob->wt;
    		ht=ob->ht;
    		ins=ob->ins;
    		no=ob->no;
  	}

  	void getdata()
  	{
    		cout<<"\n\nEnter: name, dob, blood grp, weight, height, insurance policy no,
		contact no-\n";
    		cin>>nm>>dob>>bg>>wt>>ht>>ins>>no;
  	}
  	friend void display(db d);

  	~db()
  	{
    		cout<<"\n\n"<<this->nm<<"(Object) is destroyed!";
  	}
};


void display(db d)
{
	cout<<"\n"<<setw(10)<<d.nm<<setw(15)<<d.dob<<setw(8)<<d.bg<<setw(5)<<d.wt
	<<setw(5)<<d.ht<<setw(10)<<d.ins<<setw(15)<<d.no;
}

int db::stdno;

void main()
{
   	clrscr();
   	int n,i;
   	db d1,*ptr[5];
   	cout<<"\nDefault values:";
   	display(d1);
   	d1.getdata();
   	display(d1);
   	db d2(&d1);
   	cout<<"\n\nUse of copy constructor :\n";
   	display(d2);
   	cout<<"\nHow many objects u want to create?:";
   	cin>>n;
   	for(i=0;i<n;i++)
   	{
   		ptr[i]=new db();
    		ptr[i]->getdata();
   	}
   	cout<<"\n"<<setw(10)<<"Name"<<setw(15)<<"Date of Birth"<<setw(8)
	<<"Blood grp"<<setw(5)<<"Weight"<<setw(5)<<"Height"<<setw(10)<<"Ins 
	no"<<setw(15)<<"Contact no.";
   for(i=0;i<n;i++)
     display(*ptr[i]);
   db::count();
   for(i=0;i<n;i++)
   {
     delete(ptr[i]);
   }
   cout<<"\nObjects deleted!" ;
   getch();
}
