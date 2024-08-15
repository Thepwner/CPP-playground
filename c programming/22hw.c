#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int val;
    struct node * next;
} node_t;

void append( node_t* head, node_t * first, node_t * second, node_t * three, int data, int position){
    node_t* new = NULL;
    new = (node_t *) malloc(sizeof(node_t));

    if (position == 0 )
    {
        new -> val = data;
        new -> next = first;
        node_t * temp = head;

        while( temp -> next != first){
        temp = temp -> next;
        }
        temp -> next = new;
        free(temp);
        free(new);
    }
    else if (position == 1 )
    {
        new -> val = data;
        new -> next = second;
        node_t * temp = head;

        while( temp -> next != second){
        temp = temp -> next;
        }
        temp -> next = new;
        free(temp);
        free(new);
    }
    else if (position ==  2)
    {
        new -> val = data;
        new -> next = three;
        node_t * temp = head;

        while( temp -> next != three){
        temp = temp -> next;
        }
        temp -> next = new;
        free(temp);
        free(new);
    }
}

void printList(node_t * head)
{
    node_t * temp = head;
    while(temp -> next != NULL)
    {
        printf("%d\n",temp -> val);
        temp = temp -> next;
    }
    printf("%d\n", temp -> val);
}
    

int main(){
    int num, data, position;
    node_t * head = NULL;
    node_t * first = NULL;
    node_t * second = NULL;
    node_t * three = NULL;

    head = (node_t *) malloc(sizeof(node_t));
    first = (node_t *) malloc(sizeof(node_t));
    second = (node_t *) malloc(sizeof(node_t));
    three = (node_t *) malloc(sizeof(node_t));

    head -> val = 2;
    head -> next = first;

    first -> val = 4;
    first -> next = second;

    second -> val = 5;
    second -> next = three;

    three -> val = 6;
    three -> next = NULL;

    append(head, first, second, three, 3, 0);
    printList(head);
    free(head);
    return 0;
}