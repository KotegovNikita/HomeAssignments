/* Nikita Kotegov st128906@student.spbu.ru Homework1 */
// Этот файл должен называться main.cpp

#include <iostream>
#include "Homework1.hpp"

 /* На самом деле так делать нехорошо, потому что это загрязняет
 * пространство имен и иногда провоцирует конфликты имет, поэтому 
 * привыкай просто везде писать std:: */
using namespace std;

int main(int argc, char *argv[]) {
	Hello(5);
	return 0;
}
