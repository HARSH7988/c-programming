wap to implement binary search 
#include <stdio.h>
#include <conio.h>

void main() {
    int arr[100], n, element, low, high, mid, found = 0;

    clrscr();  // Clear the screen

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    low = 0;
    high = n - 1;

    // Binary Search Algorithm
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == element) {
            found = 1;  // Element found
            break;
        } else if (arr[mid] < element) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    if (found) {
        printf("Element %d found at position %d.\n", element, mid);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    getch(); // Wait for key press
}
Enter number of elements in array: 6
Enter 6 elements in sorted order:
1 3 5 7 8 12
Enter element to search: 7
Element 7 found at position 3.
