#include<stdio.h>

struct stack{
  int top;

};

int main(){
  struct stack s;
   s.top = 100;
  printf("output:", s.top);
  return 0;
}
