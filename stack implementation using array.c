#include<stdio.h>
#include<stdlib.h>

#define n 5

int stack[n];
int top = -1;

void push() {
    int x;
    printf("Enter the element: ");
    scanf("%d", &x);
    if (top == n - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    int item;
    if (top == -1) {
        printf("Underflow\n");
    } else {
        item = stack[top];
        top--;
        printf("%d is popped out\n", item);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("%d\n", stack[top]);
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--) {
            printf("%d  ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    do {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
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
