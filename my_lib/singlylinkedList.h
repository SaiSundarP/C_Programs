#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

/*This consist of functions like push, pop, find, display, reverse for singly linked lists */

struct node{
    int data;
    struct node* next;
};
//Function to initialize the linked list by setting the head node's next pointer to NULL
void initializeList(struct node *list){
    list->next=NULL;
}

//Function to add a new node with the given value to the end of the linked list
void push(int value,struct node **list){
    struct node* newnode =(struct node*) malloc (sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
   
    newnode->data = value;
    newnode->next = NULL;

    /* Empty list */
    if (*list == NULL) {
        *list = newnode;
        printf("Successfully inserted!\n");
        return;
    }

    /* Traverse to the last node */
    struct node *temp = *list;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;

    printf("Successfully inserted!\n");
}


//Function to find a node with the given value in the linked list
void find(int value,struct node *list){
    
    
    while(list!=NULL){
        if (list->data==value){
            printf("\n%d",list->data);
            return;
        }
        list=list->next;
    }

    printf("Element not found!");
    
}

//Function to display the values of all nodes in the linked list
void display(struct node* list){
    if (list == NULL) {
        printf("The list is empty.\n");
        return;
    }

    while(list!=NULL){
        printf("\n%d",list->data);
        list=list->next;
    }
    
}

/*function to reverse a linked list. 
This function takes a pointer to the head of the linked list as an argument and reverses the linked list in place. 
It uses three pointers: prev, curr, and next to keep track of the previous, current, and next nodes in the linked list. 
The function iterates through the linked list, reversing the direction of the next pointers until it reaches the end of the list. 
Finally, it updates the head pointer to point to the new head of the reversed linked list.
*/

void reverseLinkedList(struct node** head){
    struct node *prev= NULL;
    struct node *curr=*head;
    struct node *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}


#endif // SINGLY_LINKED_LIST_H