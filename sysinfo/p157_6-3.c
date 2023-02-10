#include "apue.h"
#include <sys/utsname.h>

int
main(int argc, char *argv[])
{
	struct utsname uts;
	if (uname(&uts) == 0) {
		printf("sysname: %s, nodename: %s, release: %s, version: %s, machine: %s\n", 
			uts.sysname, 
			uts.nodename, 
			uts.release, 
			uts.version,
			uts.machine);
	} else {
		printf("uname exec error");
	}
	exit(0);
}