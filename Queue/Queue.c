#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int val){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if(front == NULL){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode; 
    }
}

void dequeue(){
    if(front == NULL){
        printf("Queue is empty.");
        return;
    }

    struct Node* temp = front;
    front = front->next;
    free(temp);

    if(front == NULL){
        rear = NULL;
    }
}

void display(){
    if(front == NULL){
        printf("Queue is empty.");
        return;
    }

    struct Node* temp = front;
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    enqueue(10), enqueue(20), enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}