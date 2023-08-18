#include<stdio.h>

void main(){
  int a=0;
  int b=1;
  int c=5;
  int d;
    printf("%d\n",a);
    printf("%d\n",b);

  while(c != 0){
    d=a+b;
    printf("%d\n",d);
    a=b;
    b=d;
    c=c-1;

  }
}



// 0 1 1 2 3 5 8 13
