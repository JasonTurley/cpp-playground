// Open a file for reading and writing
#include <iostream>
#include <fstream>
#include <istream>

using std::ofstream;
using std::ifstream;

void write_to_file(const char* filename) {
    ofstream ofs;
    ofs.open (filename, ofstream::out | ofstream::trunc);

    for (int i = 1; i <= 100; i++) {
        ofs << i << " ";
    }

    ofs.close();
}

void read_from_file(const char* filename) {
    ifstream ifs;
    ifs.open (filename, std::ifstream::in);

    char c = ifs.get();

    while (ifs.good()) {
        std::cout << c;
        c = ifs.get();
    }

    ifs.close();
}

int main() {
    write_to_file("test.txt");
    read_from_file("test.txt");

    return 0;
}
