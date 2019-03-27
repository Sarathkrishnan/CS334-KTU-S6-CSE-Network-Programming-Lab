/*
Familiarization of various system calls used for OS and network programming
---------------------------------------------------------------------------------------------------------
* OBJECTIVE	: To understand the use and functioning of various system calls.
---------------------------------------------------------------------------------------------------------
* AIM 		: To write a program for Fork, Getpid system call using C
---------------------------------------------------------------------------------------------------------
* ALGORITHM

		Step 1: Start the program
		Step 2: In main function create child process using fork() system call and store the return value
		in pid
		Step 3: If pid < 0 then error in process creation
		Step 4: If pid==0 then the process is child process and get process id using getpid() system call
		Step 5: Else the process is parent and get process id using getpid() and display child process id
		using pid
		Step 6: Execute the program
 */
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
 int main(){
int pid;
pid=fork();
if(pid==-1){
	printf("error in fork");
	exit(1);
}
else if(pid==0)
{
	printf("\nout put comes from child process");
	printf("\n child process id =%d",getpid());
}
else
{
	printf("\nout put come from parent process");
	printf("\nparent process id =%d, Child process ID =%d", getpid(),pid);
}
exit(0);
}
