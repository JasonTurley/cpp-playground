// A more practical inheritance example
#include <iostream>

// The base class
class Person {
public:
        std::string m_name;

        int m_age;

        Person(std::string name = "", int age = 0)
                : m_name(name), m_age(age)
        {
        }

        std::string getName() const { return m_name; }

        int getAge() const { return m_age; }
};

// Derives from Person class
class BasketballPlayer : public Person {
public:
        int m_points;

        int m_assists;

        BasketballPlayer(int points = 0, int assists = 0)
                : m_points(points), m_assists(assists)
        {
        }

        int getPoints() const { return m_points; }

        int getAssists() const { return m_assists; }
};


int main()
{
        Person pat;
        pat.m_name = "Pat";
        pat.m_age = 33;

        std::cout << pat.getName() << " is " << pat.getAge() << " years old.\n";

        BasketballPlayer james;
        james.m_name = "Lebron James";
        james.m_points = 40;
        james.m_assists = 12;

        std::cout << james.getName() << " has " << james.getPoints() << " points and ";
        std::cout << james.getAssists() << " assists.\n";


        return 0;
}
