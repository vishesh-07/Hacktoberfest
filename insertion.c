#include<stdio.h>
#include<stdlib.h>
struct node{
int a;
struct node* next;
};
struct node* insertfirst(struct node*head,int data)
{ struct node*ptr=(struct node*)malloc(sizeof(struct node));
 ptr->next=head;
 ptr->data=data;
 return head;
}
int main()
{
  struct node*head;
  struct node*second;
  struct node*third;
  
  head=(struct node*)malloc(sizeof(struct node*));
  second=(struct node*)malloc(sizeof(struct node*));
  third=(struct node*)malloc(sizeof(struct node*));
  
  head->data=35;
  head->next=second;
  
  second->data=55;
  second->next=third;
  
  third->data=75;
  third->next=NULL;
  
  head=insertfirst(head,32);
  return 0;
}
