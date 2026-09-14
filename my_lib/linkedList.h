//function to reverse a linked list. This function takes a pointer to the head of the linked list as an argument and reverses the linked list in place. It uses three pointers: prev, curr, and next to keep track of the previous, current, and next nodes in the linked list. The function iterates through the linked list, reversing the direction of the next pointers until it reaches the end of the list. Finally, it updates the head pointer to point to the new head of the reversed linked list.
void reverseLinkedList(struct Node** head){
    struct Node *prev=NULL;
    struct Node *curr=*head;
    struct Node *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}

