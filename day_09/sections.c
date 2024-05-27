//Assignments
#include<stdio.h>
#include<omp.h>

int main(){
    omp_set_num_threads(2);
    #pragma omp parallel sections
    {
        #pragma omp section
        {
            printf("This section 1, executed by thread %d\n", omp_get_thread_num());
        }
        #pragma omp section
        {
            printf("This section 2, executed by thread %d\n", omp_get_thread_num());
        }
        #pragma omp section
        {
            printf("This section 3, executed by thread %d\n", omp_get_thread_num());
        }
        #pragma omp section
        {
            printf("This section 4, executed by thread %d\n", omp_get_thread_num());
        }
        #pragma omp section
        {
            printf("This section 5, executed by thread %d\n", omp_get_thread_num());
        }
    }
    return 0;
}