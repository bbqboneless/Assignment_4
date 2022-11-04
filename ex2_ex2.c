//EXCERCISE 2 - EXAMPLE 2
#include <stdio.h>
#include <unistd.h>

int main(){
	int pid_a = getpid();
	int ppid_x = getppid();
	
	printf("process ID is: %d\n",pid_a);
	printf("parent process ID is: %d\n",ppid_x);
	return 0;
}
