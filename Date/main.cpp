#include <iostream>

#include "date.h"

using namespace std;

int main() {
    Date d1;
    cout << "d1: (" << d1.day() << ", " << d1.month() << ", " << d1.year() << ")\n";

    Date d2(22, d2.Date::jul, 2018);
    cout << "d2: (" << d2.day() << ", " << d2.month() << ", " << d2.year() << ")\n";

    return 0;
}
