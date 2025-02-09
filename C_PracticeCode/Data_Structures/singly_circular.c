#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode,*pre,*pre2;
void create_node();
void insert_front();
void insert_end();
void insert_after();
void insert_before(int);
void delete_front();
void delete_end();
void delete_before();
void delete_after();
void display();

int main ()
{
    int i;
    for(i=0; i<5; i++)
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
    printf("\nAfter delete_before:\n");
    display();
    delete_after(3);
    printf("\nAfter delete_after:\n");
    display();


}

// create_node function.
void create_node()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value :");
    scanf("%d",&newnode->data);
    newnode->next= 0;
    if (head==0)
    {
        head = temp =newnode;
    }
    else
    {
        temp->next = newnode;
        temp=newnode;
    }
    while(temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next=head;
}
// display function.
void display()
{
    if(head==0)
    {
        printf("singly_circular linked list is empty\n");
    }
    else
    {
        temp = head;
        do
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        while(temp !=  head);
    }
}
// insert_front function.
void insert_front()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value add at front : ");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=head)
    {
        temp =temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
}
// insert_end function.
void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value add at end : ");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    temp=head;
}
//insert_before function
void insert_before(int v)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value add before %d : ",v);
    scanf("%d",&newnode->data);

    temp=head;
    while(temp->data!=v)
    {
        pre=temp;
        temp=temp->next;
    }
    newnode->next=temp;
    pre->next=newnode;
    temp=head;
    if(temp->next==head)
    {
        insert_front();
    }
}
//insert_after function
void insert_after(int v)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value add after %d : ",v);
    scanf("%d",&newnode->data);

    temp=head;
    while(temp->data != v)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    if (temp->next==head)
    {
        delete_end();
    }
}
// delete_front function
void delete_front()
{
    pre=temp=head;
    head=temp->next;
    free(temp);
    temp=head;
    while(temp->next != pre)
    {
        temp = temp->next;

    }
    temp->next=head;
}
// delete_end function
void delete_end()
{
    temp=head;
    while(temp->next!=head)
    {
        pre=temp;
        temp=temp->next;
    }
    pre->next=head;
    free(temp);
}
// delete_before function
void delete_before(int v)
{
    if (head == NULL)
    {
        // Handle the case when the list is empty.
        return;
    }

    while (temp != NULL && temp->data != v)
    {
        pre2 = pre;
        pre = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        // Value not found in the list, do nothing.
        return;
    }

    if (pre2 != NULL)
    {
        pre2->next = temp;
    }
    else
    {
        // Update head if the element to delete is the first one.
        head = temp;
    }

    free(pre);

    if (temp->next == head)
    {
        // Handle the case when the next element is the head.
        delete_front();
    }
}
// delete_after function
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
    if(pre==head)
    {
        head=head->next;
    }
    temp->next=pre->next;
    free(pre);
}
// complete..!
