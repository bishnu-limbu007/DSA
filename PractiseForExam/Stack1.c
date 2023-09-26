// #include<stdio.h>

// struct stack{
//   int top;

// };

// int main(){
//   struct stack s;
//   int top = 100;
//   printf("output:", s.top);
//   return 0;
// }
#include <stdio.h>

struct stack {
    int top;
};

int main() {
    struct stack s;
    s.top = 20; // Initialize the 'top' member
    printf("output: %d\n", s.top); // Corrected printf statement
    return 0; // Added return statement to indicate successful execution
}
