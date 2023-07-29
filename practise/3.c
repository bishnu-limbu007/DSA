#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

int push(int data)   //push operation  
{
  if(top == MAX - 1)
  {
    printf("Stack Overflow");
    return 0;
  }else {
     top = top + 1;
    stack_arr[top]=data;
  }
 }
int pop(int data) //pop operation
{
  int a;
  if(top==-1)
  {
    printf("Stack underflow");
    return 0;
  }else {
    a=top;
  top=top-1;
  printf("\npopped:%d",a);
  }
  
}

int main()
{
  push(1);
  push(2);
  push(3);
  push(4);
  pop(4);
  for(int i=0;i<=top;i++)
  {
    printf("\n%d",stack_arr[i]);
  }
  return 0;


  }
