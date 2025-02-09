#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;
};
struct node *head=0, *newnode, *temp, *previous, *past, *next, *delete_past,*temp2;

void create_douly_linkkist();
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
    for(i=0; i<5; i++)
    {
        create_douly_linkkist();
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
    printf("\nAfter delete_before 3\n");
    display();
    delete_after(3);
    printf("\nAfter delete_after 3\n");
    display();

}

// create a doubly linked list function.
void create_douly_linkkist()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->pre=0;
    printf("\nEnter a data : ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->pre=temp;
        temp=newnode;
    }
}

// sequence display function.
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

// insert_front function.
void insert_front()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a data add at front : ");
    scanf("%d",&newnode->data);
    temp=head;
    temp->pre=newnode;
    newnode->next=temp;
    newnode->pre=0;
    head=newnode;
}

// insert_end function.
void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter a data add end : ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->pre=temp;
    previous=newnode; // Not important statement.
}

// insert_before function.
void insert_before(int v)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter number to add before 3 :");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->data != v)
    {
        temp=temp->next;
    }
    past=temp->pre;
    newnode->next=temp;
    newnode->pre=temp->pre;
    temp->pre=newnode;
    past->next=newnode;
}
// insert_after function.
void insert_after(int v)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter number to add after 3 :");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->data!=v)
    {
        temp = temp->next;
    }
    next=temp->next;
    next->pre=newnode;
    newnode->next=temp->next;
    newnode->pre=temp;
    temp->next=newnode;
}
// delete_front function.
void delete_front()
{
    temp=head;
    head=temp->next;
    free(temp);
}
// delete_end function.
void delete_end()
{
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    delete_past=temp->pre;
    delete_past->next=0;
    free(temp);
}
// delete_before function.
void delete_before(int v)
{
    if (head == '\0')
    {
        printf("list is empty !");
        return;
    }
    temp=head;
    while(temp != '\0')
    {
        if (temp->data == v)
        {
            if(temp->pre != '\0')
            {
                temp2=temp->pre;
                if(temp2->pre->next != '\0')
                {
                    temp2->pre->next=temp;
                }
                else
                {
                    head=temp;
                }
                temp->pre=temp2->pre;
                free(temp2);
                return;
            }
        }
        temp=temp->next;
    }
    printf("%d not found in list.\n",v);
}
// delete_after function.
void delete_after(int v)
{
    if(head=='\0')
    {
        printf("list is empty !");
        return;
    }
    temp=head;
    while(temp != '\0')
    {
        if(temp->data == v)
        {
            if (temp->next != '\0')
            {
                temp2=temp->next;
                temp->next=temp2->next;
                if(temp2->next != '\0')
                {
                    temp2->next->pre=temp;
                }
                free(temp2);
                return;
            }
            else
            {
                printf("no node to delete after %d ",v);
                return;
            }
        }
        temp=temp->next;
    }
    printf("%d not found in list",v);
}
// complete !!
