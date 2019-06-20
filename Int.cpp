#include <iostream>

/**
 * Class for representing an integer in memory.
 */
class Int {

public:
        explicit Int(int integer = 0)
                : m_integer {integer}
        {
        }

        int read() const { return m_integer; }

        void write(int x) { m_integer = x; }

        friend Int operator+(const Int &int1, const Int &int2)
        {
                return Int(int1.m_integer + int2.m_integer);
        }

        friend Int operator-(const Int &int1, const Int &int2)
        {
                return Int(int1.m_integer - int2.m_integer);
        }

        friend Int operator*(const Int &int1, const Int &int2)
        {
                return Int(int1.m_integer * int2.m_integer);
        }

        friend Int operator/(const Int &int1, const Int &int2)
        {
                return Int(int1.m_integer / int2.m_integer);
        }

        friend std::ostream& operator<<(std::ostream &os, const Int &bi)
        {
                os << bi.m_integer;

                return os;
        }

private:
        int m_integer;
};

int main()
{
        Int x {12};
        Int y;
        y.write(10);

        Int z {x};

        std::cout << x << std::endl;
        std::cout << y << std::endl;

        std::cout << "x + y = " << x + y << std::endl;
        std::cout << "x - y = " << x - y << std::endl;
        std::cout << "x * y = " << x * y << std::endl;
        std::cout << "x / y = " << x / y << std::endl;

        std::cout << "z = " << z << std::endl;

        Int *m = new Int{42};

        std::cout << "m: " << m->read() << std::endl;

        delete m;
        return 0;
}
