/*
    Struct --> oop(object oriented programming)

    struct Bird{
        int height;
        int weight;
        char cl;
    };
*/
/*
class Bird:
    def __init__(self,species,height,weight,color):
        self. species=
        self.height = 
        self. weight =
        self. color =   

    def chirp(,,,):
        pass
    
    def fly(,,,):
        pass

bird1= Bird('Crow',323,3233,'blue');
bird2= Bird(')
*/
/*
#include <stdio.h>
#include<stdlib.h>

typedef struct Bird{
    int height;
    int weight;
    char cl;
} bird_t;

int main(){
    bird_t *bird1=NULL;
    bird_t * bird1 = (bird_t *) malloc(sizeof(bird_t));

    bird1 -> height=34;  // (*bird1).height
    bird1 -> weight=20;
    bird1 -> cl='b';

    printf("%d",bird1 -> height);
    free(bird1);
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct subjects
{
    int eng;
    float math;
    double science;
}marks_t;

int main(){
    marks_t std1;
    std1.eng = 50;
    std1.math = 20;
    printf("%f",std1.math);
    
    marks_t * marks1 = (marks_t *) malloc(sizeof(marks_t));
    marks1 -> eng = 40;
    marks1 -> math = 50.5;
    marks1 -> science = 60.66;
    
    marks_t * marks2 = (marks_t *) malloc (sizeof(marks_t));
    marks2 -> eng = 56;
    marks2 -> math = 57.7;
    marks2 -> science = 78.66;
    int x;
    
    printf("%d",(marks1->eng+marks2->eng)/2);
    free( marks1 );
    free( marks2 );


    return 0;
}


#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int val;
    struct Node * next;
} second_t;
void printList(second_t* ptr){
    while(ptr -> next != NULL ){
        printf("%d\n",ptr->val);
        ptr=ptr->next;
    }
    printf("%d",ptr->val);
}
int main(){
    second_t * head = NULL;
    second_t * second =NULL;
    second_t * third = NULL;

    head = (second_t *) malloc(sizeof(second_t));
    second = (second_t *) malloc(sizeof(second_t));
    third = (second_t *) malloc(sizeof(second_t));

    head -> val = 40;
    head -> next = second;

    second -> val = 50;
    second -> next = third;

    third -> val = 60;  
    third -> next = NULL;

    printList(head);
    free(head);
    free(second);
    free(third);
}
*/

#include<stdio.h>
#include<stdlib.h>


// !structure
typedef struct first_t
{
    int val;
    struct first_t * next;
} first_t;




// //!second structure
typedef struct second_t
{
    int val;
    struct second_t * next;
} second_t;




// !function
void printfirst( first_t * ptr1){
    while(ptr1 -> next != NULL ){
        printf("%d\n", ptr1 -> val);
        ptr1 = ptr1 -> next;
    }
    printf("%d", ptr1 -> val);
}


// //!second function
void printsecond( second_t * ptr2){
    while(ptr2 -> next != NULL ){
        printf("%d\n", ptr2 -> val);
        ptr2 = ptr2 -> next;
    }
    printf("%d", ptr2 -> val);
}


//!main
int main(){
    int num, first_number, number;
    printf("type 1 for the first number too\n");
    scanf("%d", &num);
    printf("enter t~he first number\n");
    scanf("%d", &number);

    if (num==1)
    {
        first_t * head = NULL;
        first_t * first = NULL;
        first_t * second = NULL;
        first_t * third = NULL;

        head = (first_t *) malloc (sizeof(first_t));
        first = (first_t *) malloc (sizeof(first_t));
        second = (first_t *) malloc (sizeof(first_t));
        third = (first_t *) malloc (sizeof(first_t));

        head -> val = 40;
        head -> next = first;

        first -> val = number;
        first -> next = second;

        second -> val = 50;
        second -> next = third;

        third -> val = 60;  
        third -> next = NULL;
        
        printfirst(head);
        free(head);
        free(first);
        free(second);
        free(third);
    }
    else{
        second_t * head = NULL;
        second_t * second = NULL;
        second_t * third = NULL;

        head = (second_t *) malloc(sizeof(second_t));
        second = (second_t *) malloc(sizeof(second_t));
        third = (second_t *) malloc(sizeof(second_t));

        head -> val = 40;
        head -> next = second;

        second -> val = 50;
        second -> next = third;

        third -> val = 60;  
        third -> next = NULL;

        printsecond(head);
        free(head);
        free(second);
        free(third);
        }
        return 0;
}