#include <iostream>
#include<stdlib.h>
using namespace std;
class node
{
	public:
		int freq;
		float price;
		string name;
		node *next;
		node *prev;
};

class market
{
private:
	node *head,*head1;
public:
	market()
	{
		head=NULL;
		head1=NULL;
	}
	void create_veg();
	void create_fruit();
	void read();
	void display();
	void sort();

};
void market::create_veg()
{
//--------------Vegetable---------------
	node *temp,*trav;
	temp=new node;
	temp->next=NULL;
	temp->prev=NULL;
	cout<<"\nEnter vegetable Name"<<endl;
	cin>>temp->name;
	cout<<"\nEnter its Price "<<endl;
	cin>>temp->price;
	cout<<"\nEnter the its Frequency"<<endl;
	cin>>temp->freq;
	if(head==NULL)
	{
		head=temp;
	}
	else if(head->next==NULL)
		{
			head->next=temp;
			temp->prev=head;
		}
		else
		{
			trav=head;
				while(trav->next!=NULL)
				{
					trav=trav->next;
				}
				trav->next=temp;
				temp->prev=trav;
		}
}
void market :: create_fruit()
{
	//-----------Fruit-------------
			node *temp1,*trav1;
			temp1=new node;
			temp1->next=NULL;
			temp1->prev=NULL;
			cout<<"\nEnter Fruit Name"<<endl;
			cin>>temp1->name;
			cout<<"\nEnter its Price "<<endl;
			cin>>temp1->price;
			cout<<"\nEnter the its Frequency"<<endl;
			cin>>temp1->freq;
			if(head1==NULL)
			{
				head1=temp1;
			}
			else if(head1->next==NULL)
				{
					head1->next=temp1;
					temp1->prev=head1;
				}
				else
				{
					trav1=head1;
						while(trav1->next!=NULL)
						{
							trav1=trav1->next;
						}
						trav1->next=temp1;
						temp1->prev=trav1;
				}

}
void market::display()
{
	if(head==NULL && head1==NULL)
	{
		cout<<"\nList is Empty"<<endl;

	}
	else
	{
		cout<<"\nVegetable List is:"<<endl;
		node *trav;
		trav=head;
		cout<<"\nName"<<"\tPrice"<<"\tFrequency\n";
		while(trav!=NULL)
			{
				cout<<trav->name<<"\t"<<trav->price<<"\t"<<trav->freq<<endl;
				trav=trav->next;
			}
		cout<<"\nFruit List is:";
		node *trav1;
		trav1=head1;
		cout<<"\nName"<<"\tPrice"<<"\tFrequency\n";
		while(trav1!=NULL)
		{
			cout<<trav1->name<<"\t"<<trav1->price<<"\t"<<trav1->freq<<endl;
			trav1=trav1->next;
		}

	}

}
void market::sort()
{
	node *trav1,*trav2;
	for(trav1=head;trav1!=NULL;trav1=trav1->next)
	{
		for(trav2=trav1->next;trav2!=NULL;trav2=trav2->next)
		{
			if(trav1->freq > trav2->freq)
			{
				node *temp;
				temp=new node;
				temp->price=trav1->price;
				temp->name=trav1->name;
				trav1->price=trav2->price;
				trav2->price=temp->price;
				trav1->name=trav2->name;
				trav2->name=temp->name;
				temp->freq=trav1->freq;
				trav1->freq=trav2->freq;
				trav2->freq=temp->freq;
			}
		}
	}
	//-------------------------
	for(trav1=head1;trav1!=NULL;trav1=trav1->next)
		{
			for(trav2=trav1->next;trav2!=NULL;trav2=trav2->next)
			{
				if(trav1->freq > trav2->freq)
				{
					node *temp;
					temp=new node;
					temp->price=trav1->price;
					temp->name=trav1->name;
					trav1->price=trav2->price;
					trav2->price=temp->price;
					trav1->name=trav2->name;
					trav2->name=temp->name;
					temp->freq=trav1->freq;
					trav1->freq=trav2->freq;
					trav2->freq=temp->freq;
				}
			}
		}
}
void market :: read()
{
	int v,f;
	cout<<"\nEnter the No. of Vegetables:";
	cin>>v;
	for(int i=0;i<v;i++)
	{
		create_veg();
	}
	cout<<"\nEnter the No. of Fruits:";
	cin>>f;
	for(int j=0;j<f;j++)
	{
		create_fruit();
	}
}
int main()
{
	market m1;
	int ch;
	while(1)
	{
	cout<<"-------------------------------";
	cout<<"\n****Menu****\n1.Create\t2.Display\n3.Sort\t\t4.Exit";
	cout<<"\n------------------------------";
	cout<<"\nEnter your choice";
	cin>>ch;
	switch(ch)
	{
	case 1:m1.read();
		break;
	case 2:m1.display();
		break;
	case 3:m1.sort();
		break;
	case 4:exit(0);
		break;
	default:
		cout<<"\nInvalid choice";
		break;
	}
	}
	return 0;
}
