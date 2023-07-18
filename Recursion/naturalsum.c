//sum of first n natural number using recurstion.
#include <stdio.h>
#include <conio.h>
int sum(int n){
  if(n==0)
    return 0;
  else
    return n+sum(n-1);
}
int main(){
  int n;
  printf("Enter the number.");
  scanf_s("%d",&n);
  int a=sum(n);
  printf("Sum is %d",a);
}
