/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment_2b */

#include "header_2b.hpp"

int main() {
    
    std::string input_string; // String on input
    std::getline(std::cin, input_string);

    capacity = input_string.length();
    stack = new int[capacity]; // Create array for stack

    for (int i = 0; i < input_string.length(); i++) { // lopp for string
        char ch = input_string[i];

        if (ch == ' ') { // if ch = space, we skip it
            continue;
        }
        if (isdigit(ch)) {
            int number = 0;
            while (i < input_string.length() && isdigit(input_string[i])) { // Loop for represent a string on input as a number
                number = number * 10 + (input_string[i] - '0');
                i++;
            }
            i--;
            push(number);
        }

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') { // if you encounter an operation, cal operation_num
            int num2 = pop();
            int num1 = pop();
            int result = operation_num(ch, num1, num2);
            push(result);
        }

    }
    std::cout << pop() << std::endl; // Answer output

    delete[] stack; // Delete stack
    return 0;
}

