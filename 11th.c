wap to implement queue using linked list
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int value) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL)
        front = rear = newNode;
    else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("%d enqueued.\n", value);
}

void dequeue() {
    if (front == NULL)
        printf("Queue Underflow!\n");
    else {
        struct Node *temp = front;
        printf("Dequeued: %d\n", temp->data);
        front = front->next;
        free(temp);
        if (front == NULL)
            rear = NULL;
    }
}

void display() {
    struct Node *temp = front;
    if (temp == NULL)
        printf("Queue is empty.\n");
    else {
        printf("Queue elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: printf("Enter value: ");
                    scanf("%d", &val);
                    enqueue(val);
                    break;
            case 2: dequeue();
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
1.Enqueue 2.Dequeue 3.Display 4.Exit
Enter choice: 1
Enter value: 10
10 enqueued.

Enter choice: 1
Enter value: 20
20 enqueued.

Enter choice: 3
Queue elements: 10 20

Enter choice: 2
Dequeued: 10

Enter choice: 3
Queue elements: 20

Enter choice: 4
Exiting...
