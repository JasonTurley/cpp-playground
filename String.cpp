#include <iostream>
#include <cstddef>      // size_t

/**
 * Representation of a string.
 */
class String {
public:
        String(char *s, size_t len)
        {
                str = new char[len+1];  // need room for string and null byte
                length = len;

                write(s, len);
        }

        ~String()
        {
                delete[] str;
        }

        char *read() const { return str; }

        size_t strlen() const { return length; }

private:
        char *str;
        size_t length;

        void write(char *s, size_t len)
        {
                for (size_t i = 0; i < len; i++)
                        str[i] = s[i];

                str[len] = '\0';
        }
};


int main()
{
        String s1 {"Hello", 5};
        String s2 {"Waterfall Rapids", 16};

        std::cout << s1.read() << " "<< s1.strlen() << std::endl;
        std::cout << s2.read() << " "<< s2.strlen() << std::endl;

        return 0;

}
