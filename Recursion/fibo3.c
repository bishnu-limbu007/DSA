#include<stdio.h>

void fibo(int n){
    do{
    printf("%d",fibo(n-1)+fibo(n-2));
    }while(n>1);
    printf("0\n");
    printf("1\n");
}

int main(){
  fibo(5);
  return 0;
}
