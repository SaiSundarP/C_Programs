#include <stdio.h>
#include "../my_lib/stack.h"
int main(){

   Stack stack;
   
    initStack(&stack);
    pushtoStack(10, &stack);
    pushtoStack(20, &stack);
    popStack(&stack);
    int p =peek(&stack);
    printf("\n%d",p);
}
