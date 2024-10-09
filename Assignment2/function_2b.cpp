/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment_2b */

#include "header_2b.hpp"


int operation_num(char operation, int num1, int num2) { //Function for proccessing operations on numbers
    switch(operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            return 1;
    }
}

void push(int value) { // Function for add value in stack
    stack[++top] = value;
}
int pop() { // Function for extraction value from stack
    return stack[top--];
}
