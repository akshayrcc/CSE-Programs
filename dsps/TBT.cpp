#include<iostream>
#include<cstdlib>
using namespace std;

class node
	{
	public:
		int data,lbit,rbit;
		node *left;
		node *right;
	};
class TBT
{
private:
	node *root,*dummy;
public:
		void create(int num);
		void create_TBT();
		void insert(node *trav,node *temp);
		void Preorder();
		void Inorder();
		void Postorder();
};
void TBT :: create(int num)
{
	node *trav,*temp;
	temp = new node();
	temp->data = num;
	temp->lbit = 0;
	temp->rbit = 0;
	if(root == NULL)
	{
		root = temp;
		dummy = new node;
		dummy->lbit = 1;
		dummy->rbit = 1;
		dummy->left = root;
		dummy->right = dummy;
		temp->left = dummy;
		temp->right = dummy;
	}
	else
	{
		trav = root;
		insert(trav,temp);
	}
}
void TBT :: create_TBT()
{
	int no,data_1;
	cout<<"\nEnter the no. of nodes";
	cin>>no;
	for(int i=0;i<no;i++)
	{
		cout<<"\nEnter data:";
		cin>>data_1;
		create(data_1);
	}
}

void TBT :: insert(node *trav,node *temp)
{
	if(temp->data < trav->data)
	{
		if(trav->lbit == 0)
		{
			temp->left = trav->left;
			temp->right = trav;
			trav->left = temp;
			trav->lbit = 1;
		}
		else
		{
			insert(trav->left,temp);
		}
	}
	if(temp->data > trav->data)
	{
			if(trav->rbit == 0)
			{
				temp->right = trav->right;
				temp->left = trav;
				trav->right = temp;
				trav->lbit = 1;
			}
			else
			{
			insert(trav->right,temp);
			}
	}
}

void TBT :: Preorder()
{
	node *trav;
	trav =root;
	while(trav!=dummy)
	{
		cout<<trav->data;
		if(trav->lbit == 1)
		{
			trav =trav->left;
		}
		else
		{
			while(trav->rbit == 0 && trav->right != dummy)
			{
				trav=trav->right;
			}
			trav = trav->right;
		}
	}
}
void TBT :: Inorder()
{
	node *trav;
	trav = root;
	while(trav != dummy)
	{
		while(trav->lbit == 1)
		{
			trav = trav->right;
		}
		cout<<trav->data;
		while(trav != dummy)
		{
			if(trav->rbit == 1)
			{
				trav=trav->right;
				while(trav->lbit == 1)
				{
					trav =trav->left;
				}
				cout<<trav->data;
			}
			else
			{
				if(trav->rbit == 0)
				{
					trav= trav->right;
					if(trav == dummy)
					{
						break;
					}
					cout<<trav->data;
				}
			}
		}
	}
}
void TBT :: Postorder()
{
	node *trav;
	trav = root;
	int a[20],i=0;
	while(trav !=dummy)
	{
		a[i]=trav->data;
		i++;
		if(trav->rbit == 1)
		{
			trav =trav->right;
		}
		else
		{
			while(trav->lbit == 0 && trav->left != dummy)
			{
				trav = trav->left;
			}
			trav=trav->left;
		}
	}
	int n =i-1;
	for(i=n;i>=0;i--)
	{
		cout<<a[i];
	}
}
int main()
{
	TBT t1;
	int ch;
	while(1)
	{
	cout<<"\n****MENU****\n1.Create\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit\nEnter Your Choice:";
	cin>>ch;
	switch(ch)
	{
	case 1:	cout<<"\nCreating TBT\n";
			t1.create_TBT();
		break;
	case 2:cout<<"\nInorder is:";
			t1.Inorder();
		break;
	case 3:cout<<"\nPreorder is:";
			t1.Preorder();
		break;
	case 4:cout<<"\nPostorder is:";
			t1.Postorder();
		break;
	case 5:exit(0);
		break;
	default:cout<<"Invalid choice";
		break;
	}
	}
	return 0;
}
