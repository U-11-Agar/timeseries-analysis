#include <iostream>
#include </opt/homebrew/opt//omp.h> //openmp enablement 
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    int nthreads, tid;
    
    /* Fork a team of threads giving them their own copies of   variables */
   #pragma omp parallel private(nthreads, tid)
   {
       /* Get thread number and number of threads */
       tid = omp_get_thread_num();
       nthreads = omp_get_num_threads();
    //    printf("Hello World from thread = %d\n", tid);
       printf("Hello World from thread = %d\n", tid);
       /* Master thread block */
       if (tid == 0) {
           printf("Number of threads = %d\n", nthreads);
       }
   }  /* All threads join master thread */
   exit(0);
}