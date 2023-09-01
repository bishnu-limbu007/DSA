#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define MAX 100

typedef struct stack {
  int data[MAX];
  int top;
} stack;

void initialize(stack *s) {
  s->top = -1;
}

bool isFull(stack *s) {
  return s->top == MAX - 1;
}

bool isEmpty(stack *s) {
  return s->top == -1;
}

// int top;
// int arr[MAX];

// bool isFull(){
//   return top = MAX-1;
// }
// bool isEmpty(){
//   return top = -1;
// }

void push(stack *s, int n){
  if(isFull(s)){
    printf("StackOverflow");
    return;
  }
  else{
    printf("enter a number to be inserted.\n");
    s->data[++s->top] = n;
  }
}
int pop(stack *s){
  if(isEmpty(s)){
    printf("Stack underflow.");
    return 1;
  }else{
    return s->data[s->top--];
  }

}
void display(stack *s){
  if(isEmpty(s)){
    printf("stack underflow:");
  }else{
    for (int i=0; i<=s->top; i--){
      printf("%d ", s->data[i]);
    }
  }
}

int main(){
  stack s;
  int n;
  initialize(&s); //address sent??
  char ch;
  scanf("%c", &ch);
  while(1){
    printf("Enter a choice:");
    switch(ch){
      case 1:
        printf("enter a number to be pushed:");
        scanf("%d", &n);
        push(&s, n);
        break;
      case 2:
        printf("enter a number to be popped:");
        pop(&s);
        break;
      case 3:
        display(&s);
        break;
      case 4:
        exit(0);
      default:
        printf("enter a valid choice");
    }
  }

}

