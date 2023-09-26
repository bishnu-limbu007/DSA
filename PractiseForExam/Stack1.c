#include<stdio.h>
#include<stdbool.h>
#define MAX 10

typedef struct {
  int top;
  int data[MAX];

}stack;

void init(stack *s){
  s->top=-1;
}
void push(stack *s, int value){
  if(s->top==MAX-1){
    printf("stack is full");
  }else{
    s->data[++s->top]= value;
  }
}
void pop(stack *s){
  if(s->top==-1){
    printf("stack underflow");
  }else{
    s->data[s->top--];
  }
}
void display(stack *s){
  for(int i=0;i<=s->top;i++){
    printf("%d\n", s->data[i]);
  }
}

int main(){
  stack s;
  push(&s, 100);
  push(&s, 101);
  push(&s, 102);
  pop(&s);
  display(&s);
  return 0;
}

