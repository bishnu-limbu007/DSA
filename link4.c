#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node*next;
  struct node*prev;
};
struct node*header= NULL;
sturct node*getnode(int n)
{
  struct node*ptrnew=(struct node*)malloc(sizeof(struct node));
  if(ptrnew==NULL)
  {
    printf("\nMemory allocation failed");
    getch();
    exit(0);
  }
  ptrnew->info=n;
  ptrenew->next=ptrnew->prev=NULL;
  return ptrnew;
}
void main()
{
  char ch;
  do{
    system("clear");
    pringf("Enter you choice:\n1. Insert at front\n2.Insert at end\n3.Insert after\n4.Insert before\n5. Remove from front\6. Remove from last\7. Remove any\n8. Display forward\n9. Display backword\nX. Exit");
    switch ch
  {
    case '1': break;
    case '2': break;
    case '3': break;
    case '4': break;
    case '5': break;
    case '6': break;
    case '7': break;
    case '8': break;
    case '9': break;
    case 'X': break;
    }
  }
}
