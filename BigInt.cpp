// Demo for operation overloading using friend functions.
// friend functions are able to access a class's private member variables.
#include <iostream>

class BigInt {
private:
        int m_integer;

public:
        BigInt(int integer)
                : m_integer {integer}
        {
        }

        int getInt() const { return m_integer; }

        // add BigInt + BigInt using friend operator
        friend BigInt operator+(const BigInt &int1, const BigInt &int2)
        {
                return BigInt(int1.m_integer + int2.m_integer);
        }

        // add BigInt - BigInt using friend operator
        friend BigInt operator-(const BigInt &int1, const BigInt &int2)
        {
                return BigInt(int1.m_integer - int2.m_integer);
        }

        // add BigInt * BigInt using friend operator
        friend BigInt operator*(const BigInt &int1, const BigInt &int2)
        {
                return BigInt(int1.m_integer * int2.m_integer);
        }

        // add BigInt / BigInt using friend operator
        friend BigInt operator/(const BigInt &int1, const BigInt &int2)
        {
                return BigInt(int1.m_integer / int2.m_integer);
        }

        friend std::ostream& operator<<(std::ostream &os, const BigInt &bi)
        {
                os << bi.m_integer;

                return os;
        }
};

int main()
{
        BigInt x(12);
        BigInt y(7);

        std::cout << x << std::endl;
        std::cout << y << std::endl;

        std::cout << "x + y = " << x + y << std::endl;
        std::cout << "x - y = " << x - y << std::endl;
        std::cout << "x * y = " << x * y << std::endl;
        std::cout << "x / y = " << x / y << std::endl;

        return 0;
}
