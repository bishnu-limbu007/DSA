#include <stdio.h>
#include <stdbool.h>
#define MAX 10

typedef struct stack{
  int data[MAX];
  int tos;
}stack;

void initialize(stack *s){
  s->tos=-1;
}

bool isFull(stack *s){
  return s->tos == MAX - 1;
}
bool isEmpty(stack *s){
  return s->tos == -1;
}
void push(stack *s, int value){
  if(isFull(s)){
    printf("Stack overflow.");
    return;
  }
   s->data[++s->tos] = value;
}
void pop(stack *s){
  if(isEmpty(s))
}




int main(){
  stack s;

}
