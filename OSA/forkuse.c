#include <stdio.h>
#include <unistd.h>
int main()
{
	pid_t pid,ppid;
	pid=fork();
	if(pid==-1)
	{
		printf("\nunable to create process \n");
	
	}
	else if(pid==0)
	{
		printf("process is created with id =%d and whose parent is%d\n",getpid(),getppid());
	}
	else
	{
		printf("\n process parent process is %d   and process is %d\n",getppid(),getpid());
	}
}
