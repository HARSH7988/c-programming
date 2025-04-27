1. wap to insert an element ar a particular location in array
#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, element, position, i;

    clrscr();  // Clear the screen

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position (0-based index): ");
    scanf("%d", &position);

    // Shift elements to the right
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++; // Increase size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    getch(); // Wait for a key press
}


Enter number of elements in array: 5
Enter 5 elements:
10
20
30
40
50
Enter element to insert: 25
Enter position (0-based index): 2
Array after insertion:
10 20 25 30 40 50 
