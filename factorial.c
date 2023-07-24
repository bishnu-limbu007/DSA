#include <stdio.h>
int fact(int a){
  if(a==0)
  {
    return 1;
  }
  else
  {
    return a*fact(a-1);
  }
}
int main()
{
  int a;
  printf("Enter a number");
  scanf_s("%d",&a);
  printf("%d is the factorial of %d",a,fact(a));
}
