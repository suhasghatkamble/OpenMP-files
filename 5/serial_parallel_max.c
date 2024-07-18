#include <stdio.h>
#include <omp.h>
#include <stdlib.h>

#define N 1000
int main()
{
        int arr[N];
        int maximum_by_parallel = 0;

#pragma omp parallel num_threads(N)
        {

                int i = omp_get_thread_num();
                arr[i] = rand() % 1000;
#pragma omp barrier
#pragma omp single
                {
                        printf("thread is: %d \n", omp_get_thread_num());
                        for (int j = 0; j < N; j++)
                        {

                                if (arr[j] > maximum_by_parallel)

                                        maximum_by_parallel = arr[j];
                        }
                }
        }
        printf("Maximum in parallel = %d \n", maximum_by_parallel);







        int maximum_by_serial = 0;
        int i;
        arr[i] = rand() % 1000;

        for (int j = 0; j < N; j++)
        {

                if (arr[j] > maximum_by_serial){
                        maximum_by_serial = arr[j];
                }
        }
        printf("Maximum in serial = %d\n", maximum_by_serial);

        return 0;
}
