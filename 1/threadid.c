#include<omp.h>
#include<stdio.h>
/* main function */
int main()
{
	omp_set_num_threads(64);
#pragma omp parallel
	{
		printf("Hello world from %d \n", omp_get_thread_num());
	}
	return 0;
}
