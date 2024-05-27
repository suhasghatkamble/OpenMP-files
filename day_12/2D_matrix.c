#include<stdio.h>
// #include<omp.h>
#define N 10

int main(){
    int a[N][N];
    int b[N][N];
    int c[N][N];
    int i;
    int j;

    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            a[i][j] = 1;
            b[i][j] = 1;
        }
        
    }


    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        
    }

    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
        
    }



    

    return 0;
}