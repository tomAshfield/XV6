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

int ps(){
    cprintf("name    pid     state\n");   //actual UI formatting
    cprintf("-----------------------\n");
    crsp();     //run the crsp function to print the data on the table
    exit();     //end of execution
    return 0;
}

