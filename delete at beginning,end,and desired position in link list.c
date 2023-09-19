#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
void create_node()//creating node so that we can delete
{
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        //taking memory for new node
        printf("enter data for node \n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
            {
            temp->next=newnode;
        temp=newnode;
            }
            printf("do you want continue? 1 to yes 0 to no\n");
            scanf("%d",&choice);
    }

}
void delete_begin()
{
    if(head==0)
    {
        printf("no nodes available for delete\n");
    }
    else
    {
        temp=head;
        head=head->next;
        printf("%d is deleted from list\n",temp->data);
        free(temp);
    }
    print(head);
}
void delete_end()
{
    struct node *prev;
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=NULL;
    }
    else{
        prev->next=NULL;
    }
    printf("%d is deleted from list end\n",temp->data);
    free(temp);
    print();

}
void delete_desire_position()
{
    struct node *nextnode;
    int position,i=1;
    temp=head;
    printf("from whisch position you want to delete\n");
    scanf("%d",&position);
    while(i<position-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp=nextnode->next;
    free(nextnode);
    print();
}
void print(struct node *p)
{p=head;
int count=0;
printf("elements are:\n");
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
        count++;
    }

}
int main()
{
    create_node();
    delete_end();
}
