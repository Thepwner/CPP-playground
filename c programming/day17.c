/*
#include<stdio.h>
void swap(int *pa, int *pb,int n){
    
    // if (n==5)
        // printf("5 index %d \t 6 index%d\n",*pa,*pb);

    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

void printarray_ofnumbers(int num[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("\n");
}

void main(){
    int num[]={5,3,7,4,2,1}, j;
    int n=sizeof(num)/sizeof(num[0]);
    
    // for (int k = 0 ; k < n; k++)
    int u=8;
    printf("test %d\n",num[u]);
    // {
        for (int i = 0; i < n; i++)
        {
            j=i+1;
            if (j==6)
                printf(" index %d\n",num[j]);
            if (num[i]>num[j])
            {
                if (j==6)
                    printf(" index %d\n",num[j]);
                swap(&num[i], &num[j],i);
            }
            printf("%d\t",i);
            printarray_ofnumbers(num, n);
        }
    // }
    printarray_ofnumbers(num, n);
}
*/

#include<stdio.h>
void swap(int *pa, int *pb){

    int temp=0;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

void printarray_ofnumbers(int num[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("\n");
}

void main(){
    int arr[]={5,7,3,4,2};
    int n=sizeof(arr)/sizeof arr[0];
    int high_index;
    for (int i = n-1; i > 0; i--)
    {
        high_index=i;
        for (int j = i-1;  j >= 0 ; j--)
        {
            if (arr[high_index]< arr[j])
            {
                high_index=j;
            }
        }
        swap(&arr[high_index], &arr[i]);
        
        printarray_ofnumbers(arr,n);   
    }
    printarray_ofnumbers(arr,n);   
}