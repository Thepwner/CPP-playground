#include<stdio.h>
#include<math.h>

int main(){
        int a, b, c, d; 
        float fforc,temp;

        //input from the user

        printf("enter the values of the given changable alphabetes(a, b and c):\n");
        scanf("%d%d%d", &a, &b, &c);
        fforc=(b*b-4*a*c);

        //using if condition

        if (a!=0)
        {
            printf("the value of a is valid\n");

        //formula for the condition and calculation

            if (fforc>0)
            {
                printf("there are two roots in this condition(+ve, -ve):\n");
                printf("the ans in +ve is %.2f\n", (-b+sqrt(fforc)) / (2*a));
                printf("the ans in -ve is %.2f\n", (-b-sqrt(fforc))/(2*a));
            }
            else if (fforc==0)
            {
                printf("there is only one solution in this condition(i.e. +ve or -ve).\n");
                printf("type the number which is >=0 or <=5 for +ve\t and >=5 or <=10 for -ve\n");
                scanf("%d", &d);
                if ((d>=0) && (d<=5))
                {
                     printf("the ans in +ve is: %f",(-b+sqrt(b*b-4*a*c))/(2.0*a) );
                }
                else if ((d>=5) && (d<=10))
                {
                     printf("the ans in -ve is: %f", (-b-sqrt(b*b-4*a*c))/(2.0*a));
                }
                else
                    printf("the value of that formula is invalid");
            }
            else if (fforc<0)
            {
                printf( "but this may be the imaginary for your level.\n");
            }
        }
        else
            printf("your input value of a is invalid.");
        return 0;
    }