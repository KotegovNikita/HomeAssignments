/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment_2b */

#ifndef HEADER_2B_HPP
#define HEADER_2B_HPP

#include <iostream>
#include <string>

extern int top;
extern int* stack;
extern int capacity;

int operation_num(char operation, int num1, int num2);
void push(int value);
int pop();

#endif
