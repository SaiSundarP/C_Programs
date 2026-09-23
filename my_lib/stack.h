#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100
int ptr;

typedef struct{
    int arr[MAX_SIZE];
    int ptr;
} Stack;

//Initialze pointer to -1
void initStack(Stack *s){
    s->ptr=-1;
}

//checks whther stack is full
bool isFullStack(Stack *s){
    if(s->ptr==MAX_SIZE-1){
        return true;
    }
    return false;
}

//checks whether stack is empty
bool isEmptyStack(Stack *s){
    if(s->ptr==-1){
        return true;
    }
    return false;
}

//Function to insert an element into stack
void pushtoStack(int value, Stack *s){
    if(isFullStack(s)){
        printf("\nMemory Full !");
        initStack(s);
        return;
    }
    else{
        s->ptr++;
        s->arr[s->ptr]=value;
        printf("\nPushed into stack");
    }
}

//Function to delete an element
void popStack(Stack *s){
    if(isEmptyStack(s)){
        printf("\nStack is empty! Cannot perform pop");
    }
    else{
        printf("\nElement popped from stack :%d",s->arr[s->ptr]);
        s->ptr--; 
    }
}

//Returns the current element in the stack
int peek(Stack *s){
    return s->arr[s->ptr];
}

#endif