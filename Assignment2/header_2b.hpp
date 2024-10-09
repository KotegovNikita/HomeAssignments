/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment_2b */

#ifndef HEADER_FILE
#define HEADER_FILE
#include <iostream>
#include <string>

int top = -1;
int* stack;
int capacity;

int operation_num(char operation, int num1, int num2);
void push(int value);
int pop();

#endif
