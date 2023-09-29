#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;
void search(struct node *p)
{
    int count=1,data;
    printf("enter the data you want to search\n");
    scanf("%d",&data);
    while(p!=NULL)
    {
        if(p->data==data)
        {
            printf("%d is found in %d th linked list \n",p->data,count);
            break;
        }
        else
        {
            p=p->next;
            count++;
        }
    }
}
void insert_after()
{
    int position,total_nodes,i=1;
    printf("enter the desired position you want to insert\n");
    scanf("%d",&position);
    printf("enter the total nodes in the list\n");
    scanf("%d",&total_nodes);
    if(position>total_nodes)
    {
        printf("invalid position to insert\n");
    }
    else
    {
        temp=head;
        while(i<position)
        {
            temp=temp->next;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void addnode()
{
    int choice=1;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        //taking memory for new node
        printf("enter data for node \n");
        scanf("%d ",&newnode->data);
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
            printf("do you want continue? \n 1 to yes\n 0 to no\n");
            scanf("%d",&choice);
    }
print(head);
}
void print(struct node *p)
{p=head;
printf("elements are:\n");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    addnode();
    search(head);

    insert_after();
    printf("after inserting after the node : \n");
    print(head);
}
