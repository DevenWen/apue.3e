#include "apue.h"
#include <unistd.h>

int
main(int argc, char *argv[])
{
// 中文
	printf("pid: %d\n", getpid());
	printf("ppid: %d\n", getppid());
	printf("getuid: %d\n", getuid());
	printf("geteuid: %d\n", geteuid());
	printf("getgid: %d\n", getgid());
	printf("getegid: %d\n", getegid());
}