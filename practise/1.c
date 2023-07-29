#include <stdio.h>
#include <stdlib.h>
#define MAX 100 
struct stack {
  int top;
  int size;
  int * arr;
};
int isEmpty(struct stack *ptr){
  if(ptr->top=-1){
    return 1;
  }
  else
    return 0;
}int isFull(struct stack *ptr){
  if(ptr->top==ptr->size-1){
    return 1;
  }
  else
    return 0;
} 
int main(){
  struct stack *s;
  s->top=-1;
  s->size=MAX;
  s->arr=(int *)malloc(s->size*sizeof(int));
  if(isEmpty){
    printf("Stack is empty");
  }
  else
    printf("Stack is not empty");


  if(isFull){
    printf("Stack is full");

  }
  else
    printf("Stack is not full");
}

