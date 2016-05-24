#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void sigproc()
{
  	signal(SIGINT, sigproc);
	printf("You have pressed Ctrl+c\n");
}

void quitproc()
{
	printf("Ctrl+\\ pressed to quit\n");
	exit(0); /* normal exit status */
}

main()
{
	signal(SIGINT, sigproc);
	signal(SIGQUIT, quitproc);
	printf("Ctrl+c disabled, use Ctrl+\\ to quit\n");
	for(;;); /* infinite loop */
}
