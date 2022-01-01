
/* Problem Statement:

Create employee bio-data using following classes :
i) 	Personal record 
ii)	Professional record 
iii) 	Academic record Assume appropriate data members and member function to accept required data & print bio-data. Create bio-data using multiple inheritance using C++/Java/Python.


*/


/* Employee.cpp  */

#inlcude<iostream>
using namespace std;
class personal
{
	protected:
		char name[50];
		char address[50];
		char birthdate[50];
		char gender;
	public:
		void get_persoanl();
};
class professional
{
	protected:
		int noofyearsexp;
		char orgname[50];
		char projname[50];
		char projdetails[50];
	public:
		void get_professional();
};

class academic
{
	protected:
		int year;
		int marks;
		int percentage;
		char class[50];
	public:
		void get_academic();
};
class biodata: public personal,public academic,public professional
{
	public:
		void display();
};
void personal::get_persoanl()
{
	cout<<”Enter name”;
	cin>>name;
	cout<<”Enter Address”;
	cin>>address;
	cout<<”Enter Birthdate(dd/mm/yyyy)”;
	cin>>birthdate;
	cout<<”Enter gender(M/F)”;
	cin>>gender;
}
void professional::get_professional()
{
	cout<<”Enter number of years of exp”;
	cin>>noofyearsexp;
	cout<<”Enter organization name”;
	cin>>orgname;
	cout<<”Enter project name”;
	cin>>projname;
	cout<<”Enter project Details”;
	cin>>projdetails;
}
void academic::get_academic()
{
	cout<<”Enter academic year”;
	cin>>year;
	cout<<”Enter total marks”;
	cin>>marks;
	cout<<”Enter percentage”;
	cin>>percentage;
	cout<<”Enter class”;
	cin>>class;
}
void biodata::display()
{
	cout<<”……………………..Employee Biodata……………..”<<endl;	
	cout<<”-------------------------------------------------------“<<endl;
	cout<<”………Personal Details…………………………….”<<endl;
	cout<<”Name:”<<name<<endl;
	cout<<”address:”<<address<<endl;
	cout<<”birthdate:”<<birthdate<<endl;
	cout<<”Gender”<<gender<<endl;
	cout<<”-------------------------------------------------------“<<endl;
	cout<<”………Academic Details…………………………….”<<endl;
	cout<<”Academic Year\t”<<”marks\t”<<”percentage\t”<<”class\t”<<endl;
	cout<<year<<”\t”<<marks<<”\t”<<percentage<<”\t”<<class<<endl;
	cout<<”-------------------------------------------------------“<<endl;
	cout<<”………Professional Details…………………………….”<<endl;
	cout<<”Organization Name:”<<orgname;
	cout<<”Years of Experince:”<<noofyearsexp;
	cout<<”Project Done:”<<projname;
	cout<<”Project Details:”<<projdetails;
}
void main()
{
	biodata b;
	b.get_persoanl();
	b.get_academic();
	b.professional();
	b.display();
}
