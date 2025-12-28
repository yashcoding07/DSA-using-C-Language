// Inserting an element at a specific position in an array.
#include <stdio.h>

int main() {
    int arr[100], i, n, element, pos;

    printf("Enter the number of elements (MAX 100): ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos-1] = element; // Insert element
        n++; // Increase size

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}