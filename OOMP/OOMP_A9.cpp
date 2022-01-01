//============================================================================
// Name        : OOMP_A9.cpp
// Author      : Akshay Chaudhari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class TV
{
private:
	long int mod_no;
	int scr_size;
	float price;
public:
	void operator << ( TV &t );
	void operator >> ( TV t );
	void Validation();
};

void TV :: operator << ( TV &t )
{
	cout<<"\nEnter the Model No. of TV";
	cin>>t.mod_no;
	cout<<"\nEnter the Price For the TV:";
	cin>>t.price;
	cout<<"\nEnter the screen size for TV:";
	cin>>t.scr_size;
};
void TV :: operator >> ( TV t )
{
	cout<<"\n\nDETAILS OF TV set....";
	cout<<"\nThe Screen Size is: "<<t.scr_size;
	cout<<"\nThe Price is: "<<t.price;
	cout<<"\nThe Model No. of TV is: "<<t.mod_no;
}

void TV :: Validation()
{
	try
	{
		if(mod_no > 9999)
		{
			throw(1);
		}
		else if(scr_size < 12 || scr_size > 70)
		{
			throw(2);
		}
		else if(price < 0 || price > 5000)
		{
			throw(3);
		}
	}
	catch(int i)
	{
		cout<<"\nException Caught!!!";
		mod_no = 00,scr_size = 00, price = 00;
		switch(i)
		{
		case 1:
			cout<<"\nThe Model Number is more than 4 digit...";
			break;
		case 2:
			cout<<"\nThe screen size is out of range 12 inches to 70 inches... ";
			break;
		case 3:
			cout<<"\nThe Price is invalid or more than $5000";
			break;
		default:
			cout<<"\nInvalid Choice Entered";
			break;
		}
		cout<<"\nThe Screen Size is: "<<scr_size;
		cout<<"\nThe Price is: "<<price;
		cout<<"\nThe Model No. of TV is: "<<mod_no;

	}
}

int main()
{
	TV t1;
	cout<<"Getting the Details.........";
	t1.operator << (t1);
	cout<<"\nValidating the Details.........";
	t1.Validation();
	cout<<"\nPrinting the Details........";
	t1.operator >> (t1);

	return 0;
}
