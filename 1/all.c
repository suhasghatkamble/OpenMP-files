/*include openmp header file */
#include<omp.h>
#include<stdio.h>

/*main function */
int main()
{
   // omp_set_num_threads(6);
    #pragma omp parallel num_threads(4)      //compiler directive  printf run in parallel
    {
    printf("#pragma omp parallel num_threads(4) \n");
    }

    #pragma omp parallel      //compiler directive  printf run in parallel
    {
    printf("pragma omp parallel \n");
    }

    return 0;

}
