#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
    int sum = 0;
    int arr[100];
    int i;
    for (i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100;
        sum += arr[i];
        printf("arr : %d , sum %d\n", arr[i], sum);
    }
    return 0;
}

// #array randam values
// #serial sum
// #parallel sum use atomic


// arr[i]= i+ 1
//arr[i] = rand() % 1000 + 1