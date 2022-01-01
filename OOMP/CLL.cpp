
/*Problem Statement: 

A ‘C’ program uses a structure to implement a circular linked list for maintaining the numbers in ascending order. New arrival of number increases the size of circular linked list. This program is to be ported to C++ using appropriate C++ Data structures and programming. (In C++ avoid use of structure and IF-Then-Else or while/do-while etc.)


*/


/*CLL.cpp */

#include <iostream >
Using namespace std;
class CLL
{
 	int no;
	CLL *next;

	public:
	CLL* create(CLL *head)
	{
		CLL *newnode,*temp,*temp1;
		newnode=new CLL();
		cout<<"Enter data";
		cin>>newnode->no;
		if(head==NULL)
		{
			head=newnode;
			newnode->next=head;
		}
		else
		{
			if(newnode->no<=head->no)
			{
				temp=head;
				do
				{
					temp=temp->next;
				}while(temp->next!=head);
				newnode->next=head;
				temp->next=newnode;
				head=newnode;
			}
			else
			{
				temp=head;
				do
				{
					temp1=temp;
					temp=temp->next;
				}while(temp->next!=head && temp->no<newnode->no);
				if(temp->next==head)
				{
					temp->next=newnode;
					newnode->next=head;
				}
				else
				{
					temp1->next=newnode;
					newnode->next=temp;
				}
			}
		}
		return head;
	}
	void display(CLL * head)
	{
		CLL *temp;
		temp=head;
		do
		{
			cout<<temp->no<<”\t”<<”->”;
			temp=temp->next;
		}while(temp!=head);
	}
};

void main()
{
	CLL *head=NULL;
 	CLL l;
 	int i;
	for(i=0;i<5;i++)
	head=l.create(head);
	l.display(head);
}
