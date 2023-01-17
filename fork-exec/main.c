#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  fork();
  fork();
  fork();
  printf("Hello Process ID!\nPID = %d\n", getpid());
	
	return 0;
}