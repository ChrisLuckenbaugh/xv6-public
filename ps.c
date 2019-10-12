#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h" 
int
main(void)
{
  int i;
  struct pstat stats;
  getpinfo(&stats);
  

  for (i = 0; i < NPROC; i++) {
      if (stats.inuse[i] == 1) {
        printf(1, "pid: %d tickets: %d ticks: %d\n", stats.pid[i], stats.tickets[i], stats.ticks[i] );
      }
  }
  
  exit();
}
