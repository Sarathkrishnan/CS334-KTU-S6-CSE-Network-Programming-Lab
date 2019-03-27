#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
void main (){
	int p;
	p=fork();
	if(p==0){
		printf("\nChild Process\n");
		execlp("ls","ls",NULL);
	}
	else{
		wait(0);
		printf("/n parent process wait for child process execution");
		execlp("ps","ps",NULL);
	}
}
