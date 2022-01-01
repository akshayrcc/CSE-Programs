
/* Problem Statement:

A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the requested copies book details and requests for the number of copies required. If the requested copies are available, the total cost of the requested copies is displayed; otherwise the message “Required copies not in stock” is displayed.
Design a system using a class called books with suitable member functions and Constructors. Use new operator in constructors to allocate memory space required. Implement C++ program for the system

*/


/* Bookshop.cpp*/
#include<iostream>
#include<string.h>
#inlcude<iomanip.h>
Using namespace std
class book
{
	private:
	char *author;
	char title[50];
	int price;
	char publisher[50];
	int stock_position;
	public:
	book(int x)//constructor defined
	{
		author=new char[x];
	}
};//class ends
void book :: getdata()
{
	cout<<”Enter title of book”;
	cin>>title;
	cout<<”Enter author of book”;
	cin>>author;
	cout<<”Enter price of book”;
	cin>>price;
	cout<<”Enter publisher of book”;
	cin>>publisher;
	cout<<”Enter number of copies”;
	cin>>stock_position;
}
void book :: display()
{
	cout<<setw(20)<<title<<setw(20)<<author<<setw(20)<<Publisher<<setw(20)<<price
	<<setw(10)<<stock position;
}
main()
{
	int size;
	cout<<”How many character you want in author name\n”;
	cin>>size;
	book ob[50]=new book(size);
	char bname[50];
	int choice,nbook;
	while(1)
	{
		cout<<”Menu:1.Input Data 2.Display 3.search book 4.Purchase book 5.Exit”;
		Cout<<”\n Enter your choice”;
		cin>> choice;
		switch(choice)
		{
			case 1:
				Cout<<”How many books data you want to enter”;
				Cin>>nbook;
				For(i=0;i<nbook;i++)
				ob[i].getdata();
			break;
			case 2:
				if (nbook<=0)
				cout<<”No data available”;
			else
			{
				cout<<setw(20)<<”title”<<setw(20)<<”author”<<setw(20)<<”Publisher”
				<<setw(20)<<”prices”<<setw(10)<<”stock position”;
				for(i=0;i<nbook;i++)
				{
					ob[i].putdata();
				}
			}
			break;
			case 3:
				if (nbook<=0)
				cout<<”No data available”;
			else
			{
				cout<<setw(20)<<”title”<<setw(20)<<”author”<<setw(20)<<”Publisher”
				<<setw(20)<<”prices”<<setw(10)<<”stock position”;
				for(i=0;i<nbook;i++)
				{
					cout<<”Enter book name you want to search”
					cin>>bname;
					if (strcmp(bname,ob[i].title)==0)
					{
						ob[i].putdata();
					}
				}
			}
			break;
			case 4:
				if (nbook<=0)
				cout<<”No data available”;
			else
			{
				for(i=0;i<nbook;i++)
				{
					cout<<”Enter book name you want to purchase”
					cin>>bname;
					if (strcmp(bname,ob[i].title)==0)
					{
						cout<<”book details are given below”;
						cout<<setw(20)<<”title”<<setw(20)<<”author”<<setw(20)<<”Publisher”
						<<setw(20)<<”prices”<<setw(10)<<”stock position”;
						ob[i].putdata();
						cout<<”How many copies you want to puchase”;
						cin>>copies;
						If (ob[i].stock_position>=copies)
						{
							cout<<”Requested copies are available\n”;
							cout<<”Total cost is:\t”<<copies*ob[i].price;
						}
						else
						{
							cout<<”Sorry!!!!!Requested copies arenot available\n”;
						}
					}
				}
				break;
				case 5:
					exit(0);
			}//while ends
		}//main ends
}
