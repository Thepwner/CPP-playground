#include<stdio.h>

int main(){

    float phy, che, bio, math, comp, percentage;

    //taking input from the user

    printf("enter the marks in fivesubjects\n(physics, chemistry, biology, mathematics, computer):\n");
    scanf("%f%f%f%f%f", &phy, &che, &bio, &math, &comp);
    
    // calculation
    percentage=(phy+che+bio+math+comp)/5;
    
    //using %.2f
    printf("the percentage is %.2fpercent", percentage);
    
    //using if else
    if (percentage>=90)
    {
        printf("\ngrade A");
    }
    else if (percentage>=80)
    {
        printf("\ngrade B");
    }
    else if (percentage>=70)
    {
        printf("\ngrade C");
    }
    else if (percentage>=60)
    {
        printf("\ngrade D");
    }
    else if (percentage>=40)
    {
        printf("\ngrade E");
    }
    else if (percentage<40)
    {
        printf("\ngrade f");
    }
    else
        printf("\nyour input is invalid.");
    return 0;
}