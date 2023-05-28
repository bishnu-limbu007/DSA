#include<stdio.h>
#include<conio.h>
#include<process.h>
#define TRUE 1
#define FALSE 0
#define UP 72 
#define DOWN 80 
#define ENTER 15
void gotoxy(int x, int y)
{
  printf("%c[%d;%df",0x1B,y,x);
}
void main()
{
    char choice;
  int selected=1; //for k enter hanchan bhanera
  while ("TRUE")
    {
    gotoxy(10,12);
    printf("Select your choice");
    gotoxy(10,13);
    if(selected==1)
    printf("[X] Register");
    else
      printf("[ ] Register");
    gotoxy(10,14);
    if(selected==2)
    printf("[X] Remove");
    else
      printf("[ ] Remove");
    gotoxy(10,15);
    if(selected==3)
    printf("[X] List");
    else
      print([ ] List);
    gotoxy(10,16);
    if(selected==4)
      printf("[X] Exit");
      else
      printf("[] Exit");
    fflush(stdin);
    choice=getche();
    switch (choice){
      case UP:
      if(choice>1)
        choice--;
      break;
      case DOWN:
      if(choice>4)
        choice++;
      break:
        }
  }
