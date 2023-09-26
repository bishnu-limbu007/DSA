#include<stdio.h>
#include<stdbool.h>
#define MAX 10

typedef struct {
  int top;
  int data[MAX];

}stack;

int main(){
  stack s;
   s.top = 100;
  printf("output:%d", s.top);
  return 0;
}

