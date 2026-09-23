#include <stdio.h>
#include <stdlib.h>
#include "../my_lib/singlylinkedList.h"

int main() {
    
    struct node * list=(struct node*)malloc(sizeof(struct node));
    initList(&list);
    pushtoList(10,&list);
    pushtoList(20,&list);
    pushtoList(30,&list);
    printf("\nThe elements are:");
    displayList(list);
    printf("Reverse Linked List:");
    reverseLinkedList(&list);
    displayList(list);
    popList(20,&list);
    popList(30,&list);
    printf("\nThe elements after pop:");
    displayList(list);
    
    return 0;
}