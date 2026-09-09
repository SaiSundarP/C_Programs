#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
void push(int value,struct node *list){
    struct node* newnode =(struct node*) malloc (sizeof(struct node));
    while(list->next!=NULL){
        list=list->next;
    }
    list->next=newnode;
    newnode ->data =value;
    newnode ->next =NULL;
    
    printf("\nSuccessfully inserted!");
}
void find(int value,struct node *list){
    list=list->next;
    
    if(list->next!=NULL){
    while(list!=NULL){
        if (list->data==value){
            printf("%d",list->data);
        }
    }
}

else{
    printf("Element not found!");
}
}
void display(struct node* list){
    while(list->next!=NULL){
        printf("\n%d",list->data);
        list=list->next;
    }
    
}
int main() {
    // Write C code here
    struct node * list=(struct node*)malloc(sizeof(struct node));
    
    list->next=NULL;
    push(10,list);
    push(20,list);
    push(30,list);
    display(list);
    return 0;
}