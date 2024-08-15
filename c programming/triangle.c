/* Write a C program to take 3 inputs as angle of triangle and first check whether the triangle
 is valid or not and print if the triangle is scalene, isosceles and equilateral
*/
#include<stdio.h>

int main(){
    int a1, a2, a3, sum;
   
    //asking the user to input the angles

    printf("enter the first angle of triangle\n:");
    scanf("%d", &a1);

    printf("enter the second angle of triangel\n:");
    scanf("%d", &a2);

    printf("enter the third angle of triangle\n:");
    scanf("%d", &a3);

    //sum of angle of triangle
    sum=a1+a2+a3;
    
    if (sum==180)
    {
        printf("\nthe triangle is valid.");
         
        if ((a1==a2) && (a2!=a3) || (a2==a3) && (a3!=a1) || (a3==a1) && (a1!=a2))
        {
            printf("\nit is a isosceles triangle");
        }
        else if ((a1!=a2) && (a2!=a3) && (a3!=a1))
        {
            printf("\nit is a scalene triangle");
        }
        else if ((a1==a2) && (a2==a3) )
        {
            printf("\nit is a equilateral triangle");
        }
    }
    else
        printf("\nthe triangle is invalid :");
     
return 0;
}