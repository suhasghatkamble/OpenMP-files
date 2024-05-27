#include<stdio.h>
#include<omp.h>
int main()
{

    omp_sched_t abcd = omp_sched_static;
    omp_set_schedule(abcd , 21);

    #pragma omp parallel for schedule(runtime) num_threads(3)
    for (int i = 0; i < 20; i++)
    {
        printf("Thread %d is running number %d \n", omp_get_thread_num(), i);
    }
    return 0;
}

//load imbalance thread 0 has 21 chuncks so all iterations will get to thread 0
