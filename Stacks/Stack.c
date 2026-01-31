#include <stdio.h>
#define MAXX 5

int STACK[MAXX];
int top = -1;

void push(int item){
        if(top == MAXX - 1){
            printf("Stack Overflow you can not add the %d\n", item);
        }

        top++;

        STACK[top] = item;
        printf("Item %d pushed sucessfully", item);
}

void pop(){
    if(top == -1){
        printf("Stack Underflow! unable to pop elements.");
        return;
    }

    int item = STACK[top];

    top--;

    printf("Item %d popped from the Stack.\n", item);
}

void peek(){
    if(top == -1){
        printf("Stack is empty.");
        return;
    }

    int item = STACK[top];
    printf("The top most element of the stack is: %d\n", item);
}

void display(){
    if(top == -1){
        printf("Stack is empty");
        return; 
    }

    printf("Stack elements are:\n");
    for(int i = top; i >= 0; i--){
        printf("%d\n", STACK[i]);
    }
}

int main() {

    int choice, item;
    
    while(1){
        printf("\n--- Stack Menu ---\n");
        printf("Select from the following options:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. peek\n");
        printf("4. Display Stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to Push: ");
            scanf("%d", &item);

            push(item);
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
            printf("Exiting program.");
            return 0;
        default:
            printf("Invalid Choice pls select an appropiate option.");
            break;
        }
    }
    return 0;
}