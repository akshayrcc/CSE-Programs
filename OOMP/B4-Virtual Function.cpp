//ASS-B4  Virtal Function
#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int count =1;
class student
{
    char *name;
    int roll_no;

    public:
        ~student()
    {
        roll_no=0;
        name= new char[30];

    }
    virtual void getdata();
    virtual void putdata();
};
void student::getdata()
{		cout << "\n The roll no" << setw(9) << " : ";
        cin >> roll_no;
        cout << "\n The name of student" << setw(1) << " : " ;
        cin>>name;

}
void student::putdata()
{
        cout<<"\n"<<roll_no;
        cout<< "\t\t"<<name<<"\t";
}
class marks : public student
{
    int exam_marks;
    int ass_marks;
    char *sub;
    public:
    marks()
    {
        exam_marks=ass_marks=0;
        sub=new char[10];
    }
    void getdata();
    void putdata();
    ~marks()
    {

    }
};
void marks::getdata()
{
    /*student *bptr;
    student s;
    bptr=&s;
    bptr->getdata();
    */    cout << "\n Examination marks" << setw(3)<<" : ";
        cin >> exam_marks;
        cout << "\n Assignment marks" << setw(4) << " : ";
        cin >> ass_marks;
        cout << "\n Enter the subject" << setw(3) << " : ";
        cin >> sub;
}
void marks::putdata()
{
/*    student *bptr;
    student s;
    bptr=&s;
    bptr->getdata();
  */
        cout << "\t  "<< exam_marks<<"\t";
        cout << "\t  "<< ass_marks<<"\t";
        cout<<  "\t  "<<sub<<"\n";
}
int main()
{
    int ch,i,j,c=0,n;
    student *bptr;
    student s[10];
    marks m[10];
    do
    {
        cout << "\n\n*********DATABASE PRORGRAM*********"
             << "\n\t1) Build Table"
             << "\n\t2) Insert a new record"
             << "\n\t3) Modify a record"
             << "\n\t4) Delete a record"
             << "\n\t5) Display the records"
             << "\n\t8) Exit"
             << "\n Enter your choice : ";
        cin >> ch;
        switch(ch)
        {
            case 1: cout<<"\n How many record you want to enetr :";
                    cin>>n;
                    for(i=0;i<n;i++)
                    {
                        bptr=&s[i];
                        bptr->getdata();
                        bptr=&m[i];
                        bptr->getdata();
                        c++;
                    }
                    break;
            case 2: bptr=&s[c];
                    bptr->getdata();
                    bptr=&m[c];
                    bptr->getdata();
                    c++;
                    break;
            case 3: cout<<"\nEnter the rollno wich you want to modify";
                    cin>>n;
                    for(i=0;i<c;i++)
                    {
            //            if(m[i].roll_no==n)
                        {
                            bptr=&s[i];
                            bptr->getdata();
                            bptr=&m[i];
                            bptr->getdata();
                            break;
                        }
                     }
                    if(i==c) cout<<"\nRecord does not found";
                    break;
            case 4: cout<<"\nEnter the rollno wich you want to delete";
                    cin>>n;
                    for(i=0;i<c;i++)
                    {
          //              if(m[i].roll_no==n)
                        {
                            for(j=i;j<c;j++)
                            {
                                m[j]=m[j+1];
                                s[j]=s[j+1];
                            }c--;
                           break;
                         }
                    }
                    if(i!=c) cout<<"\nRecord does not found;";
                    break;
            case 5: cout<<"\nROLLNO\tNAME\tEXT-MARKS\tINT-MARKS\tSUB";
                    for(i=0;i<c;i++)
                    {
                        bptr=&s[i];
                        bptr->putdata();
                        bptr=&m[i];
                        bptr->putdata();
                    }
                    break;
            case 8: cout << "\n\n\t\tTHANK YOU";
                    exit(0);
                    break;
            default:cout << "\n\Enter the correct option";
                    break;
        }

    }while(ch!=8);

    return 0;
}
