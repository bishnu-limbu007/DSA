#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

struct Node*insertAtFirst(struct Node *head, int data){
  struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));
  ptr->next = head;
  ptr->data = data;
  return ptr;
}
struct Node * insertAtBewteen(struct Node*ptr, int data){

}

void traverse(struct Node *ptr){
  while(ptr!=0){
    printf("elements: %d\n", ptr->data);
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
  head= insertAtFirst(head,199);
  traverse(head);
  return 0;
}
