#include<stdio.h>
#ifdef _OPENMP
#include <omp.h>
#include<stdlib.h>
#endif
#define N 10
int main()
{
    int A[N];
    int B[N];
    int C[N];

    for(int i=0; i<N; i++)
    {
        A[N]=rand()%10;
        B[N]=rand()%10;
    }

    #pragma omp target 
    {
        for(int i=0; i<N; i++)
        {
            C[i]=A[i]+B[i];
        }
         for(int i=0; i<N; i++)
        {
            printf("%d      ", C[i]);
        }
    }
    return 0;
}