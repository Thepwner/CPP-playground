// #include<stdio.h>

// int add(int,int);
// int min(int, int);
// int mul(int, int);
// float div(int, int);

// int main(void){
//     //for addition
//     int sum,a=5,b=10;
//     sum=add(a,b);
//     printf("The sum is %d",sum);
    
//     //for subtraction
//     int minus, g=8, h=5;
//     minus=min(g,h);
//     printf("\nthe subtraction is %d", minus);

//     //for multiplication
//     int m=2, n=2;
//     int multi=mul(m,n);
//     printf("\nthe multiplicaition is %d", multi);

//     // for division
//     float division;
//     int  d=5, e=2;
//     division=div(d,e);
//    printf("\nthe division is %.2f",division);
// }

// int add(int a,int b){
//     a=2*a;   
//     int s=a+b;
//     return s;
// }

// int min(int g, int h){
//    int mm=g-h;
//     return mm;
// }

// int mul(int m, int n){
//     int mm=m*n;
//     return mm;
// }

// float div(int d, int e){
//     float dd= (1.0)*d/e;
//     return dd;
// }

// #include<stdio.h>

// int cub(int a){
//    int  c=a*a*a;
//    return c;
//     }

// int main(){
//     int a=3, cube;
//     cube=cub(a);
//     printf("the cube of 3 is %d",cube);
//     return 0;
// }

#include<stdio.h>
#define PIE 3.1415;

float diameter(int);
float circumference(int);
float area(int);

int main(void){

    //for diameter 
    int r;
    printf("enter r for radius for ");
    scanf("%d", &r);
    float dia=diameter(r);
    printf("the diameter is %.2f", dia);

    //for circumference
    float cir;
    cir=circumference(r);
    printf("\nthe perimeter is %.2f", cir);

    //for area 
    float a;
    a=area(r);
    printf("\nthe area is %.2f", a);
}

    //function
    float diameter(int r){
        return r*2.0;
    }
    float circumference(int r){
        return 2*r*PIE;
    }
    float area(int r){
        return r*r*PIE;
    }
