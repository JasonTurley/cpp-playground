#include <iostream>

#include "date.h"

using namespace std;

int main() {
    Date d1;
    cout << "d1: (" << d1.day() << ", " << d1.month() << ", " << d1.year() << ")\n";

    Date d2(22, d2.Date::jul, 2018);
    cout << "d2: (" << d2.day() << ", " << d2.month() << ", " << d2.year() << ")\n";

    bool are_eq = (d1 == d2);
    cout << "d1 == d2: " << are_eq << endl;

    Date d3 = d1;
    d3.add_year(3);
    cout << "d3: (" << d3.day() << ", " << d3.month() << ", " << d3.year() << ")\n";

    return 0;
}
