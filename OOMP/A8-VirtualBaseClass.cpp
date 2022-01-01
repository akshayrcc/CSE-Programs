//Ass-A8  Virtual base class
#include<iostream>
using namespace std;
class student
{
    int rollno,subcode;
    char name[10];
    char sub[10];
public:
    int getrollno()
    {
        return rollno;
    }

    void input()
    {
        cout<<"\nEnter roll no :";cin>>rollno;
        cout<<"\nEnter Name :";cin>>name;
        cout<<"\nEnter Sub :";cin>>sub;
        cout<<"\nEnter Sub Code :";cin>>subcode;
    }
    void displaystudent()
    {
        cout<<"\t"<<rollno;
        cout<<"\t"<<name;
        cout<<"\t"<<subcode;
        cout<<"\t"<<sub;
    }

};
class Inmarks:virtual public student
{
    float marks1;
public:
    void readmarks1()
    {
        cout<<"\nEnter Internal Marks :";cin>>marks1;
    }
    void displayInmarks()
    {
        cout<<"\t"<<marks1;
    }
};
class Exmarks:public virtual student
{
    float marks2;
public:
    void readmarks2()
    {
        cout<<"\nEnter Internal Marks :";cin>>marks2;
    }
    void displayExmarks()
    {
        cout<<"\t\t"<<marks2<<endl;
    }
};
class result: public Inmarks, public Exmarks
{
public:
    void getdata()
    {
        input();
        readmarks1();
        readmarks2();
    }
    void display()
    {
        displaystudent();
        displayInmarks();
        displayExmarks();
    }

};
int main()
{
    result r[10];
    int i,ch,n,pos,a=1,c=0,flag=0;
    while(a==1)
    {
        cout<<"\nMENU:\n1:Build Table \n2:Display \n3:Insert \n4:Delete \n5:Edit \n6:Search \n7:Exit";
        cin>>ch;
        switch (ch)
        {
        case 1: cout<<"\nHow many records you want to enter :";
                cin>>n;
                for(i=0;i<n;i++)
                {
                    r[i].getdata();
                    c++;
                }
                break;
        case 2: cout<<"\nSTUDENT DETAILS:::::::::::::::::";
                cout<<"\n\tRollNo\tName\tSubCode\tSubject\tInt-Marks\tEx-Marks"<<endl;
                for(i=0;i<c;i++)
                r[i].display();
                break;
        case 3: cout<<"\nAt which location you want to insert record :";
                cin>>pos;
                pos--;
                for(i=pos;i<c;i++)
                r[i+1]=r[i];
                r[pos].getdata();
                c++;
                break;
        case 4: cout<<"\nEnetr the record no which you want to delete :";
                cin>>pos;
                pos--;
                for(i=pos;i<c;i++)
                r[i]=r[i+1];
                c--;
                break;
        case 5: cout<<"\nEnetr the record no which you want to Edit :";
                cin>>pos;
                pos--;
                r[pos].getdata();
                break;
        case 6: cout<<"\nEnetr the rollno for searching record :";
                cin>>pos;
                for(i=0;i<c;i++)
                {
                    if(pos==r[i].getrollno())
                    {
                            flag=1;
                            break;
                    }
                }
                if(flag==1)
                  {
                            cout<<"\nRecord found"<<endl;
                            cout<<"\n\tRollNo\tName\tSubCode\tSubject\tInt-Marks\tEx-Marks"<<endl;
                            r[i].display();
                  }
                else
                            cout<<"\nRecord not found";
                break;
        case 7: exit(0);
                break;
        default:cout<<"\nWrong Choise :";
                break;
        }
        cout<<"\nDo you want to continue? Press 1.....";
        cin>>a;
    }
    return 0;
}
