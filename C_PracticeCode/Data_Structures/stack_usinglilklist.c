#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;// Define the structure for a singly linked list node
};
struct Stack
{
    struct Node* top;// Define a structure for the stack
};
struct Stack* createStack()
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));// Function to create an empty stack
    stack->top = NULL;
    return stack;
}
void push(struct Stack* stack, int data) // Function to push an element onto the stack
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}
int pop(struct Stack* stack) // Function to pop the top element from the stack
{
    if (stack->top == NULL)
    {
        printf("Stack is empty.\n");
        return -1; // You can choose a different error code.
    }
    struct Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}
int isEmpty(struct Stack* stack) // Function to check if the stack is empty
{
    return stack->top == NULL;
}
int main()
{
    struct Stack* stack = createStack();
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    while (!isEmpty(stack))
    {
        printf("Popped: %d\n", pop(stack));
    }

    return 0;
}
