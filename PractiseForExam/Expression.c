#include<stdio.h>
#include<stdbool.h>

#define MAX 10;

struct Stack {
  int top;
  char items[MAX];

};

void initialize(struct stack *s){
  s->top = -1;
}

