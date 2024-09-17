#include <iostream>
#include "Homework1.hpp"

using namespace std;

void Hello(int k) {
	cout << "Hello world\n";
	for (int i = 0; i < k; i++) {
		string name = "";
		cin >> name;
		cout << "Hello, " + name + "\n";
	}
}
