#include <iostream>

// Base Fruit class
class Fruit {
private:
        std::string m_name;

        std::string m_color;

public:
        Fruit(std::string name, std::string color)
                : m_name  {name}
                , m_color {color}
        {
        }

        std::string getName() const { return m_name; }

        std::string getColor() const { return m_color; }
};

// Apple publicly inherits from Fruit
class Apple : public Fruit {
private:
        double m_fiber;

public:
        Apple(std::string name, std::string color, double fiber)
                : Fruit(name, color)
                , m_fiber {fiber}
        {
        }

        double getFiber() const { return m_fiber; }

        friend std::ostream& operator<<(std::ostream &os, const Apple &a)
        {
                os << "Apple(" << a.getName() << ", " << a.getColor() << ", ";
                os << a.getFiber() << ")\n";

                return os;
        }
};

// Banana publicly inherits from Fruit
class Banana : public Fruit {
public:
        Banana(std::string name, std::string color)
                : Fruit(name, color)
        {
        }

        friend std::ostream& operator<<(std::ostream &os, const Banana &b)
        {
                os << "Banana(" << b.getName() << ", " << b.getColor() << ")\n";

                return os;
        }
};

int main()
{
        const Apple a("Red Delicious", "red", 4.2);
        std::cout << a;

        const Banana b("Cavendish", "yellow");
        std::cout << b;

        return 0;
}
