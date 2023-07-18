#include <stdio.h>
int hcf(int a,int b){
  if(a%b==0)
    return b;
  else
    return hcf(b,a%b);
}
int main(){
  int a,b;
  scanf_s("%d",&a);
  scanf_s("%d",&b);
  printf("%d",hcf(a,b));
}
