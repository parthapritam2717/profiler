#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include "sys/types.h"
#include "sys/sysinfo.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"


int getMemoryUsed();// heap+stack done
int getVirtualMemoryUsed();//done
unsigned long getCpuProcessTime();//done
unsigned long long int getCpuTime();
int getPhysicalMemoryUsed();//done
void cpuStartFlag(unsigned long int *process,unsigned long long *cpu);
