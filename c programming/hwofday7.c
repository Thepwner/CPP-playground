#include<stdio.h>

int main(){
   float average1, average2;
   int n;
    // printf("attention!\nThe marks should be inserted according to the format(math,science, social, opt math));
    int  sum1=0, sum2=0;
    printf("put the number for the no.of subjects:\n");
    scanf("%d", &n);
    int std1[n],std2[n];
    printf("enter the marks of first student\n");
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &std1[i]);
    }
    // for ( i = 0; i < 4; i++)
    // {
        // printf("%d ", std1[i]);
    // }
    
    // printf("the marks in four subjects of first student according to the format are:%d %d %d %d\n", std1[0], std1[1], std1[2], std1[3]);
    // printf("attention!\n\tfor second std\nThe marks should be inserted acording to the format(math,science, social, opt math)\nenter the marks:\n");

    // printf("put the number for the no.of subjects:\n");
    // scanf("%d", &n);
    printf("enter the marks of second student\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &std2[i]);
    }
    // printf("the marks in the four subjects of second student according to the format are: %d %d %d %d", std2[0], std2[1], std2[2], std2[3]);

    for ( int i = 0; i < n; i++)
    {
        sum1=sum1+std1[i];
        sum2=sum2+std2[i];
    }
    printf("the value of sum 1 and sum 2 is : %d %d", sum1, sum2);

    average1=1.0*sum1/n;
    average2=1.0*sum2/n;

    printf("\nthe average of the first student is %.2f", average1);
    printf("\nthe average of the second student is %.2f", average2);

    if (average1>average2)
    {
        printf("\ntherefore comparing the both marks,\nthe first student has attended better marks than the second one");
    }
    else if (average2>average1)
    {
        printf("\ntherefore comparing the both marks,\nthe second student has attended better marks than the first one");
    }
    else if (average1==average2)
    {
        printf("\ntherefore comparing the both marks,\nthey both are equal, therefore they need more practise to lead one of them");
    }
    else
    printf("\nyour marks is invalid");
    return 0;
}