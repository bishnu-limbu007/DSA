#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define MAX 100 
typedef struct  {
  int top;
  int size;
  int * arr;
}stac;
bool isEmpty( stack *s){
  return (ptr->top=-1)
}
bool isFull(stack *s){
  return s->stack[top]==MAX-1;
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

