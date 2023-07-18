#include <stdio.h>
int sumDigit(int n){
  if(n<10)
    return 0;
  else
   return n%10+sumDigit(n/10);
}
int main(){
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
printf("%d is our sum",sumDigit(n));
  
}
