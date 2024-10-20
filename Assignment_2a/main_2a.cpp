/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment_2a */

#include "header_2a.hpp"

int main() {
    std::ifstream infile;
    infile.open("file.pdf", std::ios::binary);

    int fileSize = std::filesystem::file_size("file.pdf");

    char* buffer = new char[fileSize];

    infile.read(buffer, fileSize);

    infile.close();

    for(int i = 0; i < fileSize / 2; i++) {
        char t = buffer[i];
        buffer[i] = buffer[fileSize - i - 1];
        buffer[fileSize - i - 1] = t;
    }

    std::ofstream outfile;
    outfile.open("file_result.pdf",std::ios::binary);
    outfile.write(buffer, fileSize);


    outfile.close();

    delete[] buffer;

    return 0;
}
