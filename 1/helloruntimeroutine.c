/*include openmp header file */
#include<omp.h>
#include<stdio.h>

/*main function */
int main()
{
    omp_set_num_threads(6);
    #pragma omp parallel       //compiler directive  printf run in parallel
    {
    printf("Hello World \n");
    }

    return 0;
}
