// /*
//     Problem 1:
//         Make the following pattern in C:
//             5,55,555,5555,55555

//     Problem 2:
//         Take a integer from user and print them in reverse order.
//             Input:  12345
//             Output: 54321
// */
// #include<stdio.h>

// int main(){
//     //Problem-1
//     // int  ch;
//     // int num=5;
//     // for (int i = 5 ; i <= 55555 ;i=i*10+5 )
//     // {
//     //    printf("%d,", i);
//     // }
//     // for(int i=0;i<5;i++){
//     //     printf("%d,",num);
//     //     num=num*10+5;
//     // }

//     //Problem-2

//     int num, n1, rev=0,num2;
//     printf("enter the number:\n");
//     scanf("%d", &num);
//     num2=num;
//     while (num!=0)
//     {
//         n1=num%10;
//         rev=rev*10+n1;
//         num=num/10;
//     }
//     printf("the reverse of numebr is %d", rev);
//     printf("\n");
//     printf("%d\t", num2);
    
//     if (rev==num2)
//     {
//         printf("this is the palindrome number");
//     }
//     else
//     printf("it is not palindrome number ");
//     return 0;
// }

// #include<stdio.h>
// //for factor
// int main(){
//     int num=0, n;
//     printf("enter a number:\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//     num=n%i;
//     // printf("%d,", i);
//     if (num==0)
//     {
//         printf("%d, ", i);
//     }
//     }
//     return 0;
// }

// #include<stdio.h>
// // for factorial
// int main(){
//  int not=1, n;
//  printf("enter a number:\n");
//  scanf("%d", &n);
//  for (int i = 1; i <= n;i++)
//  {
//     not=not*i;
//  }
//     printf("the factorial of your input is :%d", not);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int num;
//     printf("enter a number;\n");
//     scanf("%d", &num);
// //     for (int i = 1; i <= 10;i++)
// //    {   
// //       printf("%d\t ", num);
// //       if (num%2==0)
// //       {
// //         num=num/2;
// //       }
// //       else{
// //         num=3*num+1;
// //       }
// //    }
//     while(num!=1){
//         printf("%d\t ", num);
//         if (num%2==0)
//         {
//             num=num/2;
//         }
//         else{
//             num=3*num+1;
//         }
//     }
//   return 0;
// }