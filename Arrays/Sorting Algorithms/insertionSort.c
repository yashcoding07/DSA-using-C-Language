#include <stdio.h>

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}


int main(){ 

    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }

    printf("Original Array: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("\nSorted Array: \n");
    printArray(arr, n);

    return 0;
}