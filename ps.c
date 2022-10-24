//Where the user program code will go
#include "types.h"
#include "stat.h"
#include "user.h"
#include "proc.h"
#include "proc.c"
#include "sysproc.c"
#include "syscall.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"

int ps(){
    printf("%s","name    pid     state\n");   //actual UI formatting
    printf("%s","-----------------------\n");
    crsp();     //run the crsp function to print the data on the table
    exit();     //end of execution
}

