#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    std::ifstream infile;
    infile.open("file.jpg", std::ios::binary);

    int fileSize = std::filesystem::file_size("file.jpg");

    char* buffer = new char[fileSize];

    infile.read(buffer, fileSize);

    infile.close();

    return 0;
}
