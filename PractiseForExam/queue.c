#include<stdio.h>
#include<stdlib.h>

struct Queue{
  int size;
  int rear;
  int front;
  int *arr;
};
void enqueue(struct Queue *q,int value){
  q->rear=q->rear+1;
  q->arr[q->rear]= value;

}
void display(struct Queue *q){
  for(int i=0;i<=q->rear;i++){
    printf("data: %d", q->arr[i]);
  }
}
void dequeue(struct Queue *q){
  q->front++;
}

int main(){
  struct Queue q;
  q.arr=(int*)malloc(q.size*sizeof(int));
  q.rear=q.front=-1;
  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);
  dequeue(&q);
  display(&q);
}
