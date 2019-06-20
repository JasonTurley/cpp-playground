#include <iostream>
#include <vector>

using std::vector;

#define N (20)

int main()
{
        vector<int> v;
        vector<int>::iterator itr;

        for (int i = 0; i < N; i++)
                v.push_back(i);

        for (itr = v.begin(); itr != v.end(); itr++)
                std::cout << *itr << " ";

        std::cout << std::endl;

        return 0;
}
