/*
 * IM: To write a program to execute exec system call using C
 * ALGORITHM
 * Step 1: Start the program.
 * Step 2: Enter the option.
 * Step 3: If the option is 1 execute “ls” command using execlp( ) system call
 * Step 4: If the option is 2 execute “ps” command using execlp( ) system call
 * Step 5: If the option is 3 execute “who” command using execlp( ) system call
 * Step 6: If the option is 4 display “invalid choice”
 * Step 7: Execute the program.
 */


#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
int choice;
do
{
printf("\nMain Menu");
printf("\nSelect an option");
printf("\n1.Execute ls command");
printf("\n2.Execute ps command");
printf("\n3.Execute who command");
printf("\n4.Exit");
printf("\nEnter your choice");
scanf("%d",&choice);switch(choice)
{
case 1:	if(fork())
		wait(0);
		else
		execlp("ls","ls",(char*)NULL);
		break;
case 2:	if(fork())
		wait(0);
		else
		execlp("ps","ps",(char*)NULL);
		break;
case 3:
		if(fork())
		wait(0);
		else
		execlp("who","who",(char*)NULL);
		break;
case 4:
		exit(0);
		default:
		printf("InValid choice");
		}
}
while(choice<=4);
}
