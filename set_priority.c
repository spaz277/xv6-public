#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(int argc,char **args)
{
	int pid,priority;
	pid=atoi(args[1]);priority=atoi(args[2]);
	if(priority<0)
	{
		printf(1,"Priority cannot be less than 0, setting priority 0\n");
		priority=0;
	}
	if(priority>100)
	{
		printf(1,"Priority cannot be more than 100, setting priority 100\n");
		priority=100;
	}
	set_priority(pid,priority);
	exit();
}