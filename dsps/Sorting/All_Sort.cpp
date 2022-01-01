#include<iostream>
#include<cstdlib>
#define MAX 10
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

class ssort
{
    int arr[MAX],n;
    public:
    void getdata();
    void showdata();
    void sortLogic();
};

void ssort :: getdata()
{
    cout<<"Enter the size of shell array:\n ";
    cin>>n;
    cout<<"\nEnter the elements of array:\n";
    for(int i=0;i<n;i++)
	cin>>arr[i];
}

void ssort :: showdata()
{
    cout<<"\nShell sorted array is:\n";
    for(int i=0;i<n;i++)
	cout<<arr[i]<<"\n";
}

void ssort :: sortLogic()
{
    int i,j,temp,increment;

    for(increment=n/2; increment>0; increment /= 2)
    {
	for(i=increment; i<n; i++)
	{
	    temp=arr[i];
	    for(j=i; j>=increment; j -= increment)
	    {
		if(temp < arr[j-increment])
		    arr[j] = arr[j-increment];
		else
		break;
	    }
	    arr[j] = temp;
	}
    }
}




class q_sort
{
	private:
		int A[20],n;
	public:
		void getdata();
		void display();
		void sort(int lower, int upper);
		int split(int *A,int lower, int upper);
		int getcount();
};

	void q_sort ::getdata()
	{
		int i;
		cout<<endl<<"Enter the size of quick array";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>A[i];
		}
	}

	void q_sort ::display()
	{
		int i;
		for(i=0;i<n;i++)
		{
			cout<<endl<<A[i];
		}
	}

	void q_sort::sort(int lower, int upper)
	{
		int i;
		if(upper>lower)
		{
			i=split(A,lower,upper);
			sort(lower,i-1);
			sort(i+1,upper);
		}
	}

	int q_sort :: split(int *A,int lower, int upper)
	{
		int pivot,p,q,temp;
		p=lower+1;
		q=upper;
		pivot=A[lower];
		while(q>=p)
		{
			while(A[p]<pivot)
			{
				p++;
			}
			while(A[q]>pivot)
			{
				q--;
			}
			if(q>p)
			{
				temp=A[p];
				A[p]=A[q];
				A[q]=temp;
			}
		}

		temp=A[lower];
		A[lower]=A[q];
		A[q]=temp;

		return q;
	}

	int q_sort :: getcount()
	{
		return n;
	}

int main()
{
	int count,ch;
	q_sort q1;
	msort m1;
	ssort s1;
	while(1)
	{
	cout<<"\n****MENU****\n1.Quick Sort\n2.Merge Sort\n3.Shell Sort\n4.Radix Sort\n5.Exit\n Enter the choice:";
	cin>>ch;
	switch(ch)
	{
	case 1:
			q1.getdata();
			count=q1.getcount();
			q1.sort(0,count-1);
			cout<<endl<<"Quick Sorted Array is";
			q1.display();
			break;
	case 2: m1.arr1();
			m1.sort1();
			m1.arr2();
			m1.sort2();
			m1.merge();
			break;
	case 3: s1.getdata();
			s1.sortLogic();
			s1.showdata();
			break;
	case 4:cout<<"Sorry";
			break;
	case 5: exit(0);
			break;
	default:
			break;
	}
	}
}

