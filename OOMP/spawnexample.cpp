
/*Problem Statement: 

Using multi-core programming implement POSIX-spawn() function to create a Process.


*/


// spawnexample.cpp 
// Spawns a process, using the posix_spawn()
// function that calls the ps utility.

#include < spawn.h >
#include < stdio.h >
#include < errno.h >
#include < iostream >
main()
{
	posix_spawnattr_t X;
	posix_spawn_file_actions_t Y;
	pid_t Pid;
	char * argv[] = {�/bin/ps�,�-lf�,NULL};
	char * envp[] = {�PROCESSES=2�};
	posix_spawnattr_init( & X);
	posix_spawn_file_actions_init( & Y);
	posix_spawn( & Pid,�/bin/ps�, & Y, & X,argv,envp);
	perror(�posix_spawn�);
	cout < < �spawned PID: � < < Pid < < endl;

	return(0);
}
