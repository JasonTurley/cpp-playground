// A simple program to demonstrate iostream overloading.
#include <iostream>

using namespace std;

class Complex {
private:
public:
    int real, imag;

    Complex(int r = 0, int i = 0) { real = r; imag = i; }

    friend ostream& operator<<(ostream& out, const Complex& p);
    friend istream& operator>>(istream& in, const Complex& p);
};

ostream& operator<<(ostream& out, const Complex& c) {
    out << "Complex(" << c.real << ", " << c.imag << ")\n";
    return out;
}

istream& operator>>(istream &in,  Complex &c) {
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imagenory Part ";
    in >> c.imag;
    return in;
}

int main() {
    Complex c;
    cin >> c;
    cout << c;

    return 0;
}
