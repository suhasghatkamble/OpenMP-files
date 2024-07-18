#include<stdio.h>
#include<omp.h>

int main(){
	int x=10;
          omp_set_num_threads(5);
	#pragma omp parallel firstprivate(x)
		{
		printf("Thread %d has private x = %d, \n", omp_get_thread_num(), x);
		}


	return 0;
}

