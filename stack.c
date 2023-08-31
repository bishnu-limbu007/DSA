#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#define MAX 100

int top;
int arr[MAX];

bool isFull(){
  return top = MAX-1;
}
bool isEmpty(){
  return top = -1;
}

int push(int n){
  if(isFull()){
    printf("StackOverflow");
  }
  else{
    printf("enter a number to be inserted.\n");
    scanf("d", &n);

  }

  return 0;
}
void pop(){

}
void display(){

}

int main(){
  int n;
  char ch;
  scanf("%c", &ch);
  while(1){
    switch(ch){
      case 1:
      push(n);
      break;
      case 2:
      pop();
      break;
      case 3:
      display();
      break;
      case 4:
    }
  }
}

