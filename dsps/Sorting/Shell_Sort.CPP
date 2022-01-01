//Shell Sort

#include <iostream.h>
#include <conio.h>
#define MAX 10

class shellsort
{
    int arr[MAX],n;
    public:
    void getdata();
    void showdata();
    void sortLogic();
};

void shellsort :: getdata()
{
    cout<<"How many elements you require : ";
    cin>>n;
    for(int i=0;i<n;i++)
	cin>>arr[i];
}

void shellsort :: showdata()
{
    cout<<"\n--Display--\n";
    for(int i=0;i<n;i++)
	cout<<arr[i]<<"   ";
}

void shellsort :: sortLogic()
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

void main()
{
    clrscr();
    cout<<"\n*****Shell Sort*****\n";
    shellsort obj;
    obj.getdata();
    obj.sortLogic();
    obj.showdata();
    getch();
}