#include <stdio.h>
#include <stdlib.h>
// Define the structure for a singly linked list node
struct Node
{
    int data;
    struct Node* next;
};
// Define a structure for the queue
struct Queue
{
    struct Node* front;
    struct Node* rear;
};
// Function to create an empty queue
struct Queue* createQueue()
{
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}
// Function to enqueue an element at the rear of the queue
void enqueue(struct Queue* queue, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->rear == NULL)
    {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else
    {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}
// Function to dequeue the element from the front of the queue
int dequeue(struct Queue* queue)
{
    if (queue->front == NULL)
    {
        printf("Queue is empty.\n");
        return -1; // You can choose a different error code.
    }

    struct Node* temp = queue->front;
    int data = temp->data;
    queue->front = temp->next;

    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }

    free(temp);
    return data;
}
// Function to check if the queue is empty
int isEmpty(struct Queue* queue)
{
    return queue->front == NULL;
}
int main()
{
    struct Queue* queue = createQueue();
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    while (!isEmpty(queue))
    {
        printf("Dequeued: %d\n", dequeue(queue));
    }

    return 0;
}
