#include<stdio.h>
#include<omp.h>

int main(){
	int shared_var=5;  //Shard variable
	omp_set_num_threads(5);
	#pragma omp parallel firstprivate(shared_var)
		{
			shared_var += omp_get_thread_num();//each thread increments its private copy
			printf("Thread %d shared_var =  %d, \n", omp_get_thread_num(),shared_var );
		} // here implecite barriar here 


			printf("outside paralled region shared_var  = %d, \n",shared_var );


	return 0;
}

