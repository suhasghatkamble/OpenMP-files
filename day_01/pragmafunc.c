/*include openmp header file */
#include<omp.h>
#include<stdio.h>

/*main function */
int main()
{
    omp_set_num_threads(6);
    #pragma omp parallel num_threads(4)      //compiler directive  printf run in parallel
    {
    printf("Hello World \n");
    }

    #pragma omp parallel      //compiler directive  printf run in parallel
    {
    printf("Hello OpenMP \n");
    }



    return 0;

}

