#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*temp;
//a pointer for head,a pointer for create new node,a point to pass address
void addnode()
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
print(head);
}
void print(struct node *p)
{p=head;
printf("elements are:\n");
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
int main()
{
    addnode();


}
