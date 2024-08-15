/*
    swappping two numbers
*/

// #include<stdio.h>
// int swap(int a, int b){
//     int temp=0;
//     temp=a;
//     a=b;
//     b=temp;


// }

// int main(void){
//     int a=1, b=2, switch_ab;
//     switch_ab=swap(a, b);
// }

/*
    pointers are the variable that stores the adress of int,float,double,array,char.
    *p --> pointer
    & --> adress  
*/

// #include <stdio.h>

// void add(int *x,int *y){
//     int temp=0;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main(){
//     int *pa,*pb;
//     int a=10,b=9,temp=0;
    
//     // printf("The adress of a is %p\n",&a);
//     add(&a,&b);
//     // printf("The adress of a is %p\n",&a);
    
//     printf("a value is %d",a);
//     printf("b value is %d",b);

//     // pa=&a;
//     // printf("The pointer points to %p and the value there is %d",pa,*pa);

// }

// #include<stdio.h>

// int main(){
//     int arr1[]={1,3,4,6};
//     // printf("%d\n",(arr1)*);
//     // printf("%d",arr1[1]);
//     return 0;
// }

#include<stdio.h>
int compare(int *a, int *b){
    if (*a>*b)
    {
        return 1;
    }
    else if (*a==*b)
    {
        return 0;
    }
    else
        return 2;
}

int main(void){
    int a, b, max;
    printf("enter a numeber\n");
    scanf("%d%d", &a, &b);
    max=compare(&a, &b);
    if (max==1)
    {
        printf("The maxmum number is:\n%d", a);
    }
    else if (max==0)
    {
        printf("The both numbers are equal");
    }
    else if (max==2)
    {
        printf("the max number is is:\n%d", b);
    }
}
