#include <iostream>
#include "Header.hpp"


void Hello() {
	std::cout << "Hello world\n";
	while (true) {
		std::string name = "";
		std::cin >> name;
		if (name == "break") {
			break;
		}
		else {
			std::cout << "Hello, " + name + "!" << std::endl;
		}
	}
}
