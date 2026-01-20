// Bubble Sort Algorithm
#include <stdio.h>

// This function sorts the array using the bubble sort concept.
void bubbleSort(int arr[], int n){
    int i , j, temp;
    for(i = 0; i < n - 1; i++){ 
        // n - 1 is used becoz 1 element will be already sorted if we sort others.
        for(j = 0; j < n - i - 1; j++){ 
            // n - i - 1 is used becoz in every j iteration one iteration becomes less as one bubble element is already sorted.
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// this function prints the array 
void printArray(int arr[], int size){ 
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[] = {5, 3, 1, 9, 7};
    int n = sizeof(arr)/sizeof(arr[0]); 
    // sizeof returns the lenght in bytes so int = 4 bytes 4 x 5 = 20 which is then divided by each element which means it returns 5 on dividing.

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}