

int main() {
    char *c = "c";

    int a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 10};                  
    int (&r1)[10] = a1;      

    char *(*sp)[10];            // pointer to array of char pointers
    char **cptr;                // pointer to a pointer to a char

    const int ci = 1;           // constant integer
    const int* pci = &ci;       // pointer to a constant integer
    int const* cip = &ci;       // constant pointer to a pointer

    return 0;
}
