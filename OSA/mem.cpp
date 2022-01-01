//============================================================================
// Name        : me.cpp
// Author      : ss
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main() {
	double  page,avai,curr,rem;
	cout << "dipslaying memory details" << endl; // prints !!!Hello World!!!
	page=sysconf(_SC_PAGESIZE);
	avai=sysconf(_SC_AVPHYS_PAGES);
	curr=sysconf(_SC_PHYS_PAGES);
	cout<<"current pages "<<(((curr*page)/1024)/1024)/1024<<"\n";
	cout<<"used pages"<<(((avai*page)/1024)/1024)/1024<<"\n";
	rem=((((curr*page)/1024)/1024)/1024)-((((avai*page)/1024)/1024)/1024);
	cout<<"available memory"<<rem<<"\n";

	return 0;
}
