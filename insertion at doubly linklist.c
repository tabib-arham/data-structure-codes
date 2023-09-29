#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*tail,*newnode;
void printing(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void create_node()
{
    int choice=1;
    while (choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data of linked list\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
         printf("insert a another node\n 1 for yes\n 0 for no\n");
    scanf("%d",&choice);
    }
    printf("linked list elements:\n");
    printing(head);
}
void insert_begain()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("insert the data for begain \n");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    printf("after adding at begaining\n");
    printing(head);
}
void insert_desired_position()
{
    int position,i=1;
    printf("enter the position you want to insert a node\n ");
    scanf("%d",&position);
    if(position<1)
    {
        printf("invalid position");
    }
    else if(position==1)
    {
        insert_begain();
    }
    else
    {
        struct node *temp;
        temp=head;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data to be inserted\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        while(i<position-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;
        printf("inserting at desired position linked list will be\n");
        printing(head);

    }
}
void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a data for adding node at last\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    printf("after inserting at end elements are:\n");
    printing(head);
}
int main()
{
    create_node();
    insert_begain();
    insert_end();
    insert_desired_position();
}
