/*
    Even-odd using function

#include<stdio.h>

int number(int num){
    if (num%2==0)
        return 1;
    else
        return 0;
}

int main(void){
    int num;
    printf("enter a number:\n");
    scanf("%d", &num);
    int n=number(num);
    if (n==1){
        printf("It is even");        
    }else if(n==0){
        printf("It is odd");
    }
    return 0;
}
*/

/*
    Find maximum number of two inputted number in c using function
*/
/*
#include<stdio.h>
int num(int a, int b){
    if (a>b)
        return a;

    else if (b>a)
        return b;

    else if (a==b)
        return 0;
        
}

int main(void){
    int x, y;

    printf("enter two number to know the maximum and minimum nummber\n");
    scanf("%d%d", &x, &y);

    int max=num(x, y);
    if(max==0)
        printf("the both numbers are equal\n");
    else
        printf("The max value is %d",max);
}
*/
/*
    Perfect number
#include<stdio.h>

int main(){
    int num, n, sum=0;
    printf("enter a numebr\n");
    scanf("%d", &num);
        for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        { 
        // printf("%d ", i);
            sum+=i;
        }
    }
    if (sum==num)
        {
            printf("it is a perfect number:");
        }
        else
        printf("it is not a perfet number");
    return 0;
}
*/

/*
    Armstrong number
*/
/*
#include<stdio.h>

int main(){
    int num=12321, rev=0;
    int num2=num;
    while (num!=0)
    {
        rev=rev*10+num%10;
        num/=10;
    }

    if (rev==num2){
        printf("It is armstrong number");
    }
    return 0;
}
*/

// #include<stdio.h>

// int main(){
//     int num=5;
//     int square=num * num;
//     printf("%d\n", square);
//     int check= ((square/10)+(square%10));
//     printf("%d", check);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int num;

//     //taking input
//     printf("enter a number:\n");
//     scanf("%d", &num);

//     //making square of number
//     int square=(num*num); 
//     // printf("%d", square);

//     //sum of digit
//     int sum=(square%10) + (square/10);
//     printf("this is sum of digit:\n%d\n", sum);

//     //if condition for neon number
//     if (sum==num)
//     {
//         printf("this is a neon number.");
//     }
//     else
//         printf("this is not a neon number.");
//     return 0;
// }

#include<stdio.h>
//functions
int square(int num){
    int sqr=(num*num);
    return sqr;
}
int sum(int sq){
    int mod,summ=0;
    while (sq!=0)
    {
        mod=sq%10;
        summ=summ+mod;
        sq=sq/10;
    }
    return summ;
}
int compare(int num, int add){
    if (num==add)
    {
        return 1;
    }
    else
        return 0;
}

int main(void){
    int num;
    //taking input from user
    printf("Enter a number:\n");
    scanf("%d", &num);

    //function for square
    int sq=square(num);
    printf("This is the square of number: %d\n", sq);

    //function for sum of digit of square number
    int add=sum(sq);
    printf("The sum of digit is: %d\n", add);

    //function for neon number
    int aa=compare(num, add);
    if (aa==1)
    {
        printf("This is a neon number");
    }
    else if (aa==0)
    {
        printf("This is not a neon number");
    }
}




    
    
