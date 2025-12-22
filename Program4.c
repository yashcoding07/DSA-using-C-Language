// Matrix Multiplication using 2D Arrays
#include <stdio.h>

int main() {

    int A[2][2] = {{1,2}, {3,4}}; // 1st operand
    int B[2][2] = {{5,6}, {7,8}}; // 2nd operand
    int Mul[2][2] = {0}; // final output

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){ // K loop is required for matching the values for multiplication
                Mul[i][j] += A[i][k] * B[k][j]; // multiplication process
            }
        }
    }

    printf("Matrix Multiplication using 2D Arrays\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t", Mul[i][j]); // printing the output
        }
        printf("\n");
    }

    return 0;
}