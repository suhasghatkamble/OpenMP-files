#include<stdio.h>
#include<omp.h>

int main()
{
        int x = 7; // x is shared by default
        int y = 4; // y is shared by default

#pragma omp parallel default(none) shared(x,y)
        {
      	      x = omp_get_thread_num(); // Shared access to x, each threads is its threads
              y+=x; //Shared access to y, each thread increment it

                printf("Thread %d: x = %d, y = %d \n", omp_get_thread_num(), x , y);
        }
        return 0;
}

