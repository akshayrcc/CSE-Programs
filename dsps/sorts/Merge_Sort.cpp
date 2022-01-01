#include<iostream>
using namespace std;
class msort
{
private:
	int a[100],b[100],c[100],n,m,i,j,k,p,temp;
public:
	void arr1();
	void arr2();
	void sort1();
	void sort2();
	void merge();
};
void msort::arr1()
{
	cout<<"\nEnter size of First Array : ";
	cin>>n;
	cout<<"\nEnter Elements in 1st array:\n";
	for(i=1;i<=n;i++)
	{
	cin>>a[i];
	}
}
void msort::sort1()
{
	for(p=1;p<=n-1;p++)
	{
	for(j=1;j<=n-1;j++)
	{
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
	}
	cout<<"\nAfter Sorting first array : \n";
	for(i=1;i<=n;i++)
	{
	cout<<a[i]<<endl;
	}
}
void msort::arr2()
{
	cout<<"\nEnter size of Second Array : ";
	cin>>m;

	cout<<"\nEnter Elements in 2nd array:\n";
	for(i=1;i<=m;i++)
	{
	cin>>b[i];
	}
}
void msort::sort2()
{
	for(p=1;p<=m-1;p++)
	{
	for(j=1;j<=m-1;j++)
	{
	if(b[j]>b[j+1])
	{
	temp=b[j];
	b[j]=b[j+1];
	b[j+1]=temp;
	}
	}
	}
	cout<<"\nAfter Sorting second array : \n";
	for(j=1;j<=m;j++)
	{
	cout<<b[j]<<endl;
	}
}
void msort::merge()
{
	i=1,j=1;
	for(k=1;k<=n+m;k++)
	{
	if(a[i]<b[j])
	{
	c[k]=a[i];
	i++;

	if(i>n)
	{
		for(j=1;j<=m;j++)
		{
		k++;
		c[k]=b[j];
		}
	  }
	}
	else
	{
	c[k]=b[j];
	j++;

	if(j>m)
	{
		for(i=1;i<=n;i++)
		{
		k++;
		c[k]=a[i];
		}
	  }
	 }
	}

	cout<<"\n\nAfter Merging Two Arrays:\n";
	cout<<"----------------------------";

	for(k=1;k<=n+m;k++)
	{
	cout<<"\n"<<c[k];
	}
}
int main()
{
msort m;
m.arr1();
m.sort1();
m.arr2();
m.sort2();
m.merge();
return 0;
}
