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

// function to insert a new node

struct Node* insert(struct Node* root, int value){
    if(root == NULL){
        return createNode(value);
    }

    if(value < root->data){
        root->left = insert(root->left, value);
    }else if(value > root->data){
        root->right = insert(root->right, value);
    }

    return root;
}

// Searching an element in the key

void search(struct Node* root, int key){
    if(root == NULL){
        printf("Element not found\n");
        return;
    }

    if(key == root->data){
        printf("Element found in BST\n");
    }

    if(key < root->data){
        search(root->left, key);
    }else{
        search(root->right, key);
    }
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
    insert(root ,2);
    insert(root ,3);
    insert(root, 6);
    search(root, 3);

    printf("Preorder traversal: \n");
    preOrder(root);
    printf("\nPostorder traversal: \n");
    postOrder(root);
    printf("\nInorder traversal: \n");
    inOrder(root);

    return 0;
}