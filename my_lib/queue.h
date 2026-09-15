#ifndef QUEUE_H //Macro to prevent multiple inclusions of the header file
#define QUEUE_H 

#define SIZE 100
//Circular Queue implementation using an array and two pointers front and rear. The front pointer points to the first element in the queue, while the rear pointer points to the last element in the queue. The queue is considered full when the rear pointer reaches the end of the array and wraps around to the beginning, and it is considered empty when the front pointer is equal to -1.
typedef struct{
    int arr[SIZE];
    int front;
    int rear;
} Queue;

void intializeQueue(Queue *q){
    q->front = -1;
    q->rear = -1;
}

//Function to add an element to the queue. It checks if the queue is full, and if not, it adds the new element to the rear of the queue and updates the rear pointer accordingly.
void enqueue(Queue *q, int value){
    if((q->rear+1)%SIZE == q->front){
        printf("\nQueue is Full!");
    }
    else{
        if(q->front ==-1){
            q->front =0;
        }
        q->rear = (q->rear + 1) % SIZE; //move rear pointer to the next position in the circular array
        q->arr[q->rear] = value;
       
    }
}

//Function to remove an element from the queue. It checks if the queue is empty, and if not, it removes the element from the front of the queue and updates the front pointer accordingly.
void dequeue(Queue *q){
    if(q->front == -1){
        printf("\nQueue is Empty!");
    }
    else{
        int value = q->arr[q->front];
        if(q->front == q->rear){ //if there is only one element in the queue, reset front and rear to -1
           intializeQueue(q); //reset front and rear to -1
        }
        else{
            q->front = (q->front + 1) % SIZE; //move front pointer to the next element in the queue
        }
        printf("\nDequeued element: %d", value);
    }
}

#endif