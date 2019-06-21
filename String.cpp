#include <iostream>
#include <cstring>
#include <cstddef>      // size_t

using std::cout;
using std::endl;

/**
 * Representation of a string.
 */
class String {
public:
        /**
         * Constructor.
         */
        String(char *string)
        {
                m_size = strlen(string);
                m_string = new char[m_size+1];
                strncpy(m_string, string, m_size);
        }

        /**
         * Copy constructor.
         */
        String(const String& old)
        {
                m_size = old.m_size;
                m_string = new char [m_size+1];
                strncpy(m_string, old.m_string, m_size);
        }

        /**
         * Destructor.
         */
        ~String()
        {
                delete[] m_string;
        }

        /**
         * Prints string to cout.
         */
        void print()
        {
                cout << m_string << endl;
        }

private:
        char *m_string;
        size_t m_size;
};


int main()
{
        String s1("HELLO");
        String s2 = s1;

        s1.print();
        s2.print();

        return 0;
}
