
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 10

typedef struct {
  int data[MAX];
  int top;
} stack; 

void init(stack *s) {
  s->top = -1;
}

bool isFull(stack *s) {
  return s->top == MAX - 1;
}

bool isEmpty(stack *s) {
  return s->top == -1;
}

void push(stack *s, int data) {
  if (isFull(s)) {
    printf("Stack is full. Cannot push %d\n", data);
  } else {
    s->top++;
    s->data[s->top] = data;
  }
}

void display(stack *s) {
  if (isEmpty(s)) {
    printf("Stack is empty.\n");
  } else {
    printf("Stack elements:\n");
    for (int i = 0; i <= s->top; i++) {
      printf("%d\n", s->data[i]);
    }
  }
}

int main() {
  int x, y;
  stack s;
  init(&s);

  while (1) {
    printf("Enter a choice:\n1. push\n2. pop\n3. display\n4. exit\n");
    scanf("%d", &x);

    switch (x) {
      case 1:
        printf("Enter data to be inserted: ");
        scanf("%d", &y);
        push(&s, y);
        break;
      case 2:
        pop(&s);
        break;
      case 3:
        display(&s);
        break;
      case 4:
        return 0;
      default:
        printf("Invalid choice. Please try again.\n");
        break;
    }
  }

  return 0;
}
