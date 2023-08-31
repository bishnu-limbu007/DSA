#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct stack {
    char item[MAX];
    int tos;
};

void push(struct stack *s, char c) {
    if (s->tos == MAX - 1) {
        printf("Stack overflow");
        exit(1);
    }
    s->tos++;
    s->item[s->tos] = c;
}

char pop(struct stack *s) {
    char val;
    if (s->tos == -1) {
        printf("Stack underflow.");
        exit(1);
    }
    val = s->item[s->tos];
    s->tos--;
    return val;
}

int isEmpty(struct stack s) {
    return (s.tos == -1);
}

int main() {
    char exp[MAX], symb, j;
    struct stack s;
    int i, valid = 1;
    s.tos = -1;

    printf("Enter your expression:");
    fgets(exp, sizeof(exp), stdin);
    
    for (i = 0; i < strlen(exp); i++) {
        symb = exp[i];
        if (symb == '(' || symb == '{' || symb == '[')
            push(&s, symb);
        if (symb == ')' || symb == '}' || symb == ']') {
            if (isEmpty(s))
                valid = 0;
            else {
                j = pop(&s);
                if ((symb == ')' && j != '(') || (symb == ']' && j != '[') || (symb == '}' && j != '{'))
                    valid = 0;
            }
        }
    }
    
    if (!isEmpty(s))
        valid = 0;

    if (valid)
        printf("Expression is valid.\n");
    else
        printf("Expression is not valid.\n");

    return 0;
}

