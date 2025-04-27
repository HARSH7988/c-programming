5th wap to implement linear search 
#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, element, i, found = 0;

    clrscr();  // Clear the screen

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    // Linear Search Algorithm
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;  // Element found
            break;
        }
    }

    if (found) {
        printf("Element %d found at position %d.\n", element, i);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    getch(); // Wait for key press
}
Enter number of elements in array: 5
Enter 5 elements:
10 20 30 40 50
Enter element to search: 30
Element 30 found at position 2.
