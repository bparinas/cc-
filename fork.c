#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t pid=fork();
	int i;
	
	if(pid) {
		for(i=0; i<5; i++) {
			sleep(2);
				printf("parent process: %d\n", i);
		}
	} else {
 		for(i=0; i<5; i++) {
			sleep(1);
				printf("child process: %d\n", i);
		}
	} /* end child */
} /* end main */
