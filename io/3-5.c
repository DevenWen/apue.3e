#include "apue.h"
#include "./3-12.c"
#define BUFFSIZE 524288

int
main(int argc, char *argv[])
{
	printf("set fl begin");
	set_fl(STDOUT_FILENO, O_SYNC);
	int  n;
	char buf[BUFFSIZE];

	while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
	{
		if (write(STDOUT_FILENO, buf, n) != n)
			err_sys("write error");
	}

	if (n < 0)
		err_sys("read error");

	exit(0);
}