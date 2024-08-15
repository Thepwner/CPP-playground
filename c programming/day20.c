#include<stdio.h>

//Eulers problem -1
/*
int main(){
    int N = 999;
    // int sum = 0;
    // for (int i = 1; i < N; i++)
    // {
    //     if (i % 3 == 0 || i % 5 == 0)
    //     {
    //         sum += i;
    //     }
    // }
    // printf("%d \n", sum);
    int sum_3, sum_5, sum_15, sum;

    sum_3 = 3 *(N/3)*(N/3 + 1)/2;
    printf(" sum of 3 is %d\n",sum_3);
    
    sum_5 = 5 *(N/5)*(N/5 + 1)/2;
    printf(" sum of 5 is %d\n",sum_5);

    sum_15 = 15*(N/15)*(N/15+1)/2;
    printf(" sum of 5 is %d\n",sum_15);

    sum = sum_3 + sum_5 - sum_15;
    printf("The sum, is %d\n",sum);
    return 0;
}
*/

// Memory allocation
/*
    Dynamic allocation
        malloc
        calloc
        realloc
        free

    --> memset(void *ptr, int x, size_t n) byte
    1
    00000001--> 
*/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    // int arr[3]={1,2,3};
    // memset(arr,1,3*sizeof(int));

    // for(int i=0;i<3;i++){
    //     printf("%d\n",arr[i]);
    // }

    //malloc
//     int N=2;
//     int *ptr=malloc(N*sizeof( int));
//     int *new_ptr;
//     for( int i = 0; i < N; i++){
//         scanf("%d",(ptr+i));
//     }

//     new_ptr = (int *) realloc(ptr, (N+3)*sizeof(int));
    
//     for( int i = 2; i < (N+3); i++){
//         scanf("%d",(new_ptr+i));
//     }

//     for( int i = 0; i < (N+3); i++){
//         printf("%d\t",*(new_ptr+i));
//     }
//     printf("\n");
//     free(ptr);
//     free(new_ptr);
// }
