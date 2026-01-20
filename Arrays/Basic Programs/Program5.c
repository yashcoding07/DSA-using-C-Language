// Declaring and traversing the Array using user input. 
#include <stdio.h>

int main() {

    int arr[5];

    for(int i = 0; i < 5; i++){
        printf("Enter the value of %d: ", i); // accepts the user value.
        scanf("%d", &arr[i]); // stores the user value.
    }

    for(int i = 0; i < 5; i++){
        printf("\nyou entered the value %d: %d\n", i, arr[i]); // prints the user value.
    } 

    return 0;
}