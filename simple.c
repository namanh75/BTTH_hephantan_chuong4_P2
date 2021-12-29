#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>
int shared = 10;
void * fun(void * args){
    time_t start = time(NULL);
    time_t end = start+5; //run for 5 seconds
    while (time(NULL) != end) continue;
    shared += 1;
    return NULL;
}