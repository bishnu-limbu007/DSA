#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void traverse(struct Node *ptr){
  while(ptr!=0){
    printf("elements:" ptr->data);
    ptr=ptr->next;
  }
}
int main(){
  struct Node * head;
  head=(struct Node*)malloc(sizeof(struct Node));
  struct Node * second;
  second=(struct Node*)malloc(sizeof(struct Node));
  struct Node * third;
  third=(struct Node*)malloc(sizeof(struct Node));
  head->data= 200;
  head->next= second;
  second->data= 201;
  second->next= third;
  third->data = 202;
  third->next =NULL;
  traverse(head);
  return 0;
}
