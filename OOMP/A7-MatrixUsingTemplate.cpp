//Ass-A7 MATRIX
#include<iostream>
using namespace std;
template <class x1> void add(x1 *a,x1 *b,int m,int n)
{
    int i,j;
    cout<<"\n Addition of Matrix\n";
    for(i=0;i<m;i++)
    {   cout<<endl;
        for(j=0;j<n;j++)
           // res[i][j]=a[i][j]+b[i][j];
            cout<<"\t"<<a[i][j]+b[i][j];
    }
    cout<<endl;
}
template <class x2> void sub(x2 *a,x2 *b,int m,int n)
{
    int i,j;
    cout<<"\n Substraction of Matrix\n";
    for(i=0;i<m;i++)
    {   cout<<endl;
        for(j=0;j<n;j++)
           // res[i][j]=a[i][j]+b[i][j];
            cout<<"\t"<<a[i][j]- b[i][j];
    }
    cout<<endl;
}
template <class y> void display(y *a,int m,int n)
{
    int i,j;
    cout<<"\nMatrix Values are";
    for(i=0;i<m;i++)
    {
        cout<<endl;
        for(j=0;j<n;j++)
            cout<<"\t"<<a[i][j];
    }cout<<endl;
}
template <class z> void read(z *a,int m,int n)
{
    int i,j;
    cout<<"\nEnetr the values for "<<m<<" X "<<n<<"Matrix";
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
            cin>>a[i][j];
    }
}

int main()
{
    int q=1,ch,a1[10][10],a2[10][10],m1,n1;
    float b1[10][10],b2[10][10];
    cout<<"\nEnter the Dimenssion of First matrix(m X n)"<<endl;
    cin>>m1>>n1;
    cout<<"\nEnter element for Integer Matrices";
    read(a1,m1,n1);
    read(a2,m1,n1);
    cout<<"\nEnter element for Float Matrices";
    read(b1,m1,n1);
    read(b2,m1,n1);
    while(q==1)
    {
        cout<<"\n MENU\n1:Display Matrices\n2:ADD\n3:SUB\n4:Exit";
        cin>>ch;
        switch(ch)
        {
        case 1: cout<<"\nInteger Matrices:";
                display(a1,m1,n1);
                display(a2,m1,n1);
                cout<<"\nFloat Matrices:\n";
                display(b1,m1,n1);
                display(b2,m1,n1);
                break;
        case 2: add(a1,a2,m1,n1);
                add(b1,b2,m1,n1);
                break;
        case 3: sub(a1,a2,m1,n1);
                sub(b1,b2,m1,n1);
                break;
        case 4: exit(0);
                break;
        default:cout<<"\nWring Choice";
            break;
        }
        cout<<"\nDo you want to continue? Press 1....";
        cin>>q;

    }
    return 0;
}
