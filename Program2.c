// Declaration and initialization of 2D Arrays 
#include <stdio.h>

int main() {

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    }; // Declaration and initialization of 2D Array

    printf("2D Array Elements: \n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d\t", arr[i][j]); // This nested loop prints the 2D array
        }

        printf("\n");
    };

    return 0;
}