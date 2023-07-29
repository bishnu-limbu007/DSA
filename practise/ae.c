#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 10
typedef struct{
  int data[MAX];
  int top;

}stack; 

void init(stack *s){
  s->top=-1;
}

bool isFull(stack * s){
  return s->top==MAX-1;

}
bool isEmpty( stack * s){
  return s->top==-1;

}
void push(stack* s){
  int y;
  if(isFull(s)){
    exit(EXIT_FAILURE);
  }
  else {
        printf("Enter a data to be inserted:");
        scanf("%d\n",&y);
    s->top++;
    s->data[s->top]=y;
    printf("\n%d was inserted\n",y);

  }
}
void pop(stack *s){
  int a;
  if(isEmpty(s)){
    return;
  }
  else {
    a=s->data[s->top];
    s->top--;
    printf("Popped item:%d\n",a);

  }

}
void display(stack* s){
  if(isEmpty(s)){
    return;
  }else {
    for(int i=0;i<=s->top;i++){
      printf("%d\n",s->data[i]);
    }

  }
}

int main(){
  int x,y;
  stack s;
  init(&s);
  while(1){
    printf("Enter a choice:\n1. push\n2. pop\n3. display \n4. exit");
    scanf("%d\n",&x);
    switch (x) {
      case 1:
        push(&s);
        break;
      case 2:
        pop(&s);
        break;
      case 3:
        display(&s);
        break;
      case 4:
        return 0;
        break;
    }

  }
  return 0;

}
