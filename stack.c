#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<stdbool.h>
#define MAX 100

int top;
int arr[MAX];

int main(){
  int n;
  char ch;
  scanf("%c", &ch);
  while(1){
    switch(ch){
      case 1:
      push();
      break;
      case 2:
      pop();
      break;
      case 3:
      display();
    }
  }
}

