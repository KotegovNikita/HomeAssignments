#include <iostream>
#include "Header.hpp"


void Hello(int k) {
	std::cout << "Hello world\n";
	for (int i = 0; i < k; i++) {
		std::string name = "";
		std::cin >> name;
		std::cout << "Hello, " + name + "\n";
	}
}
