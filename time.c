#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

void printend()
{
  printf(1,"___________________________________________________\n");

}
int main (int argc,char *argv[])
{

	int pid,status,a,b;	
	pid = fork();
	status = 0;
	if (pid!= 0)
  	{
  		status=waitx(&a,&b);
    }
  else
 	  {
      exec(argv[1], argv);
      printf(1,"%s failed fork\n", argv[1]);
 	  }  
 	printf(1, "Wait Time =%d\nRun Time = %d\nStatus: %d \n", a, b, status); 
 	printend();
  exit();
}