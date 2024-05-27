#include<stdio.h>
#include<omp.h>

int main(){
	//int x =0;
	int x=2;
	printf("Thread %d : Value of x before parallel region %d, address = %p \n", omp_get_thread_num(), x, &x);
omp_set_num_threads(5);
	#pragma omp parallel private(x)
		{
			printf("Thread %d : Value of x inside parallel region = %d, address = %p \n", omp_get_thread_num(), x,&x);
			x = omp_get_thread_num();
			printf("Thread %d has private x = %d, address = %p \n", omp_get_thread_num(), x, &x);
		}

		printf("Thread %d : Value of x after parallel region = %d , address %p \n",omp_get_thread_num(),  x, &x );

	return 0;
}

