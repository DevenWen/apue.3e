#include "apue.h"

int sum(int *a, int n);

int array[2] = {1, 2};

int
main(int argc, char *argv[])
{
	int val = sum(array, 2);
	return val;
}