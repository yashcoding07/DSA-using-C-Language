// Matrix Addition using 2D Arrays
#include <stdio.h>

int main() {

    int A[2][2] = {{1,2}, {3,4}}; // 1st operand
    int B[2][2] = {{5,6}, {7,8}}; // 2nd operand
    int sum[2][2]; // final sum

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            sum[i][j] = A[i][j] + B[i][j]; // addition process
        }
    }

    printf("Matrix Addition using 2D matrix:\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t", sum[i][j]); // printing the sum
        }
        printf("\n");
    }

    return 0;
}