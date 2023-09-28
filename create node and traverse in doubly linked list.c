#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*newnode,*temp;
void printing(struct node *p)
{
    printf("item in linked list \n");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void create_node()
{int choice =1;
while(choice)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data :\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("insert a another node\n 1 for yes\n 0 for no\n");
    scanf("%d",&choice);
}
    printing(head);
}
int main()
{
    create_node();
}
