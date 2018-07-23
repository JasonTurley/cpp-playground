#include <iostream>

using std::string;

std::string() {
    std::cout << "Initializing";
}

std::~string() {
    std::cout << "Clean up\n";
}

int main()
{
    std::cout << "Hello, world!\n";
}
