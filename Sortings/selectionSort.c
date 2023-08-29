#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int arr[];
  for (int i = 0 ; i < 10 ; i++){
    int arr[i] = rand() % 10;
    printf("%d",arr[i]);
  }
  for (int i = 0 ; i < 10 ; i++){
    printf("%d",arr[i]);
  }
}
