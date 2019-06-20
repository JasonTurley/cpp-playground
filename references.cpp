#include <iostream>
#include <string>

using std::string;

int main()
{
        string str = "Hell";
        string &str2 = str;
        str2 += "o";             // This is fine

        std::cout << "str: " << str << std::endl;
        std::cout << "str2: " << str2 << std::endl;

        return 0;
}
