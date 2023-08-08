
#include <stdio.h>
#include <stdbool.h>

#define MAX 10

typedef struct stack {
    int data[MAX];
    int top;
} stack;

void initialize(stack *s) {
    s->top = -1;
}

bool isFull(stack *s) {
    return s->top == MAX - 1;
}

bool isEmpty(stack *s) {
    return s->top == -1;
}

void push(stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push.\n");
        return;
    }
    s->data[++s->top] = value;
}

int pop(stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    return s->data[s->top--];
}

int main() {
    stack s;
    initialize(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Popped: %d\n", pop(&s));
    printf("Popped: %d\n", pop(&s));

    push(&s, 40);

    printf("Top element after pops and push: %d\n", s.data[s.top]);

    return 0;
}
