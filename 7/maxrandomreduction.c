#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
#define ARRAY_SIZE 1000
int main(){
        int A[ARRAY_SIZE];
        int maxNum=0;

        for (int i=0; i< ARRAY_SIZE; ++i)
        {
                A[i] = rand() % 1000;
        }

        #pragma omp parallel for reduction(max:maxNum)
        for (int i=0; i<ARRAY_SIZE;++i){

                if(A[i]>maxNum)
                {
                      maxNum=A[i];
                }

        }
        printf("Max : %d\n", maxNum);
        return 0;
}

