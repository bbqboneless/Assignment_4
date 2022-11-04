//EXCERCISE 2 - EXAMPLE 3
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	for(int i = 1;i <= 3;i++){
		pid_t pid = fork();
		if(pid == 0){
			printf("This is a child process => PPID = %d, PID = %d\n",getppid(),getpid());
			exit(0);
		} else{
			printf("This is a parent process => PID = %d\n",getpid());
			printf("Wait until the child process is finished...\n");
			wait(NULL);
			printf("The child process is now finished.\n");
		}
	}
	
	return 0;
}
