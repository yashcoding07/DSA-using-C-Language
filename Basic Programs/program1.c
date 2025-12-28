// Types of declaration of array.

#include <stdio.h>

// void StaticArrayDemo();
void ShowArray(const int arr[], int size, const char* msg){

    printf("%s\n", msg);
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
};


int main(){

    // simple declaration without initialization
    int arr1[5];
    for(int i = 0; i <  5; i++){
        arr1[i] = i + 1;
    }
    ShowArray(arr1, 5, "1. Simple declaration:");

    // Full Initialization
    int arr2[5] = {10, 20, 30, 40, 50};
    ShowArray(arr2, 5, "2. Full Initialization:");

    int arr3[5] = {10, 20};
    ShowArray(arr3, 5, "3. Partial Initialization:");

    int arr4[] = {10, 20, 30, 40, 50};
    ShowArray(arr4, 5, "4. Initialization without size:");

    int arr5[5];
    for(int i = 0; i < 5; i++){
        arr5[i] = i * 2;
    };
    ShowArray(arr5, 5, "5. Initialization using Loop: ");

    int arr6[5] = {0};
    ShowArray(arr6, 5, "6. All 0 initialization.");

    const int arr7[3] = {10, 20, 30};
    ShowArray(arr7, 3, "7. Constant Initialization."); 

    return 0;
}