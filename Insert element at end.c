#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
    
};
void print(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
struct node * insertAtend(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;

    struct node *temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;

    }
    temp->link=ptr;
    ptr->link=NULL;
    
    return head;

}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->data=10;
    head->link=second;
    second->data=20;
    second->link=third;
    third->data=40;
    third->link=fourth;
    fourth->data=50;
    fourth->link=NULL;

    printf("linked list Before \n");
    print(head);
    head = insertAtend(head,90);
    printf("linked list after \n");
    print(head);

}
