2. wap to delete an element at a particular location in a array

#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, position, i;

    clrscr();  // Clear the screen

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &position);

    if (position >= n || position < 0) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for (i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease size

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    getch(); // Wait for key press
}

Enter number of elements in array: 5
Enter 5 elements:
10
20
30
40
50
Enter position to delete (0-based index): 2
Array after deletion:
10 20 40 50
