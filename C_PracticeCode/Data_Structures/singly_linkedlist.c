#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*head2,*pre,*pre2,*newnode;
void create_node();
void display();
void insert_front();
void insert_end();
void insert_before(int);
void insert_after(int);
void delete_front();
void delete_end();
void delete_before(int);
void delete_after(int);
int main()
{
    int i;
    for (i=0; i<5; i++)
    {
        create_node();
    }
    display();
    insert_front();
    printf("\nAfter insert_front\n");
    display();
    insert_end();
    printf("\nAfter insert_end\n");
    display();
    insert_before(3);
    printf("\nAfter insert_before\n");
    display();
    insert_after(3);
    printf("\nAfter insert_after\n");
    display();
    delete_front();
    printf("\nAfter delete_front\n");
    display();
    delete_end();
    printf("\nAfter delete_end\n");
    display();
    delete_before(3);
    printf("\nAfter delete_before\n");
    display();
    delete_after(3);
    printf("\nAfter delete_after\n");
    display();
}
void create_node()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter a value : ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}
void display()
{
    if (head==0)
    {
        printf("singly linked list is empty !");
    }
    else
    {
        temp =head;
        while (temp != 0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
void insert_front()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter a value to add at front : ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}
void insert_end()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter a value to add at end : ");
    scanf("%d", &newnode->data);
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = 0;
}
void insert_before(int v)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter a value add before %d : ",v);
    scanf("%d", &newnode->data);
    temp = head;
    while(temp->data != v)
    {
        pre=temp;
        temp=temp->next;
    }
    newnode->next=temp;
    pre->next=newnode;
    temp=head;
    if (temp=='\0')
    {
        insert_front();
    }
}
void insert_after(int v)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter a value add after %d : ",v);
    scanf("%d", &newnode->data);
    temp=head;
    while(temp->data!=v)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    if(temp->next=='\0')
    {
        insert_end();
    }
}
void delete_front()
{
    temp = head;
    head = temp->next;
    free(temp);
}
void delete_end()
{
    temp = head;
    while (temp->next != 0)
    {
        pre = temp;
        temp = temp->next;
    }
    pre->next = 0;
    free(temp);
}
void delete_before(int v)
{
    if (head == NULL)
    {
        return; // Handle the case when the list is empty.
    }
    temp=head;
    while (temp != NULL && temp->data != v)
    {
        pre2 = pre;
        pre = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return; // Value not found in the list, do nothing.
    }
    if (pre2 != NULL)
    {
        pre2->next = temp;
    }
    else
    {
        head = temp; // Update head if the element to delete is the first one.
    }
    free(pre);
    if (temp->next == '\0')
    {
        delete_front(); // Handle the case when the next element is the head.
    }
}
void delete_after(int v)
{
    temp=head;
    if(head==NULL)
    {
        return;
    }
    while(temp != '\0' && temp->data != v)
    {
        pre=temp->next->next;
        temp=temp->next;
    }
    if (temp=='\0')
    {
        return;
    }
    if(pre=='\0')
    {
        head=head->next;
    }
    temp->next=pre->next;
    free(pre);
}
// complete ..!
