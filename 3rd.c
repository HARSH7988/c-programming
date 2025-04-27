3. wap to implement bubble sort. 
#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, i, j, temp;

    clrscr();  // Clear the screen

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
