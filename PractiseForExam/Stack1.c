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
void display(stack *s){
  for(int i=0;i<=s->top;i++){
    printf("%d", s->data[i]);
  }
}

int main(){
  stack s;
  push(&s, 100);
  display(&s);
  return 0;
}

