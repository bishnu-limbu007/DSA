#include <stdio.h>

int fact(int a)
{
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
  printf("%d is the factorial of 5",fact(5));
  return 0;
}
