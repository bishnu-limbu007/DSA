#include <stdio.h>

void fibo(int n){
  int a;
  if(n==1)
    return 0;
  if(n==2)
    return 1;
  else
    while(a != n)
    return fibo(a-1)+fibo(a-2);
}
void main(){
  int n;
  scanf("%d",&n);
  fibo(n);
}
