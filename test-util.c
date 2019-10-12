#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h" 
int
main(void)
{
    int f1 = fork();
    if (f1 > 0) {
        settickets(10);   
    } else {
        settickets(20);
    }

    for (;;) {
        //printf(1,"%d\n", f1);
    }
    exit();
}