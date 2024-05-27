#include<omp.h>
#include<stdio.h>
/* main function */
int main()
{
	int tid;
	omp_set_num_threads(4);
	#pragma omp parallel
	{
		tid=omp_get_thread_num();
		printf("Hello world from %d \n", tid);
	}
	return 0;
}

