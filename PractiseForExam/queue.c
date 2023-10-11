#include<stdio.h>
#include<stdlib.h>

struct queue{
  int size;
  int rear;
  int front;
  int *arr;
};
void enqueue(struct queue *q,int value){
  q->rear=q->rear+1;
  q->arr[q->rear]= value;

}
void display(struct queue *q){
  for(int i=0;i<=q->rear;i++){
    printf("data: %d", q->arr[i]);
  }
}
void dequeue(struct queue *q) {
  if (q->front == -1) {
    printf("Queue is empty\n");
  } else {
    q->front++;
  }
}
int main(){
  struct queue q;
  q.size=3;
  q.arr=(int*)malloc(q.size*sizeof(int));
  q.rear=q.front=-1;
  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);
  dequeue(&q);
  display(&q);
}
