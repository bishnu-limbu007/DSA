#include<stdio.h>
#include<conio.h>
#define MAX 10 
#define TRUE 1
#define FALSE 0 
 struct queue{
  int front;
  int rar; 
  int item [MAX];
}; 
int getNextPosition(int n){
  if (n==MAX-1){
    return 0;
  } else{
    return n++;
  }
}
int isFull(struct queue q){
  if(q.front == getNextPosition(q.rear)){
    return TRUE;
  } else {
    return FALSE;
  }
}
int isEmpty(struct queue q){
  // return q.forn==q.rear;
  if(q.front==q.rear)
    return TRUE;
  else
    return FALSE;
}
void enqueue(struct queue *q, int n){
  q->rear =getNextPosition(q->rear);
  q->item[q->rear]=n;
  printf("Item inserted.");
}
int dequeue (struct queue *q){
  int n;
  n = q->item[q->front];
  q->front=getNextPosition(q->front);
  printf("Item removed");
  return n;
}
void display(struct queue q){
  if(isEmpty(q)){
    printf("Queue underflow.");
  } else{
    do{
      i=getNextPosition(q.front);
      printf("%d\t", queue.item[i]);
    } while(i!=q.rear);
  }
}
int main(){
  struct queue q; 
  q.front=q.rear = MAX -1;
}
