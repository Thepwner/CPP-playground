/*
#include<stdio.h>
//functon for swap

void swap(int *pa, int *pb){
    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

//function for printing the array
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

//main function
void main(){
    int arr[]={5,7,4,6,3,2}, HighIndex, k;
    int n=sizeof(arr)/sizeof( arr[0]);

    for (int i = n-1; i > 0; i--)
    {
        HighIndex=i;
        for (int j = 1; j <= i; j++)
        {
            if (arr[HighIndex]<arr[i-j])
            {
                HighIndex=i-j;
            }         
        } 
        swap(&arr[i], &arr[HighIndex]);
    }
    print(arr, n);
}

*/


/*
//selection sort exe
#include<stdio.h>

//functon for swap
void swap(int *pa, int *pb){
    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

//function for printing the array
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

//main function
void main(){
    int arr[]={5,7,4,6,3,2},SmallIndex, k;
    int n=sizeof(arr)/sizeof arr[0];
    for (int i = n-1; i > 0; i--)
    {
        SmallIndex=i;
        for (int j = i-1; j < n;)
        {
            printf("%d",j);
            if (arr[SmallIndex]>arr[j])
            {
                SmallIndex=j;
                swap(&arr[i], &arr[SmallIndex]);
            }
            i=j;
        } 
    }
    print(arr, n);
}*/
/*
#include<stdio.h>

//functon for swap
void swap(int *pa, int *pb){
    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

//function for printing the array
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

//main function
void main(){
    int arr[]={5,7,4,6,3,2},SmallIndex;
    int n=sizeof(arr)/sizeof arr[0];
    for (int i = n-1; i > 0; i--)
    {
        // SmallIndex=i;
        for (int j = 1; j <= i; j++)
        {
            if (arr[i-j]<arr[i])
            {
                // SmallIndex=i-j;
                swap(&arr[i], &arr[i-j]);
            }
        } 
    }
    print(arr, n);
}
*/
