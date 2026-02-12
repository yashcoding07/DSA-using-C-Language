#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// function to create a new node.

struct Node* createNode(int value){
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Traversal techniques
void preOrder(struct Node *root){
    if(root != NULL){
        printf("%d\t", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t", root->data);
    }
}

void inOrder(struct Node *root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d\t", root->data);
        inOrder(root->right);
    }
}



int main(){

    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Preorder traversal: \n");
    preOrder(root);
    printf("\nPostorder traversal: \n");
    postOrder(root);
    printf("\nInorder traversal: \n");
    inOrder(root);

    return 0;
}