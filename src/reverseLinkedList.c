#include <stdio.h>
#include <stdlib.h>
#include "../my_lib/singlylinkedList.h"

int main(){
    
    ;

    struct node* head = NULL; // Initialize the head pointer to NULL
   
    push(10, &head);
    push(20, &head);
    push(30, &head);
    display(head);
    printf("\nReversing the linked list...\n");
    reverseLinkedList(&head);
    display(head);
    //find(20,head);
}   
    