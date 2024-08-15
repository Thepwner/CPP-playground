#include<stdio.h>

int main(){
//     //execersice 1: take two numnbers and find if their remainder is 0 
//     // int a, b, rem;
//     // printf("enter the first number:");
//     // scanf("%d", &a);

//     // printf("enter the second numebr");
//     // scanf("%d", &b);

//     // rem=a%b;

//     // printf("remainder of number is :%d", rem);
//     // if(rem==0){
//     //     printf("teh niumber is divisible");
//     //      printf("\n");
//     // }
//     // else
//     //     printf("the number is not divisible");
//     //     printf("i am out");
    
//     //excersice-2 : Take input a number from 0 to 500 and check whether it lies in 0-100
//     //101-200,201-300,301-400,401-500.
   
        int num;
        printf("enter the numebr between 0 to 500");
        scanf("%d", &num);
        if( (num<=500) && (num>=0)  )
        {
            printf("the number is valid");
        }
         else
            printf("this number is invalid");

        if ((num<=100) && (num>=0))
        {
            printf("the number is under 0to 100");
        }
        else if ((num>=101) && (num<=200))
        {
            printf("the number falls unnder 101 to 200");
        }
        else if ((num>=201) && (num<=300))
        {
            printf("the number is under 201 to 300");
        }
        else if ((num>=301) && (num<=400))
        {
        printf("teh number falls under 301 to 400");
        }
        else if ((num>=401) && (num<=500))
        {
            printf("the number falls under 401 to 500");
        }
        else
            printf("your input is invalid");

    return 0;
    }
    