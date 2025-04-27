wap to implement a stack 
#include <stdio.h>
#include <conio.h>

#define MAX 5
int stack[MAX], top = -1;

void push(int val) {
    if (top == MAX - 1)
        printf("Overflow!\n");
    else
        stack[++top] = val;
}

void pop() {
    if (top == -1)
        printf("Underflow!\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

void display() {
    int i;
    if (top == -1)
        printf("Stack Empty.\n");
    else {
        printf("Stack: ");
        for (i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n1.Push 2.Pop 3.Display 4.Exit\nChoice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: printf("Enter value: ");
                    scanf("%d", &val);
                    push(val);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exiting...");
                    break;
            default: printf("Invalid choice!\n");
        }
    } while(ch != 4);

    getch();
}
1.Push 2.Pop 3.Display 4.Exit
Choice: 1
Enter value: 10

Choice: 1
Enter value: 20

Choice: 3
Stack: 20 10

Choice: 2
Popped: 20

Choice: 3
Stack: 10

Choice: 4
Exiting...
