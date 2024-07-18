#include<stdio.h>
#include<omp.h>
#define N 10
int main(){
  omp_set_num_threads(5);
  int sum_a = 0;
  int prod_b = 1;
  int i = 1;
 
  #pragma omp parallel firstprivate(i) firstprivate(prod_b)
  {
    #pragma omp sections reduction(+: sum_a)
    {
        #pragma omp section
	{
		for (i = 1 ; i <= N; i++){    
		    sum_a+=i;
		}
		printf("Sum by section 1 = %d \n", sum_a);

	}
        #pragma omp section
	{
		for(i = 1 ; i<=N; i++){             
		    prod_b*=i;
		}
		printf("Product by section 2 = %d \n", prod_b);
	}

	}
  }
  return 0;



}



