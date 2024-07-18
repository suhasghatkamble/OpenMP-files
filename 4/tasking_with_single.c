#include <stdio.h>
#include <omp.h>

void process(int i) {
    printf("Task %d is executed by Thread id : %d\n", i, omp_get_thread_num());
}
int main() {
    #pragma omp parallel num_threads(5)  // here thread create,10 task created, out of 5 , 1 thread execute, this 1 thread create its 5 thread team and they do task, they executed task dynamically parallally
    {
        #pragma omp single
        {
            printf("tasks created by thread id : %d \n", omp_get_thread_num());

            for (int i = 0; i< 10; i++) 
            {
                #pragma omp task
                process(i);
            }
            #pragma omp taskwait    // barrier / synchronization 

        }
    }  
    return 0;
}