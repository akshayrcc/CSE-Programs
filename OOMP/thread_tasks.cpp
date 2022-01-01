
/* Problem Statement:

Implement POSIX queue class that encapsulates the basic function such as open, send, receive, remove, close. Use multi-core programming  


*/


/* thread_tasks.cpp*/


 extern int Answer;

 void *task1(void *X)
 {
 Answer = Answer * 32;
 }

 void *task2(void *X)
 {
 Answer = Answer / 2;
 }

void *task3(void *X)
 {
Answer = Answer + 5;
 }



/* program7.8.cc*/


 #include < iostream >
 #include < pthread.h >
 #include “thread_tasks.h”
 #include < queue >
 #include < fstream >
 #include < string >
 queue < string > filteredText;
 queue < string > sourceText;
 int main(int argc, char *argv[])
 {
 	ifstream infile;
 	queue < string > QText;
 	string Str;
 	int Size = 0;
 	pthread_t ThreadA, ThreadB;
	infile.open(“book_text.txt”);
	for(int count = 0;count < 16;count++)
 	{
 		getline(infile,str);
		QText.push(str);
	}
 	pthread_create( & ThreadA,NULL,task1, & QText);
 	pthread_join(ThreadA,NULL);
 	pthread_create( & ThreadB,NULL,task2,NULL);
 	pthread_join(ThreadB,NULL);
 	Size = filteredText.size();
 	for(int count = 0;count < Size ;count++)
 	{
 		cout < < filteredText.front() < < endl;
		filteredText.pop();
 	}
 	infile.close();
	return(0);
}
