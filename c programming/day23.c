#include<stdio.h>
#include<math.h>
#include <stdlib.h>

typedef struct node{
    int prime;
    struct node * next;
} node_t;

void append( node_t * head, int num){
    node_t * new = (node_t *) malloc(sizeof(node_t));

    new -> prime = num;
    new -> next = NULL;

    node_t* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = new;
}

void printList(node_t* head ){
    node_t * temp = head;
    while(temp != NULL){
        printf("%d\n",temp-> prime);
        temp = temp -> next;
    }
}

void all_free(node_t * head){
    node_t * temp = NULL;
    while(head != NULL ){
        temp = head;
        head = head -> next;
        free(temp);
    }
}

int main(){
    int arr[]= {100, 500, 700, 600};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int * prime = (int *) malloc((max+1) * sizeof(int));

    for ( int i = 2; i <= max; i++){
        prime[i] = 1;
    }

    for (int i = 2; i <= sqrt(max); i++)
    {
        if( prime[i] != 0){
            for( int j = 2*i ; j <= max;  j = j+i ){
                prime[j] = 0;
            }
        }
    }

    node_t * head = NULL;

    head = (node_t *) malloc(sizeof(node_t));
    head -> prime = 2;
    head -> next = NULL;
    int count = 0;
    for(int i = 3; i <= max ; i++){
        if(prime[i] == 1)  append(head,i) ;
    }
    free(prime);
    printList(head);

    all_free(head);   
    return 0;
}