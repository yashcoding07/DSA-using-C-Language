#include <stdio.h>
#include <string.h>
#define MAXX 5

char Stack[MAXX][100];
int top = -1;

void push(char book[100]) {
    if(top == MAXX - 1) {
        printf("Stack Overflow! You cannot add another book.\n");
        return;
    }
    top++;
    strcpy(Stack[top], book);
    printf("The book is placed in the stack.\n");
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow! No book to remove.\n");
        return;
    }
    printf("%s named book is removed from the stack.\n", Stack[top]);
    top--;
}

void peek() {
    if(top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Top book: %s\n", Stack[top]);
}

void display() {
    if(top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements are:\n");
    for(int i = top; i >= 0; i--) {
        printf("%s\n", Stack[i]);
    }
}

int main() {
    int choice;
    char book[100];
    
    while(1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the book name: ");
                scanf("%s", book);
                push(book);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid Choice.\n");
        }
    }
}