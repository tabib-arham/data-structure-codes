#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*temp,*newnode;
void check_node_number()
{
    int count=0;
    struct node*p;
    p=head;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    printf("total node number is %d\n",count);
}
void addnode()
{int choice=1;
while(choice)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data of node\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
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
int main()
{
    addnode();
    check_node_number();
}
