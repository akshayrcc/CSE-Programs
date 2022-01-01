
/*Problem Statement: 

Create a class named weather report that holds a daily weather report with data members day_of_month,hightemp,lowtemp,amount_rain and amount_snow. The constructor initializes the fields with default values: 99 for day_of_month, 999 for hightemp,-999 for low emp and 0 for amount_rain and amount_snow. Include a function that prompts the user and sets values for each field so that you can override the default values. Write a C++/Java/Python program that creates a monthly report.
a) Menu driven program with options to Enter data and Display report
b) Report Format

*/

/* Weather_report.cpp*/

#include<iostream>
#include<conio.h>
#include<iomanip.h>
Using namespace std;
class weather_report
{
  int dom;
  float ltemp,htemp,rain,snow;
  public:
  float l() { return ltemp; }
  float h() { return htemp; }
  float r() { return rain; }
  float s() { return snow; }
  weather_report()
  {
    dom=99;
    ltemp=-999;
    htemp=999;
    rain=snow=0;
  }
  void getinfo()
  {
    cout<<"\nEnter : day, low temp, high temp, rainfall, snowfall \n  ";
    cin>>dom>>ltemp>>htemp>>rain>>snow;
  }
  void display()
  {
    cout<<setw(15)<<dom<<setw(10)<<ltemp<<setw(10)<<htemp<<setw(10)
    <<rain<<setw(10)<<snow<<"\n";
  }
 };
 void main()
{
  clrscr();
  weather_report w[5];
  int i,n,sl=0,sh=0;
  float sr=0,ss=0;
  cout<<"\nHow many days' records u want to enter? : ";
  cin>>n;
  for(i=0;i<n;i++)
    w[i].getinfo();
  cout<<"\n"<<setw(36)<<"WEATHER REPORT "<<"\n\n";
  cout<<setw(15)<<"Day of month"<<setw(10)<<"Low temp"<<setw(10)<<"High temp"
  <<setw(10)<<"Rainfall"<<setw(10)<<"Snowfall"<<"\n\n";
  for(i=0;i<n;i++)
    w[i] .display();
  for(i=0;i<n;i++)
  {
    sl=sl+w[i].l();
    sh=sh+w[i].h();
    sr=sr+w[i].r();
    ss=ss+w[i].s();
  }
  cout<<setw(15)<<"Average"<<setw(10)<<sl/n<<setw(10)<<sh/n<<setw(10)
    <<sr/n<<setw(10)<<ss/n<<"\n";
  getch();
}



