#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stack_arr[MAX];
int top = -1;
void push(int data)
{
  if(top==MAX-1)
  {
    printf("Stack overflow");
  }
  else {
  top = top + 1;
  stack_arr[top]=data;
  }

}
void pop()
{
  if(top==-1){
    printf("Stack Underflow");
  }
  else {
  printf("\nPopped item:",stack_arr[top]);
  top=top-1;
  }
}
void display()
{
    for(int i=0;i<=top;i++)
    {
      printf("%d\n",stack_arr[i]);
    }
}
int main()
{
  int a,data;
  while(1){
  printf("Enter a choice:\n1. Push\n2. Pop\n3. Display\n4. Exit");
  scanf("\n%d",&a);
  switch (a) {
    case 1:
      printf("Enter a number to be pushed:");
      scanf("%d",&data);
      push(data);
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    default:
      printf("Invalid choice.");
  }
  }
  return 0;
}
