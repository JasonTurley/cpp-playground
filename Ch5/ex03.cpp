#include <iostream>

using std::cout;

// Typedef declarations
typedef unsigned char uChar;
typedef const unsigned char cuChar;
typedef int* pInt;
typedef char** ppChar;              // pointer to pointer to char
typedef char (*char_pa5)[];         // pointer to an array of char
typedef int* a7pInt[7];             // array of 7 pointers to int
typedef int* (*pa7pInt)[7];         // pointer to an array of 7 pointers to int
typedef int* a8a7pInt[7][8];

int main() {
    int *array[7];
}
