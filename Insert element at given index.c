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
struct node * insertAtindex(struct node *head,int data,int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
   struct node *temp=head;
   int i=0;
   while(i!=index-1)
   {
    temp=temp->link;
    i++;
   }
   ptr->data=data;
   ptr->link=temp->link;
   temp->link=ptr;
    
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
    head = insertAtindex(head,90,1);
    printf("linked list after \n");
    print(head);

}
