/*
#include<stdio.h>

void swap(int *pa,int *pb)
{
    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    
}
void main(){
    int arr[]={5,2,3,4,1,32,45,65,7,67,87,87,1,32};
    // int n=sizeof(arr)/sizeof(arr[0]);
    int n=14;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    printArray(arr,n);
}
*/


#include<stdio.h>
void swap(int *pa, int *pb){
    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}
void printarrayofNumbers(int num[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("\n");
}
void main(){
    int num[]={5,3,7,4,2,1}, j;
    int n=sizeof(num)/sizeof(num[0]);
    for (int k = 0 ; k < n; k++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (num[i]>num[i+1])
            {
                swap(&num[i], &num[i+1]);
                //high_index=i
            }
            printarrayofNumbers(num,n);
        }
        
        printf("\n");
    }
    printarrayofNumbers(num, n);
}