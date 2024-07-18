#include<stdio.h>
#include<omp.h>

int main(){
	// Check if the main thread is in a parallel region
	//
	// this is serial , condition is false 
	// omp_in_parallel is used to parallel
	// else print 
	if (omp_in_parallel())
	{
		printf("Main thread is in a parallel region.\n");
	}
	else
	{
		printf("Main thread is NOT in a parallel region.,,,,,,,,,,,,,,,,,,,,,,,,,,\n");
	}
	// Parallel region
	//
	// this is parallel region 
	// condion is true 
	// #pragma omp paralel used to parallel 
	// if condition true 
	//
	#pragma omp parallel
	{
		// Check if a worker thread is in a parallel region
		// omp_in_parallel true when it written in #pragma omp parallel
		if (omp_in_parallel())
		{
			printf("Thread %d is in a parallel region. \n", omp_get_thread_num());
		}
		else
		{
			printf("Thread %d is NOT in a prallel region. \n", omp_get_thread_num());
		}
	}
	return 0;
}

