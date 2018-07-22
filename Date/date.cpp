#include <iostream>
#include "date.h"

using namespace std;

// Set the default date
Date Date::default_date(1, jan, 1970);

Date::Date(int dd, Month mm, int yy) {
    if (dd == 0) dd = default_date.day();
    if (mm == 0) mm = default_date.month();
    if (yy == 0) yy = default_date.year();

    int max;

    switch (mm) {
        case feb:
            max = 28; //+ leapyear(yy);
            break;
        case apr: case jun: case sep: case nov:
            max = 30;
            break;
        case jan: case mar: case may: case jul: case aug: case oct: case dec:
            max = 31;
            break;
        default:
            throw Bad_date();   // someone cheated
    }

    if (dd < 1 || max < dd) throw Bad_date();

    d = dd;
    m = mm;
    y = yy;
}
