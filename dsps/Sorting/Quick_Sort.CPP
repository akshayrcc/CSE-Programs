#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class quick
{
	private:
		int A[20],n;
	public:

	void getdata()
	{
		int i;
		cout<<endl<<"Enter the size of quick array";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>A[i];
		}
	}

	void display()
	{
		int i;
		for(i=0;i<n;i++)
		{
			cout<<endl<<A[i];
		}
	}

	void sort(int lower, int upper)
	{
		int i;
		if(upper>lower)
		{
			i=split(A,lower,upper);
			sort(lower,i-1);
			sort(i+1,upper);
		}
	}

	static int split(int *A,int lower, int upper)
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

	int getcount()
	{
		return n;
	}
};

int main()
{
	//clrscr();
	int count;
	quick q;
	q.getdata();
	count=q.getcount();
	q.sort(0,count-1);
	cout<<endl<<"Quick Sorted Array is";
	q.display();
	getch();
	return 0;
}