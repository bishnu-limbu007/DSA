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
    printf("\nEnter a number to be pushed.");
    scanf("%d", &value);
    s->data[++s->top]= value;
  }
}

int main(){
  stack s;
  push(&s, 100);
  printf("output:%d", s.top);
  return 0;
}

