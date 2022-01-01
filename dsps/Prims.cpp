//============================================================================
// Name        : Ak_Prims.cpp
// Author      : Akshay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

class Prims
{
	private:
		int visited[25];
		int A[25][25];
		int houses,min,cost;
	public:
		Prims()
		{
			houses=0;
			min=9999;
			cost=0;
		}
		void accept();
		void print_dist();
};
void Prims :: accept()
{
	cout<<"Enter the no. of houses per row(Here,i.e. equal to no. of rows)";
	cin>>houses;
	cout<<"\nEnter the Adjecency Matrix For Distances:\n";
	for(int i=0;i<houses;i++)
	{
		for(int j=0;j<houses;j++)
			{
			cin>>A[i][j];
			}
	}
	cout<<"\nYour Entered Adjecency Matrix is:\n";
	for(int i=0;i<houses;i++)
	{
		for(int j=0;j<houses;j++)
		{
			cout<<setw(10)<<A[i][j];
		}
		cout<<endl;
	}
}
void Prims :: print_dist()
{
	int k,l;
	for(int i=0;i<houses;i++)
	{
		for(int j=0;j<houses;j++)
		{
			if(A[i][j]<min && A[i][j]!=0)
			{
				min = A[i][j];
				k=i;
			}
			l=j;
		}
	}
	cout<<"\nMinimum at("<<k<<","<<l<<") is :"<<min;

	visited[k]=1;
	visited[l]=1;

	for(int n=0;n<houses-2;n++)
	{
		for(int i=0;i<houses;i++)
		{
			if(visited[i]==1)
			{
				for(int j=0;j<houses;j++)
				{
					if(visited[i]!=1)
					{
						if(A[i][j] < min && A[i][j]!=0)
						{
							min = A[i][j];
							k=i;
							l=j;
						}
					}
				}
			}
		}
		visited[k]=1;
		visited[l]=1;
		cost = cost + min;
	}
	cout<<"\nThe cost is:"<<cost;
}

int main()
{
	Prims P1;
	P1.accept();
	P1.print_dist();
	return 0;
}
