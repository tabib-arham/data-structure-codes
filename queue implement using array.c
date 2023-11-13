#include<stdio.h>
#define n 5
int queue[n];
int front=-1,rear=-1;

void enqueue()
{
    int x;
    printf("enter the data\n");
    scanf("%d",&x);
    if((rear+1)%n == front)
    {
        printf("overflow\n");
    }
    else if(front==-1 && rear==-1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear = (rear + 1) % n;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else if(front == rear)
    {
        printf("dequeued element is %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("dequeued element is %d\n", queue[front]);
        front = (front + 1) % n;
    }
}

void display()
{
    int i;
    if(front == -1 && rear == -1)
    {
        printf("display cannot be possible\n");
    }
    else
    {
        printf("elements in queue are: ");
        for(i = front; i != rear; i = (i + 1) % n)
        {
            printf("%d ", queue[i]);
        }
        printf("%d ", queue[i]); // Display the last element
    }
}

void peek()
{
    if(front == -1 && rear == -1)
    {
        printf("no elements \n");
    }
    else
    {
        printf("%d\n", queue[front]);
    }
}

int main() {
    int choice;

    do {
        printf("\n1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 0:
                printf("Exiting the program\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
