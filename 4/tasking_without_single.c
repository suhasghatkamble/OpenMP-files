#include <stdio.h>
#include <omp.h>

void process(int i) {
    printf("Processing %d\n", i);
}
int main() {
    #pragma omp parallel num_threads(5) // here 5 threads do 10 task each total 50 
    {
        for (int i = 0; i< 10; i++) 
            {
                #pragma omp task
                {
                    process(i);
                }
            }
            #pragma omp taskwait    // barrier
    }  
    return 0;
}