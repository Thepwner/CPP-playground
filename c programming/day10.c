/*
    - continue
    - break
*/

// #include<stdio.h>
// int main(){
//     for(int i=1;i<10;i++){
//         if(i%7==0){
//             break;  //continue
//         }
//         printf("I am safe %d\n",i);
//     }
//     printf("I am out of loop");
// }

/*
    prime number;
        - input (num)
        - for(int i=2;i<num;i++)
            

*/

// #include<stdio.h>

// int main(){
//     int num, test, isPrime=1;
//     printf("enter a number:\n");
//     scanf("%d", &num);
    
//     if (num%2==0)
//     {
//         if (num!=2){
//             isPrime=0;
//             printf("%d is not a prime number.",num);
//         }
//     }
//     else{
//         for (int i = 3; i < num; i=i+2)
//         {
//             test=num%i;
//             if (test==0)
//             {
//                 isPrime=0;
//                 printf("%d is a not a prime numeber as it is divisible by %d",num, i);
//                 break;
//             }
//         }
//     }
//     if (isPrime==1){
//         printf("%d is prime",num);
//     }
//     return 0;
// }

#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    unsigned int n=99,num[n+1];
    // for (unsigned int i = 2; i <= n; i++)
    // {
    //     num[i]=1;
    // }
    // int a=0;
    // memset(num,1, n*sizeof(num[0]));
    for (unsigned int i = 0; i <= n; i++)
    {
            printf("%d, ", num[i]);
    }
    printf("\n");
    for (unsigned int i = 2; i <= sqrt(n); i++)
    {
        if (num[i]==1)
        {
            for (unsigned int j = 2*i; j <= n; j=j+i)
            {
                if(num[j]==1)
                    num[j]=0;
            }
        }
    }
    // for (unsigned int i = 2; i <= n; i++)
    // {
    //     if (num[i]==1)
    //     {
    //         printf("%d, ", i);
    //     }
        
    // }
    return 0;
}