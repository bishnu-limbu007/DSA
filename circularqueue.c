#include<stdio.h>
#include<conio.h>
#define MAX 10 
#define TRUE 1
#define FALSE 0 
 struct queue{
  int front;
  int rear; 
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
  int i;
  if(isEmpty(q))
    printf("Queue underflow.");
   else
    do{
      i=getNextPosition(q.front);
      printf("%d\t", queue.item[i]);
    } while(i!=q.rear);
  
}
int main(){
  struct queue q; 
  char choice;
  int n;

  q.front=q.rear = MAX -1;
  while (TRUE)
    {
      system("clr")
    
    printf("Select you choices:\n1. Enqueue\n2. Dequeue\3. Display\n4. Exit")
        gets(choice);
        switch(choice)
        {
      case 1: 
        if(isFull())
        printf("You can't add any items.");
      else{
      printf("Enter a number");
        scanf("\n%d",&n);

      enqueue(&q,n);
        break;
          }   
      case 2:
      if (isFull())
                printf("\nQueue is full");
              else{
  printf("\n%d has been removed form the queue",dequeue(&q));
      break;
          }
  case 3:
    display(q);
    break;
  case 4:
        return 0;
    default:
        printf("choice is invalid");
        }
}

}
