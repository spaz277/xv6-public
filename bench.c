#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(int argc, char *argv[])
{
    
    double z,x=0;
    int id = fork();
    if (id == 0) {
        for (int i=0;i<5;++i)
         {
            for (int j=0;j<10;++j) 
            {
                for (z =0;z <10000000;z++) {
                    x+=3.14*89.64*198.67; // useless calculations
                }
            }
        }
        printf(1, "Exiting bench\n");
    }
    exit();
}