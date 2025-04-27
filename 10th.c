wap to implement a queue
#include <stdio.h>
#include <conio.h>

#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1)
        printf("Overflow!\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = val;
        printf("%d enqueued.\n", val);
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Underflow!\n");
    else
        printf("Dequeued: %d\n", queue[front++]);
}

void display() {
    int i;
    if (front == -1 || front > rear)
        printf("Queue Empty.\n");
    else {
        printf("Queue: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

void main() {
    int ch, val;
    clrscr();

    do {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\nChoice: ");
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
Choice: 1
Enter value: 10
10 enqueued.

Choice: 1
Enter value: 20
20 enqueued.

Choice: 3
Queue: 10 20

Choice: 2
Dequeued: 10

Choice: 3
Queue: 20

Choice: 4
Exiting...
