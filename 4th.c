4th. wap to implement selection sort
#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, i, j, min_index, temp;

    clrscr();  // Clear the screen

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        min_index = i;  // Assume the current position as the minimum
        
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;  // Update the minimum index
            }
        }
        
        // Swap the minimum element with the current element
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    // Printing the sorted array
    printf("Array after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    getch(); // Wait for key press
}
Enter number of elements in array: 5
Enter 5 elements:
5 1 9 3 7
Array after sorting:
1 3 5 7 9
