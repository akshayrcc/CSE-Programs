#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
int main()
{
char *loc;
char buff[255];
char dirname[255];
int i=0;
int n;
char ch;

printf("Enter the Absolute to which u want to change\n");
loc=(char *)malloc(sizeof(buff));
scanf("%s",loc);
strcpy(buff,loc);
printf("\nEntered path is=%s",buff);
if(buff[strlen(loc)-1]=='/')
{

printf("\n1:Create directory \n2:Remove directory \n3:Exit");
scanf("%d",&n);
}
do
{
switch(n)
{
case 1:  
         
{
	 printf("\nPlease Enter the name of directory\n");
	 scanf("%s",dirname);
         strcpy(buff+strlen(buff),dirname);
         printf("\n%s",buff);
i=mkdir(buff,S_IRWXU|S_IRWXG|S_IRWXO);
if(i!=0)
{
printf("\nError to create directory: directory in Existance\n");
		
}
else
{
	printf("\nDirectory is created\n");
}
}
}
}break;
case 2:
{

	struct stat st;  
	stat(buff,&st);
				printf("I-node number:            %ld\n",(long) st.st_ino);
			  	printf("Mode:                     %lo (octal)\n",(unsigned long) st.st_mode);
			   	printf("Link count:               %ld\n",(long) st.st_nlink);
				printf("Ownership:                UID=%ld   GID=%ld\n",(long) st.st_uid, (long) st.st_gid);
				printf("Preferred I/O block size: %ld bytes\n",(long) st.st_blksize);
				printf("File size:                %lld bytes\n",(long long) st.st_size);
				printf("Blocks allocated:         %lld\n", (long long) st.st_blocks);  
				printf("Last status change:       %s", ctime(&st.st_ctime));
			    	printf("Last file access:         %s", ctime(&st.st_atime));
			    	printf("Last file modification:   %s", ctime(&st.st_mtime));


i=mkdir(buff,S_IRWXU|S_IRWXG|S_IRWXO);
if(i!=0)
{
printf("\nError to create directory: directory in Existance\n");
	if(i=rmdir(buff))
	{
		printf("\nError to delete directory\n");	
	}
	else
	{
	
		printf("\nDirectory is deleted\n");
	}	
}
else
{
	printf("\nDirectory is created\n");
}
printf("\nDo u want to delete a directory\n");
if(i=rmdir(buff))
{
	printf("\nError to delete directory\n");	
}
else
{
	stat(buff,&st);
	printf("\nDirectory is deleted\n");
}
}
return 0;
}break;
case 3:exit(0);
	break;
default:
 printf("Entered the wrong choice");
 break;
}
}while(n!=3);
return 0;
}
/*stat(buff,&st);
				printf("I-node number:            %ld\n",(long) st.st_ino);
			  	printf("Mode:                     %lo (octal)\n",(unsigned long) st.st_mode);
			   	printf("Link count:               %ld\n",(long) st.st_nlink);
				printf("Ownership:                UID=%ld   GID=%ld\n",(long) st.st_uid, (long) st.st_gid);
				printf("Preferred I/O block size: %ld bytes\n",(long) st.st_blksize);
				printf("File size:                %lld bytes\n",(long long) st.st_size);
				printf("Blocks allocated:         %lld\n", (long long) st.st_blocks);  
				printf("Last status change:       %s", ctime(&st.st_ctime));
			    	printf("Last file access:         %s", ctime(&st.st_atime));
			    	printf("Last file modification:   %s", ctime(&st.st_mtime));*/
/*i=mkdir(buff,S_IRWXU|S_IRWXG|S_IRWXO);
if(i!=0)
{
printf("\nError to create directory: directory in Existance\n");
	if(i=rmdir(buff))
	{
		printf("\nError to delete directory\n");	
	}
	else
	{
	
		printf("\nDirectory is deleted\n");
	}	
}
else
{
	printf("\nDirectory is created\n");
}/*
printf("\nDo u want to delete a directory\n");
if(i=rmdir(buff))
{
	printf("\nError to delete directory\n");	
}
else
{
	stat(buff,&st);
	printf("\nDirectory is deleted\n");
}*/

/*}
return 0;
}*/
