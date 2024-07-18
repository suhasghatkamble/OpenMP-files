#include<stdio.h>
#include<omp.h>
int main(){
	int a = 10;

	#pragma omp parallel for lastprivate(a)
	for(int i=0; i<10; i++){
		a++;
	printf("a (inside parallel region)= %d, for thread %d \n", a, omp_get_thread_num());

	}

	printf("a(outside parallel region)= %d\n", a);

	return 0;
}
