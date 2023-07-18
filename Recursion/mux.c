#include <stdio.h>
int sum(int a, int b){
  if(b>=1)
      return a+sum(a,b-1); 
  else{ 
    return 0;    
  }
}
int main(){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  printf("%d*%dis%d", a,b,sum(a,b));
}
