/*
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int val;
    struct node * next;
} node_t;

void append( node_t* head, int data){
    node_t* new = NULL;
    new = (node_t *) malloc(sizeof(node_t));

    new -> val = data;
    new -> next = NULL;
    node_t * temp = head;


   while( temp -> next != NULL){
       temp = temp -> next;
   }

    last node === temp
    temp -> next = new;
}

void printList(node_t * head){
    node_t * temp = head;
    while(temp -> next != NULL){
        printf("%d\n",temp -> val);
        temp = temp -> next;
    }
    printf("%d\n",temp->val);

}
int main(){
    node_t* head = NULL;

    head = (node_t *) malloc(sizeof(node_t));

    head -> val = 2;
    head -> next = NULL;

    append(head, 4);
    append(head, 6);

    printList(head);

    free(head);
}
*/

// //! --Insertion--
// #include <stdio.h>
// #include <stdlib.h>




// //!structure
// typedef struct node
// {
//     int val;
//     struct node * next;
// } node_t;




// //!function
// void function(node_t * head){
//     node_t * temp = head;
//     while (head -> next != NULL)
//     {
//         printf("%d\t", head -> val);
//         head = head -> next;
//     }
//     temp = head;
//     printf("%d", temp -> val);
//     free(temp);
// }




// //!function for new value and next
// void insert_0(node_t * head, int data, node_t * first, node_t * new){
//         node_t * temp = head;
//         new -> val = data;
//         new -> next = first;
//         // while (temp != NULL)
//         // {
//         //     temp = temp -> next;
//         //     if (temp == first)
//         //     {
//         //         new -> next = first;
//         //     }
//         // }
//         printf("%d\t", new -> val);
//         // printf("%d\t", new -> next);
//         free(temp);
//         free(new);
// }


// //!function
//     void position(node_t * head, node_t * new)
//     {
//         while ()
//         {
//             /* code */
//         }
                
//     }


// //!main function
// int main (){
//     int num, position, data;
//     node_t * head = NULL;
//     node_t * first = NULL;
//     node_t * second = NULL;
//     node_t * third = NULL;

//     head = (node_t *) malloc(sizeof(node_t));
//     first = (node_t *) malloc(sizeof(node_t));
//     second = (node_t *) malloc(sizeof(node_t));
//     third = (node_t *) malloc(sizeof(node_t));
    
//     head -> val = 4;
//     head -> next = first;

//     first -> val = 6;
//     first -> next = second;

//     second -> val = 7;
//     second -> next = third;

//     third -> val = 8;
//     third -> next = NULL;
//     function(head);
//     free(head);
//     free(first);
//     free(second);
//     free(third);
//     printf("\nplease enter a boollen value if u wanna insert a number in the structure\n");
//     scanf("%d", &num);
    
//     if (num == 1)
//     {
//         printf("enter the position for the insertion and data too.\n");
//         scanf("%d%d", &position, &data);
//     }

//     if (position == 0)
//     {
//         node_t * new = NULL;
//         new = (node_t *) malloc(sizeof(node_t));
//         insert_0(head, data, first, new);
//         position_0(head, new);
//     }
//     return 0;
// }