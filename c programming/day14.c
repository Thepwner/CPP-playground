/*  
    Harshad number:


    #include<stdio.h>

    int main(void){
        int num1;
        //taking input from user
        printf("enter a number\n");
        scanf("%d", &num1);
        
        int  num2=num1;
        int sum=0, mod;
        while (num1!=0)
        {
            mod=num1%10;
            sum=sum+mod;
            num1=num1/10;
        }
        printf("Sum %d\t",sum);
        printf("Num %d\n",num2);
        
        if (num2%sum==0)
        {
            printf("this is a harshad number.");
        }
        else if (num2%sum!=0)
        {
            printf("this is not a harshad number.");
        }
    }


#include<stdio.h>

int factors_sum(int num){
    int mod,sum=0;
    for (int i = 1; i < num; i++)
    {
        mod=num%i;
        if (mod==0)
        {
            sum=sum+i;            
        }
    }
    return sum;
}
int main(){
    int num1, num2, mod ,sum1=0, sum2=0,amic=0;
    printf("enter a numeber\n");
    scanf("%d%d", &num1, &num2);
    sum1=factors_sum(num1);
    if (sum1==num2)
    {
        sum2=factors_sum(num2);           
        if (sum2==num1)
        {
            amic=1;
            printf("this is a amicable number.\n"); 
        }
    }
    if (amic==0){
        printf("This is not amicable number");
    }
    return 0;
}
*/
//!MAx number 
#include<stdio.h>
int compare(*pa,)

int main(){
    int a=10, b=9, num;
    num=compare(&a, &b)
    // printf("the max number is ")
    return 0;
}



