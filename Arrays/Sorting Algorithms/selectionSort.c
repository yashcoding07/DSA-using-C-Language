// Selection Sort
#include <stdio.h>

// Sorting algorithm 
void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int small = i;
        for(int j = i + 1; j < n; j++){
            if(arr[small] > arr[j]){
                small = j;
            }
        }
        if(i != small){
            int temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }
    }
}

// For printing an array.
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[100], n;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter %d the element: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Original Array: \n");
    printArray(arr, n);
    
    selectionSort(arr, n);
    
    printf("Sorted Array: \n");
    printArray(arr, n);
    
    
    return 0;
}