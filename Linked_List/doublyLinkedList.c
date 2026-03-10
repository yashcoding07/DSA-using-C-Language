#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* DoublyLinkedList(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void insertAtBeg(struct Node** head, int value){
    struct Node* newNode = DoublyLinkedList(value);

    if(*head == NULL){
        *head = newNode;
    }else{
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
    printf("Inserted %d at the beginning\n", value);
}

void insertAtEnd(struct Node** head, int value){
    struct Node* newNode = DoublyLinkedList(value);

    if(*head == NULL){
        *head = newNode;
    }else{
        struct Node* temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Inserted %d at the end\n", value);
}

void traverseForword(struct Node* head){
    if(head == NULL){
        printf("list is empty\n");
        return;
    }

    struct Node* temp = head;
    printf("Doubly Linked List (forward): ");
    while(temp != NULL){
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void traverseBackward(struct Node* head){
    if(head == NULL){
        printf("list is empty\n");
        return;
    }

    struct Node* temp = head;
    printf("Doubly Linked List (backward): ");
    while(temp != NULL){
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main(){
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeg(&head, 5);
    insertAtBeg(&head, 1);

    traverseForword(head);
    traverseBackward(head);

    return 0;
}