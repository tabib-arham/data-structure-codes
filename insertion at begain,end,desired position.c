#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*temp;
//a pointer for head,a pointer for create new node,a point to pass address
void insert_desired_position()
{
    int position,i=1,count;
    temp=head;
    printf("enter the total nodes\n");
    scanf("%d",&count);

    printf("enter the position you want to insert the node\n");
    scanf("%d",&position);
    if(position>count)
    {
        printf("invalid position\n");
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
        print();

    }
}
void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data for last node \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    print();

}
void insert_begain()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data for new node\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    print();
}
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
int count=0;
printf("elements are:\n");
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
        count++;
    }
    printf("total nodes added %d\n",count);

}
int main()
{

    addnode();
    insert_begain();

    insert_end();

    insert_desired_position();


}

