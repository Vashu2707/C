// Code to print parent id and child id of a process
#include<stdio.h>
#include <unistd.h>
#include<sys/types.h>
int main()
{
 int pid,childId;
 pid=getpid();
 if((childId=fork())>0)
 {
 printf("I am in the parent process %d\n",pid);
 printf("I am in the parent process %d\n",getpid());
 printf("I am in the parent process %d\n\n",getppid());
 }
 else
 {
 printf("I am in child process %d\n",pid);
 printf("I am in the child process %d\n",getpid());
 printf("I am in the child process %d\n",getppid());
 }
}
