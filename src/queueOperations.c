#include <stdlib.h>
#include <stdio.h>
#include "../my_lib/queue.h"

int main(){
    Queue q;
    intializeQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    dequeue(&q);
    return 0;
}