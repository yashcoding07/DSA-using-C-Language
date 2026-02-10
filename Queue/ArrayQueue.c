#include <stdio.h>
#define SIZE 5

int Queue[SIZE];
int first = -1, rear = -1;

void enqueue(int val){
    if(rear == SIZE - 1){
        printf("Queue is full new element cannot be inserted.");
    }else{
        if(first == -1){
            first = 0;
        }
        rear = rear + 1;
        Queue[rear] = val;
    }
}

void dequeue(){
    if(first == -1 || first > rear){
        printf("Queue is empty.");
    }

    first = first + 1;

    if(first > rear){
        first = rear = -1;
    }
}

void displayQueue(){
    if(first > rear || first == -1){
        printf("Queue is empty.");
    }else{
        printf("Elements of the queue: \n");
        for(int i = first; i <= rear; i++){
            printf("%d", Queue[i]);
            printf("\n");
        }
    }
}

int main() {

    int n, val;

    printf("Enter the number of elements you want to insert: ", SIZE);
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter the element to insert at %d: ", i);
        scanf("%d", &val);

        enqueue(val);
    }


    displayQueue();
    dequeue();
    displayQueue();

    return 0;
}