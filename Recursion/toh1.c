#include <stdio.h>
#include <conio.h>
void toh(int n,char s,char i,char d)
{
  if(n>0)
  {
    toh(n-1,s,d,i);
    printf("\nmoved: %dth disk form %c to %c",n,s,d);
toh(n-1,i,s,d);
  }
}
void main()
{
  int n;
  printf("how many disk");
  printf("how many disk");
  scanf_s("%d",&n);
  toh(n,'S','I','D');
  _getch();
}
