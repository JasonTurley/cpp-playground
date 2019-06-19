// Demonstrates the order of construction of derived classes
// compile with g++ -Wall -Werror -Wextra ex1.cpp -o ex1
#include <iostream>

class Base {
private:
        int m_id;

public:
        Base(int id = 0)
                : m_id(id)
        {
                std::cout << "Base\n";
        }

        int getId() const { return m_id; }
};

// Think of derived class as two parts: one part derived, one part base
class Derived : public Base {
private:
        double m_cost;

public:
        Derived(double cost = 0.0, int id = 0)
                 : Base(id), // call Base(int) constructor with value of id
                 m_cost(cost)
        {
                std::cout << "Derived\n";
        }

        double getCost() const { return m_cost; }
};

int main()
{
        Derived derived(1.3, 10);

        std::cout << "Derived ID: " << derived.getId() << std::endl;
        std::cout << "Derived Cost: " << derived.getCost() << std::endl;

        return 0;
}
