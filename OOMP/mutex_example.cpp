
/* Problem Statement:

Using multi-core programming, implement Mutex semaphore for :
•	Initialization
•	Request ownership
•	Release ownership
•	Try ownership
•	Destruction



*/


//  thread_tasks.h.

 void *task1(void *X);
 void *task2(void *X);
 void *task3(void *X);

// thread_tasks.cc.
 
extern int Answer;
void *task1(void *X)
 {
 pthread_mutex_lock( & Mutex);
 Answer = Answer * 32; //critical section
 pthread_mutex_unlock( & Mutex);
 cout < < “thread A Answer = “ < < Answer < < endl;
 }
 void *task2(void *X)
 {
 Answer = Answer / 2;
 }
 void *task3(void *X)
 {
 Answer = Answer + 5;
 }

// mutex_example.cpp

 using namespace std;
 #include < iostream >
 #include < pthread.h >
 #include “thread_tasks.h”
 int Answer = 10;
 int main(int argc, char *argv[])
 {

 pthread_t ThreadA, ThreadB, ThreadC;

 cout < < “Answer = “ < < Answer < < endl;
 pthread_create( & ThreadA,NULL,task1,NULL);
 pthread_create( & ThreadB,NULL,task2,NULL);
 pthread_create( & ThreadC,NULL,task3,NULL);
pthread_join(ThreadA,NULL);
 pthread_join(ThreadB,NULL);
 pthread_join(ThreadC,NULL);

 cout < < “Answer = “ < < Answer < < endl;

 return(0);
 }
