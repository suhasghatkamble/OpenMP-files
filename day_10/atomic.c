

// #include<stdio.h>
// #include<omp.h>

// int main(){
//     int count = 0;

//     #pragma omp parallel
//     {
//         #pragma omp atomic
//         count++;
//             printf("Thread number : %d and count is : %d\n ", omp_get_thread_num(), count);

//     }
    
//     printf("Final count : %d \n ", count);
//     return 0;
// }