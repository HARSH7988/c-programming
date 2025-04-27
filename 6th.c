wap to implement intertion sort 
#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, i, j, key;

    clrscr();  // Clear the screen

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort Algorithm
    for (i = 1; i < n; i++) {
        key = arr[i]; // Element to be inserted
        j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Insert the key at the correct position
        arr[j + 1] = key;
    }

    // Printing the sorted array
    printf("Array after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    getch(); // Wait for key press
}
Enter number of elements in array: 6
Enter 6 elements:
12 4 8 3 7 5
Array after sorting:
3 4 5 7 8 12
