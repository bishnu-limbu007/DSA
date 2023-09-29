#include <stdio.h>
#include <stdlib.h>


struct Node{
  int data;
  struct Node *next;
};

void display(struct Node*ptr){
  while(ptr!=NULL){
    printf("elements: %d\n", ptr->data);
    ptr=ptr->next;
  }

}
int main(){
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;
  head = (struct Node*) malloc (sizeof(struct Node));
  second = (struct Node*) malloc (sizeof(struct Node));
  third = (struct Node*) malloc (sizeof(struct Node));
  fourth = (struct Node*) malloc (sizeof(struct Node));
  head->data = 100;
  head->next = second;
  second->data = 101;
  second->next = third;
  third->data = 103;
  third->next = fourth;
  fourth->data = 104;
  fourth->next = NULL;
  display(head);
  return 0;
}
