#include <iostream>
#include <fstream>


int main() {
    std::fstream file = fopen("bin_file.txt", std::ios::binary);
    
    file.seekg(0, std::ios::end);
    std::streamsize size_file = file.tellg();
    file.seekg(0, std::ios::beg);
