#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(int argc,char **args)
{
	int pid,priority;
	pid=atoi(args[1]);priority=atoi(args[2]);
	setpr(pid,priority);
	exit();
}