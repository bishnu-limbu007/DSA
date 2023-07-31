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


