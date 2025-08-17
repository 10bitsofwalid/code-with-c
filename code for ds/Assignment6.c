<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

int precedence(char op) {
    switch(op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
    }
    return 0;
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void reverse(char *exp) {
    int len = strlen(exp);
    for (int i = 0; i < len / 2; ++i) {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }
}

void infixToPrefix(char *infix, char *prefix) {
    char temp[MAX];
    int i, j = 0;

    reverse(infix);

    for (i = 0; infix[i]; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (i = 0; infix[i]; i++) {
        char c = infix[i];

        if (isalnum(c)) {
            temp[j++] = c;
        }
        else if (c == '(') {
            push(c);
        }
        else if (c == ')') {
            while (!isEmpty() && peek() != '(')
                temp[j++] = pop();
            pop(); // remove '('
        }
        else if (isOperator(c)) {
            while (!isEmpty() && precedence(peek()) >= precedence(c))
                temp[j++] = pop();
            push(c);
        }
    }

    while (!isEmpty())
        temp[j++] = pop();

    temp[j] = '\0';
    reverse(temp);
    strcpy(prefix, temp);
}

int main() {
    int maxSize;
    printf("Enter the maximum size of the infix expression: ");
    scanf("%d", &maxSize);

    char infix[maxSize], prefix[maxSize];

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

// Stack implementation
char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int isEmpty() {
    return top == -1;
}

// Function to return precedence of operators
int precedence(char op) {
    switch(op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
    }
    return 0;
}

// Function to check if character is operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to reverse a string
void reverse(char *exp) {
    int len = strlen(exp);
    for (int i = 0; i < len / 2; ++i) {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }
}

// Function to convert infix to prefix
void infixToPrefix(char *infix, char *prefix) {
    char temp[MAX];
    int i, j = 0;

    reverse(infix);

    for (i = 0; infix[i]; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (i = 0; infix[i]; i++) {
        char c = infix[i];

        if (isalnum(c)) {
            temp[j++] = c;
        }
        else if (c == '(') {
            push(c);
        }
        else if (c == ')') {
            while (!isEmpty() && peek() != '(')
                temp[j++] = pop();
            pop(); // remove '('
        }
        else if (isOperator(c)) {
            while (!isEmpty() && precedence(peek()) >= precedence(c))
                temp[j++] = pop();
            push(c);
        }
    }

    while (!isEmpty())
        temp[j++] = pop();

    temp[j] = '\0';
    reverse(temp);
    strcpy(prefix, temp);
}

int main() {
    int maxSize;
    printf("Enter the maximum size of the infix expression: ");
    scanf("%d", &maxSize);

    char infix[maxSize], prefix[maxSize];

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}
>>>>>>> 87d33e437f049844b6e8cb278ca3f80645c6c8f7
