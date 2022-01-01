
/* Problem Statement:

Implement POSIX semaphore using multi-core programming.


*/


// Sem_out.cpp A process using a semaphore on an output file.

using namespace std;
#include < semaphore.h >
 #include < iostream >
 #include < fstream >
 int main(int argc, char *argv[])
{
 int Loop, PN;
 sem_t *Sem;
 const char *Name;
ofstream outfile(“out_text.txt”,ios::app);
 PN = atoi(argv[1]);
 Loop = atoi(argv[2]);
 Name = argv[3];
 Sem = sem_open(Name,O_CREAT,O_RDWR,1);
 sem_unlink(Name);
 for (int count = 1; count < Loop; ++count) {
 sem_wait(Sem);
 outfile < < “Process:” < < PN < < “ counting “ < < count < < endl;
 sem_post(Sem);
 }
 outfile.close();
 exit(0);
 }
// Sem_in.cpp A process using a semaphore on an input file.
using namespace std;
 #include < semaphore.h >
 #include < iostream >
 #include < fstream >
 #include < string >
 int main(int argc, char *argv[])
 {
 string Str;
 const char *Name;
 sem_t *Sem;
 ifstream infile(“out_text.txt”);
 if(infile.is_open()){
 Name = argv[1];
 sem = sem_open(Name,O_CREAT,O_RDWR,1);
 sem_unlink(Name);
 while(!infile.eof() & & infile.good()){
 sem_wait(Sem);
 getline(infile,str);
 cout < < str < < endl;
 sem_post(Sem);
 }
 cout < < “--------------------------------” < < endl;
 infile.close();
 }
 exit(0);
 }
