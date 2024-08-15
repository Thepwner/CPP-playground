#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node * next;
} node_t;

void insert( node_t * head, int position, int data){
    int i=0;
    node_t * temp = head;
    while (i < position-1)
    {
        temp = temp -> next;
        i++;
    }

    node_t * new = NULL;
    new = (node_t *) malloc(sizeof(node_t));

    new -> val = data;
    new -> next = temp -> next;
    temp -> next = new;   
}

void all_free(node_t * head){
    node_t * temp ;
    while (head != NULL)
    {
       temp = head;
       head = head->next;
       free(temp);
    }
}

void append(node_t * head, int data){
    node_t * temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    node_t * new = NULL;
    new = (node_t * ) malloc (sizeof(node_t));

    new -> val = data;
    new -> next = NULL;
    temp -> next = new;
}

void printList(node_t * head){
    node_t * temp = head;
    while(temp -> next != NULL){
        printf("%d\n",temp -> val);
        temp = temp -> next;
    }
    printf("%d\n", temp -> val);
}

int main(){
    int position, data, boolean;
    node_t * head = NULL;

    head = (node_t *) malloc (sizeof (node_t) );
    
    head -> val = 1;
    head -> next = NULL;

    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    
    printf("enter the boolen number for insertion::");
    scanf("%d", &boolean);
    if (boolean == 1)
    {
        printf("enter the position::");
        scanf("%d", &position);

        if (position < 5)
        {
            printf("enter the data::");
            scanf("%d", &data);

            insert(head, position, data);
            printList(head);
        }
        else
            printf("error");
    }
    else 
        printf("error");
    
    all_free(head);
}