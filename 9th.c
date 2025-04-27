wap to implement quick sort
#include <stdio.h>
#include <conio.h>

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];  // Pivot element
        int i = low - 1;        // Index of smaller element
        int temp;

        // Partitioning the array
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Swap pivot element with arr[i + 1]
        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        // Recursively apply quickSort to the subarrays
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

void main() {
    int arr[100], n;

    clrscr();  // Clear the screen

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Array after Quick Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    getch(); // Wait for key press
}
Enter number of elements in array: 6
Enter 6 elements:
12 4 8 3 7 5
Array after Quick Sort:
3 4 5 7 8 12
