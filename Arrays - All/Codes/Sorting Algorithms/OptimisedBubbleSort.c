#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[] = { 12, 46, 34, 82, 10, 9, 28 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\nInput Array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        
    bubble_sort(arr, n);

    printf("\nSorted Array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

