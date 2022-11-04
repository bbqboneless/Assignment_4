#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc,const char *argv[]){
	if(argc != 2){
		printf("Input error: Too few arguments\n");
		return -1;
	}
	
	int lim = atoi(argv[1]);
	
	for(int i = 1;i <= lim;i++){
		pid_t pid = fork();
		
		if(pid == 0){
			printf("This is child process %d => PPID = %d, PID = %d\n",i,getppid(),getpid());
			exit(0);
		}else{
			wait(NULL);
		}
	}
	
	return 0;
}
