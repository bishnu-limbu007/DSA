
#include <stdio.h>
#include <stdbool.h>

#define MAX 100

struct Stack {
    int top;
    char items[MAX];
};

void initialize(struct Stack *s) {
    s->top = -1;
}

bool isEmpty(struct Stack *s) {
    return (s->top == -1);
}

bool isFull(struct Stack *s) {
    return (s->top == MAX - 1);
}

void push(struct Stack *s, char item) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
    } else {
        s->items[++s->top] = item;
    }
}

char pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return '\0';
    } else {
        return s->items[s->top--];
    }
}

bool isBalanced(char *exp) {
    struct Stack s;
    initialize(&s);

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
            push(&s, exp[i]);
        } else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (isEmpty(&s)) {
                return false;
            } else {
                char popped = pop(&s);
                if ((exp[i] == ')' && popped != '(') ||
                    (exp[i] == ']' && popped != '[') ||
                    (exp[i] == '}' && popped != '{')) {
                    return false;
                }
            }
        }
    }

    return isEmpty(&s);
}

int main() {
    char expression[MAX];
    printf("Enter a string of parentheses: ");
    scanf("%s", expression);

    if (isBalanced(expression)) {
        printf("The parentheses are balanced.\n");
    } else {
        printf("The parentheses are not balanced.\n");
    }

    return 0;
}
