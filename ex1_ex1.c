//EXCERCISE 1 - EXAMPLE 1
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	fork();
	printf("Using fork() system call \n");
	return 0;
}
