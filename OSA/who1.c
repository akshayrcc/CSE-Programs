/* who1.c  - a first version of the who program
 *              open, read UTMP file, and show results
 */
#include	<stdio.h>
#include	<utmp.h>
#include	<fcntl.h>
#include	<unistd.h>
#include 	<time.h>

//#define	SHOWHOST	/* include remote machine on output */

int main()
{
	struct utmp	current_record;	/* read info into here       */
	int		utmpfd;		/* read from this descriptor */
	int		reclen = sizeof(current_record);

	if ( (utmpfd = open(UTMP_FILE, O_RDONLY)) == -1 ){
		perror( UTMP_FILE );	/* UTMP_FILE is in utmp.h    */
	//	exit(1);
	}

	while ( read(utmpfd, &current_record, reclen))
		show_info(&current_record);
	close(utmpfd);
	return 0;			/* went ok */
}
/*
 *  show info()
 *	displays contents of the utmp struct in human readable form
 *	*note* these sizes should not be hardwired
 */
show_info( struct utmp *utbufp )
{
	utbufp->ut_type = USER_PROCESS;
	printf("%-8.8s", utbufp->ut_name);	/* the logname	*/
	printf(" ");				/* a space	*/
	printf("%-8.8s", utbufp->ut_line);	/* the tty	*/
	printf(" ");				/* a space	*/
	//printf("%d", utbufp->ut_time);	/* login time	*/
	printf(" ");				/* a space	*/

	printf("\n");				/* newline	*/
}
