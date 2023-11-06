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
    printf("%d \n",ptr->data);
    ptr=ptr->link;
}
}
struct node *deleteatfirst(struct node *head)
{
    struct node *ptr=head;
    head=head->link;
    free(ptr);
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head=(struct node *)malloc(sizeof(struct node ));
    second=(struct node *)malloc(sizeof(struct node ));
    third=(struct node *)malloc(sizeof(struct node ));
    fourth=(struct node *)malloc(sizeof(struct node ));
    fifth=(struct node *)malloc(sizeof(struct node ));
    head->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    fifth->data=50;
    head->link=second;
    second->link=third;
    third->link=fourth;
    fourth->link=fifth;
    fifth->link=NULL;
    printf("Linked list \n");
    print(head);
    head=deleteatfirst(head);
    printf("Linked list after deletion \n");
    print(head);
    return 0;
}