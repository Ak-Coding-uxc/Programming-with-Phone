#include <stdio.h>
#include <stdlib.h>  // Use stdlib.h for exit function

#define SIZE 5  // Define the size of the stack

void push(int stack[], int *top);
void pop(int stack[], int *top);

int main() {
    int choice; 
    int stack[SIZE], top = -1;

    do {
        printf("Enter your choice: 1.push 2.pop 3.exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                push(stack, &top);
                break;
            case 2:
                pop(stack, &top);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}

void push(int stack[], int *top) {
    int item;

    if (*top < SIZE - 1) {
        printf("Enter the number: ");
        scanf("%d", &item);
        (*top)++;
        stack[*top] = item;
    } else {
        printf("Stack is full\n");
    }
}

void pop(int stack[], int *top) {
    int item;

    if (*top >= 0) {
        item = stack[*top];
        (*top)--;
        printf("Number deleted is = %d\n", item);
    } else {
        printf("Stack underflows\n");
    }
}