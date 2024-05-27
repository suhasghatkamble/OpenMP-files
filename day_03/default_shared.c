#include<stdio.h>
#include<omp.h>

int main() 
{
	int x = 10; // x is shared by default
	int y = 20; // y is shared by default
		    
#pragma omp parallel default(shared) private(x)
	{
		// x is private to each thread
		// y is shared among all thread
		printf("Value of x = %d \n", x);
		x = omp_get_thread_num();
		printf("Thread %d: x = %d, y = %d \n", omp_get_thread_num(), x , y);
	}
	return 0;
}
