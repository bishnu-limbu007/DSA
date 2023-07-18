#include <stdio.h>
int isPrime(int n,int b){
  // if(n<=1)
  //   return 0;
  // if(b==1)
  //   return 1;
  // if(n%b==0)
  //   return 0;
  // return check(n,b-1);
  if(b>=n)
    return 1;
  else if(n%b==0)
      return 0;
  else
    return isPrime(n,b+1);

}
void checker(int n){
  if(isPrime(n,2) == 1)
    printf("%d is a prime",n);
  else
    printf("%d is a not a prime",n);
  
}
int main(){
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  // if(check(n,n-1))
  //   printf("%d is a prime number.",n);
  // else
  //   printf("not prime");
  checker(n);
  return 0;

}
