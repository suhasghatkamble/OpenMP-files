#include<stdio.h>
#include<omp.h>

int main()
{
        int x = 10; // x is shared by default
        int y = 20; // y is shared by default
	int z = 22;
#pragma omp parallel default(none) shared(y) private(x)
        {
              int z = omp_get_thread_num();
	
      	      x = omp_get_thread_num();
                printf("Thread %d: x = %d, y = %d, z = %d \n", omp_get_thread_num(), x , y, z);
        }
        return 0;
}

