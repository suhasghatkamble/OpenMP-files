#include<stdio.h>
#include<omp.h>
int main(){
        int array[]={1,2,3,4,5,6,7,8,9,10};
        int maxNum=0;

#pragma omp parallel for
        for (int i=0; i<10;++i){
                int tid=omp_get_thread_num();
		if(array[i]>maxNum){
                maxNum=array[i];
		}
                printf("Thread %d : Iteration %d, Max = %d\n", tid, i,maxNum);
        }
        printf("Max : %d\n", maxNum);
        return 0;
}

