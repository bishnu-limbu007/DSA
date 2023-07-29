#include<stdio.h>
#define MAX 5

int stack_arr[MAX];
int top=-1;

int isFull(){
  if(top=MAX-1)
    return 1;
  else
    return 0;

}
int isEmpty(){
  if(top=-1)
    return 1;
  else
    return 0;

}

int push(int data){
  if(isFull){
    return;
  }
  else {
    top = top + 1;
    stack_arr[top] = data;
  }

}
void pop(){
  int b;
  if(isEmpty){
    return;
  }
  b=stack_arr[top];
  top=top-1;
  return b;
}
void dispay(){

}

int main(){
  int data,a;
  while (1)
  {
    printf("Enter a choice:\n1.Push\n2. Pop\n3. Display\n4. Exit");
    scanf("\n%d", &a);
    switch (a) {
      case 1:
        printf("Enter a number to be pushed.")
          scanf("%d",&data);
        push();
        break;
      case 2:
        Printf("Popped element:", pop());
        break;
      case 3:
        display();
        break;
        case 4:
        return 0;
        default:
        printf("Enter a valid choice. ")
    }
  }
  return 0;





}
