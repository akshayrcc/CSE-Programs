/* Problem Statement:

Write an Object Oriented Program using C++/Java for :
1.	Passing command line arguments to the thread function.
2. 	Using the command line argument to determine the number of threads.

Use multi-core programming.
*/


/*B18.cpp*/
using namespace std;
#include<iostream>
#include<pthread.h>
#include<stdlib.h>
int i=0;
void *task1(void *X)
{

    cout<<"\n Work from thread: "<<++i<<endl;

 	cout<<"Thread complete"<<endl;
 	return (NULL);
 }
 int main(int argc, char *argv[])
{
 	int N;
 	pthread_t MyThreads[10];
 	if(argc != 2){
 	cout<<"error "<<endl;
 	exit(1);
 }
 N = atoi(argv[1]);
 if(N > 10){
 N = 10;
 }
 for(int count = 0;count < N;count++)
 {
 	pthread_create( & MyThreads[count],NULL,task1, NULL);
 }
 for(int count = 0;count < N;count++)
 {
 	pthread_join(MyThreads[count],NULL);
 }
 return(0);
 }
