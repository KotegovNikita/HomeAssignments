#include <iostream>
#include <string>

class Stack {
    Stack(int size) {
        stack = new Number*[size]; // Creat stack as array
        size = input_string.lenght();
    }

    Stack() {
        delete[] stack;
    }
}



int main() {
    std::string input_string = "3 4 + 2 * 7 /"; // String on input



    for (int i = 0; i < input_string.length(); i++) { // lopp for string
        char ch = input_string[i];

        if (ch == " ") {
            continue;
        }

        if (isdigit(ch)) {
            stack.push(ch - '0');
        }

        else if (ch == "+" or ch == "-" or ch == "*" or ch == "/") {
            int num1 = stack.pop();
            int num2 = stack.pop();
            int result = operation_num(ch, num1, num2);
            stack.push(result);
        }

    }
}


int operation_num(char operation, int num1, int num2) {
    switch(operation) {
        case "+":
            return num1 + num2;
        case "-":
            return num1 - num2;
        case "*":
            return num1 * num2;
        case "/":
            return num1 / num2;
        }
}
