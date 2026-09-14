#include<stdio.h>
#include "my_lib/linkedList.h"
struct Node{
    int data;
    struct Node *next;
};

//int createNode()



int main(){
    
    struct Node s1,s2,s3;
    s1.data=10;
    s2.data=20;
    s3.data=30;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=NULL;
    struct Node* head =&s1;
    
    reverseLinkedList(&head);
    while(head!= NULL){
        printf("%d ",head->data);
        head=head->next;
    }
}   
    