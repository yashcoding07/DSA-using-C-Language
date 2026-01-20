#include <stdio.h>

int main()
{
    int arr[10] = {10, 23, 45, 64, 25, 67, 87, 78, 90, 19};
    int target = 90;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            index = i;
        }
    }

    if(index == -1)
    {
        printf("Element not found!");
    }else 
    {
        printf("Element found on %d index.", index);
    }

    return 0;
}