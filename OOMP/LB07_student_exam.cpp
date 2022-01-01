
/* Problem Statement:

Design a C++ base class consisting of the data members such as name of the student, roll number and subject. The derived class consists of the data members subject code, internal assessment and university examination marks. Construct a virtual base class for the item name of the student and roll number. The program should have the facilities.

i) 	Build a master table 		ii) 	List a table 
iii) 	Insert a new entry		iv) 	Delete old entry 
v) 	Edit an entry 			vi) 	Search for a record


*/


/* student_exam.cpp */
                                               
 #include<iostream>
#include<iomanip.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
Using namespace std;
#define MAX 20
class base
{
  protected:
  char name[MAX];
  char roll[10];
  char sub[MAX];
  public:
base()
{
strcpy(roll,”00”);
strcpy(name,”NAME”);
strcpy(sub,”SUBJECT”);
}
~base()
{
strcpy(roll,”00”);
strcpy(name,”NAME”);
strcpy(sub,”SUBJECT”);
}
virtual void getdata();
virtual void showdata();
};
class derived:protected base
{
public:
int subcode;
int imarks;
float umarks;
derived()
{
Subcode=0;
imarks=0;
umarks=0;
}
~derived()
{
Subcode=0;
imarks=0;
umarks=0;
}
void getdata();
void showdata();
};
int n;
void base::getdata()
{
cout<<”\n STUDENT INFO\n…………………………………”;
cout<<”\nROLL:”;
cin>>roll;
cout<<”\n NAME:”;
cin>>name;
cout<<”\n SUBJECT”;
cin>>sub;
}
void base::showdata()
{
cout<<”\n\t”<<Roll;
cout<<”\t”<<name;
cout<<”\t”<<sub;
}
void derived::getdata()
{
base::getdata();
cout<<”\NSUBJECT CODE:”;
cin>>subcode;
cout<<”\n INTERNAL MARKS:”;
cin>>imarks;
cout<<\n UNIVERSITY MARKS”;
cin>>umarks;
cout<<”\n…………………………………………”;
}
void derived::showdata()
{
base::showdata();
cout<<”\t”<<subcode;
cout<<”\t”<<imarks;
cout<<”\t”<<umarks
}
void create(int n)
{
int i=0;
ofstream fout;
derived d[MAX];
if(n!=0)    //If students are zero then doesnot create file
{
fout.open(“myfile.txt”,ios::out|ios::truc); //truc to clear contents
for(i=0;i<n;i++)
{
d[i].getdata();
fout.write((char*)&d[i],sizeof(d[i]));
}
fout.close();
}
}
int size()
{
ifstream fin;
fin.open(“myfile.txt”,ios::in);
fin.seekg(0,ios::end);     //points to end of file
int endpos=fin.tellg()    //return total size of file
return endpos/sizeof(derived)    //total size of file divided by total no of objects present 

}
void display()
{
ifstream fin;
int i=0;
derived d[MAX];
fin.open(“myfile.txt”,ios::in);
if(!fin)
cout<<”\n\t ERROR:UNABLE TO OPEN FILE”;
else
{
if(size()==0)   //if file is empty
cout<<”\n DATABASE EMPTY”;
else
{
cout<<”\n\t ROLL\tNAME\tSUB\tSUBCODE\tINTMARKS\tUNVMARKS”;
while(fin.read((char*)&d[i],sizeof(d[i])))
{
d[i].showdata();
i++;
}
}
}
fin.close();
}
void insert()
{
derived tmp;
ofstream fout;
cout<<”\n INSERT NEW RECORD\N”;
fout.open(“myfile.txt”,ios::app);
tmp.getdata();
fout.write((char*)&tmp,sizeof(tmp));
n++;
fout.close();
}
void delete(int *n,char r[])
{
fstream file1,file2;
derived s[MAX];
int flag=0;
file1.open(“myfile.txt”,ios::in|ios::out);
file2.open(“tmp.txt”,ios::out|ios::truc);
for(int i=0;file1.read((char*)&s[i],sizeof(s[i]),i++)
{
if(strcmp(s[i].roll,r)!=0)
{
file2.write((char*)&s[i],sizeof(s[i]));
}
else
Flag=1
}
(*n)- -;
file1.close();
file2.close();
file1.open(“myfile.txt”,ios::out|ios::trunc);
file2.open(“tmp.txt”,ios::in);

//all records are restored to main file

for(int i=0;file2.read((char *)&s[i],sizeof(s[i])),i++)
{
file1.write((char*)&s[i],sizeof(s[i]);
}
file1.close();
file2.close();
file2.open(“tmp.txt”,ios::trunk)
file2.close();
if(flag==0)
cout<<”RECORD NOT FOUND”;
}
void search(char r[])
{
int flag=0;
ifstream fin;
derived d;
fin.open(“myfile.txt”,ios::in);
if(!fin)
{
cout<<”\n\t ERROR:MAY BE FILE EMPTY”;
else
if (size()==0)
cout<<”\n\t DATABASE EMPTY;
else
{
while(fin.read((char*)&d,sizeof(d)))
{
if(strcmp(d.roll,r)==0)
{
Flag=1;
cout<<”\n\t RECORD FOUND\t”;
d.showdata();
break;
}
}
}
}
fin.close();
if(flag==0)
cout<<”\n\t RECORD NOT FOUND”;
}

void edit(char r[])
{
int flag=0;
derived d;
fstream file;
int ch;
int count;
file.open(“myfile.txt”,ios::in|ios::out);
if(!file)
cout<<\n\t ERROR:UNABLE TO OPEN FILE”;
else
{
while(file.read((char*)&d,sizeof(d))
{
count++;
if(strcmp(d.roll,r)==0)
{
Flag=1;
break;
}
}
file.seekg((count-1)*sizeof(derived));
file.read((char*)&d,sizeof(d));
if(flag==1)
{
cout<<”\n RECORD FOUND\n\n”;
d.showdata();
do{
cout<<”\n\n\t EDIT MENU\n\t…………………………”;
cout<<”\n\t 1.ROLL NO”;
cout<<”\n\t ”2.NAME;
cout<<”\n\t 3.SUBJE CT”;
cout<<”\n\t 4.INTERNAL MARKS”;
cout<<”\n\t 5.UNIV MARKS”;
cout<<”\n\t 6. EXIT”;
cout<<\n\n\t WHAT TO MODIFY:”;
cin>>ch;
switch(ch)
{
case 1:
cout<<”\n\t Enter new roll no”;
cin>>d.roll;
break;
case 2:
cout<<”\n\t Enter new name”;
cin>>d.name;
break;
case 3:cout<<”\n\t Enter new subject”;
cin>>d.sub();
cout<<”Enter new subject code”;
cin>>d.subcode;
break;
case 4:
cout<<”\n\t enter new internal marks”;
cin>>d.imarks;
break;
case 5:
cout<<”\n\t Enter new university marks”;
cin>>d.umarks;
break;
case 6:
break;
}
}while(ch!=6);
file.seekp((count-1)*sizeof(derived));
file.write((char*)&d,sizeof(d));
}
}
file.close();
if(flag==0)
cout<<”\n\t RECORD NOT FOUND”;
}

void main()
{
int ch;
char roll[10];
do
{
cout<<”\n\t MENU\n---------------------------“;
cout<<”\n\t 1.CREATE RECORD”;
cout<<”\n\t 2.SHOW RECORD”;
cout<<”\n\t 3.INSERT NEW”;
cout<<”\n\t 4.DELETE OLD”;
cout<<”\n\t 5.EDIT RECORD”;
cout<<”\n\t 6.SEARCH RECORD”;
cout<<”\n\t CLOSE”;
cout<<”\n Enter choice”;
cin>>ch;
switch(ch)
{
case 1:
cout<<”\n How many subject:”;
cin>>n;
create(n);
break;
case 2:
display();
break;
case 3:
insert();
display();
break;
case 4:
cout<<”\n Enter roll no to delete record”;
cin>>roll;
delete(&n,roll);
display();
break;
case 5:
cout<<”\nEnter roll no to search and edit record”;
cin>>roll;
edit(roll);
break;
case 6:
cout<<”\n Enter roll no to search record”;
cin>>roll;
search(roll);
break;
case 7:
exit(0);
}
}while(ch!=7);
getch();
}

