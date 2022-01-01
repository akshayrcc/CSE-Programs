
/* Problem Statement:

Write a C++ program to perform String operations :
i. 	= Equality
ii. 	== String Copy
iii. 	+ Concatenation
iv. 	<< To display a string
v. 	>> To reverse a string
vi. 	Function to determine whether a string is a palindrome
To find occurrence of a sub-string. Use Operator Overloading


*/


/*string.cpp*/

#include<iostream>
Using namespace std;
class string
{
  char str[20];
  int len;
  public:
  string() { len=0; }

  void read()
  {
    cout<<"\nEnter the string : ";
    gets(str);
  }

  int  operator ~()
  {
    int i;
    len=0;
    for(i=0;str[i]!='\0';i++)
    {
	 len++;
    }
    return(len);
  }

  friend istream &operator >>(istream &in,string &s)
  {
    int i;
    ~s;
    cout<<"\nReverse string: ";
    for(i=s.len-1;i>=0;i--)
    {
      cout<<s.str[i];
    }
  }

  void operator ==(string s)
  {
     read();
     char str2[20];
     for(int i=0;str[i]!='\0';i++)
       str2[i]=str[i];
     str2[i]='\0';
    cout<<"\nCopy : ";
    puts(str2);
  }

  void operator +(string s2)
  {
    ~*this;
    int j=len;
    for(int i=0;s2.str[i]!='\0';i++)
    {
       str[j]=s2.str[i];
       j++;
    }
    str[j]='\0';
    puts(str);
  }

  void operator =(string s2)
  {
    int i,f=0;
    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]==s2.str[i])
       {
	 f=1;
       }
      else
	 f=0;
	 break;
    }
    if(f==1)
     cout<<"\nStings are equal!";
    else
     cout<<"\nStrings are not equal";
  }
  void operator ||(string s2)
  {
    int i,j=0,f=0,count=0;
    cout<<"\nPositions of occurence: ";
    for(i=0;str[i]!='\0';i++)
    {
       if(str[i]==s2.str[j])
       {
	j++;
       }
       else
       {
	j=0;
       }
       if(s2.str[j]=='\0')
       {
	 f=1;
	 count++;
	 cout<<"  "<<(i-j+2);
	 j=0;
       }
    }
    cout<<"\nNo of occurence of substring: "<<count;
  }

  void operator !()
  {
    int f=0;
    ~*this;
    for(int i=0;i<len;i++)
    {
      if(str[i]==str[len-i-1])
	 f=1;
      else
       {
	 f=0; break;
       }
    }
    if(f==1)
      cout<<"\nIt is a pallindrome!";
  }


friend ostream &operator <<(ostream &out,string &s)
  {
     out<<s.str;
     return(out);
  }
};

void main()
{
int c,l;
 char m;
 string s1,s2;
 do
 {
 cout<<"\nMENU:\n1.Length of the string\n2.Copy\n3.Reverse\n4.Concatination\n5.Compare two strings\n6.Find Substring\n7.Pallindrome\nChoice= ";
 cin>>c;
 switch(c)
 {
  case 1: s1.read();
	  l=~s1;
	  cout<<"\nLength of the string is: "<<l;
	  break;
  case 2: s1==s2;
	  break;
  case 3: s1.read();
	  cin>>s1;
	  break;
  case 4: s1.read(); s2.read();
	  s1+s2;
	  break;
  case 5: s1.read();
	  s2.read();
	  s1=s2;
	  break;
  case 6: s1.read(); s2.read();
	  s1||s2;
	  break;
  case 7: s1.read();
	  !s1;
	  break;
  case 8: s1.read();
	  cout<<s1;
	  break;
  default:cout<<"Invalid";
	  break;
  }
  cout<<"\nDo you want to continue?-y/n: ";
  cin>>m;
  }while(m=='y');
}
