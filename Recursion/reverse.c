#include <stdio.h>
#include <math.h>
int countNum(int n){
  int count=0;
    while(n>0){
     n= n/10;
      count++;
    }
  return count;
}
int rev(int n){
  if(n<10)
    return n;
  else
    return (n%10)*pow(10,countNum(n/10))+rev(n/10);

}
int main(){
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
printf("%d",rev(n));
  
}
