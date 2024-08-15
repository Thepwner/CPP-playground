/*
#include<stdio.h>
void swap(int *pa, int *pb){
    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
};
int main(){
    int arr[]={4,6,5,7,3,2};
    int n=sizeof(arr)/sizeof (arr[0]);
    for (int i = 0; i < n; i++)
    {
        // int SmallIndex= i;
        for (int j =i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // SmallIndex=j;
                swap(&arr[i],&arr[j]);
            }
            printArray(arr,n);
        
        }
        // printArray(arr,n);
        // swap(&arr[i], &arr[SmallIndex]);
    }
    printArray(arr, n);
    return 0;
}
*/

#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int data=5, n;
    n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <= n; i++)
    {
        if (arr[i]==data)
        {
            printf("the data is in the %d index", i);
        }
        else
    }
    
    
    return 0;
}