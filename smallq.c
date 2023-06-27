#include<stdio.h>
#define MAX 10
struct priorityQ
{
    int rear;
    int items[MAX];
  };
int getSmallPosition(priorityQ *q)
{
  int pos=0,i;
  for (i=1;i<=q->rear;i++)
    {
      if(q->items[i]<q->items[pos])
        pos=i;
    }
  return pos;
}
int dequeue(priorityQ *q)
{
  int n,p,i;
  p=[getSmallPosition(q)]; 
  n=q->items[p];//is the item this is removed.
  for (i=p+1;i<=q->rear;i++)
    q->items[i-1]=q->items[i];
  q->rear--;
    return n;
}
void display()
{

}

