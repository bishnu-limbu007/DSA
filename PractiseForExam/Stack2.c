#include<stdio.h>
#define MAX 10

typedef struct{
  int top;
  int data[MAX];
}stack;

void push(stack *s,int value){
  if(s->top==MAX-1){
    printf("stack overflow");
  }
  else{
    s->data[++s->top]= value;
  }
}
void pop(stack *s){
  if(s->top==-1){
    printf("stack underflow");
  }
  else{
    s->data[s->top--];
  }
}
void display(stack *s){
  for(int i =0;i<s->top;i++){
    printf("data: %d", s->data[i]);
  }
}
int main(){
  stack s;
  s->top=-1;
  init(&s);
  push(&s, 1);
  push(&s, 2);
  push(&s, 3);
  pop(&s);
  display(&s);
  return 0;
}
