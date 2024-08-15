/*
    Data Struture:
        Linked List

    array: 
    
    1) Memory Allocation
    2) Struct

*/


/*
!Array as pointers
#include<stdio.h>

int main(){
    int arr[]={1,3,4,5};

    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", *(arr+i));
    }
}
*/
/*
    Memset: 
        void* memset( void* str, int ch, size_t n);
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    memset(arr,0,sizeof(arr));

    printArray(arr,n);
}