#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    std::ifstream infile;
    infile.open("file.jpg", std::ios::binary);

    int fileSize = std::filesystem::file_size("file.jpg");

    char* buffer = new char[fileSize];

    infile.read(buffer, fileSize);

    for(std::int i = 0; i < fileSize / 2; i++) {
        char t = buffer[i];
        buffer[i] = buffer[fileSize - i - 1];
        buffer[fileSize - i - 1] = t;
    }

    infile.close();

    return 0;
}
