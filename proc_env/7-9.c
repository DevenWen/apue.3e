#include "apue.h"
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	printf("HOME: %s\n", getenv("HOME"));
}