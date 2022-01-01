/*============================================================================
 Name        : ass2.c
 Author      : <student Name>  
 Version     :
 Copyright   : Your copyright notice
 Description : This is a program that shows how to create a directory, delete 
	       directory, and change working directory to new location also 
               print node details of new location

============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
int main()
{
	char buff[255];
	char dname[255];
	char *loc;
	int ch;
	printf("\n please Enter Your choice \n");
	printf("\n1.make Directory \n2.Delete Directory \n3.Change Directory\n ");
	scanf("%d",&ch);	
	switch(ch)
	{
		case 1:
			printf("\nPlease Enter the path to which u want to crate directory \n");
			loc=(char  *)malloc(sizeof(buff));
			scanf("%s",loc);
			strcpy(buff,loc);
			if(buff[strlen(buff)-1]=='/')
			{
				printf("\n please Enter Directory name you want to create \n");
				scanf("%s",dname);
				strcpy(buff+strlen(buff),dname);
				mkdir(buff,S_IRWXU|S_IRWXG|S_IRWXO);//S stands search by owner RWX read write execute U-user G-group O-Other
			}
			else
			{
				printf("\n sorry unable to create \n");
			}	
			break;
		case 2:
			printf("\nPlease Enter the path from which u want to delete a directory \n");
			loc=(char  *)malloc(sizeof(buff));
			scanf("%s",loc);
			strcpy(buff,loc);
			if(buff[strlen(buff)-1]=='/')
			{
				system("clear");
				system("ls");
				printf("\n please Enter Directory name you want to delete \n");
				scanf("%s",dname);
				strcpy(buff+strlen(buff),dname);
				rmdir(buff);
			}
			else
			{
				printf("\n sorry unable to delete \n");
			}
			break;
		case 3:
			struct stat sb;
			char ptr1[255];
			int i=0;
			char buff[255];
			const char * chng="cd ";
			printf("please Enter the path u want to change \n");
			scanf("%s",ptr1);
			strcpy(buff,chng);
			strcpy(buff+strlen(buff),ptr1);
			printf("%s",buff);
			i=system(buff);
			if(i==0)
			{
				printf("our own present working directory is \n");
				system("pwd");
				printf("the detail of current diretcory is\n\n");
				stat(buff, &sb);
				//--------------------------------------------------------------------
				printf("I-node number:            %ld\n",(long) sb.st_ino);
			  	printf("Mode:                     %lo (octal)\n",(unsigned long) sb.st_mode);
			   	printf("Link count:               %ld\n",(long) sb.st_nlink);
				printf("Ownership:                UID=%ld   GID=%ld\n",(long) sb.st_uid, (long) sb.st_gid);
				printf("Preferred I/O block size: %ld bytes\n",(long) sb.st_blksize);
				printf("File size:                %lld bytes\n",(long long) sb.st_size);
				printf("Blocks allocated:         %lld\n", (long long) sb.st_blocks);  
				printf("Last status change:       %s", ctime(&sb.st_ctime));
			    	printf("Last file access:         %s", ctime(&sb.st_atime));
			    	printf("Last file modification:   %s", ctime(&sb.st_mtime));
			}
			else
			{
				printf("sorry unable to change");
			}
		break;
		default:
			printf("Sorry don't have choice \n");

	}
return 0;
}
