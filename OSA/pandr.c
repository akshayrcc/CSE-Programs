#include <stdio.h>
       /* supported */
       #include <stdio.h>
      // #include <stdio_ext.h>

#include <sys/resource.h>
void donice()
{
	int id;
	int pri;
	int which=PRIO_PROCESS;

			printf("\nEnter the process id ");
			scanf("%d",&id);
			printf("Enter the priority to be set \n");
			scanf("%d",&pri);
			setpriority(which,id,pri);

}
void dorenice()
{
	int which=PRIO_PROCESS;
	int pri;
	int id;
	printf("\n Enter the id of process \n");
	__fpurge(stdin);
	scanf("%d",&id);
	pri=getpriority(which,id);
	printf("\n The priority of process is-> %d\n",pri);
	printf("the detail of process is ->\n");
	system(" ps -eclx | grep a.out");	
}
int main()
{
	char  ch,opt;
	system("ps -a");
	printf("Enter the choice \n");
	__fpurge(stdin);
	while(1)
	{
	printf("\nn:-nice \nr:-renice\n");
	__fpurge(stdin);
	scanf("%c",&ch);

		switch(ch)
		{
			case 'n':
				donice();
				break;
			case 'r':
				dorenice();
				break;
			default:
				printf("\nno choice ");
		}
	__fpurge(stdin);
	printf("want to continue:- \n");
	scanf("%c",&opt);
	if(ch=='y' |'Y');
		else
		exit(0);		
		
	}
return 0;
}
