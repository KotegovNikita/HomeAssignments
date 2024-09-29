/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment1 */


#include "header.hpp"


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
