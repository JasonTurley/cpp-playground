// Represents a Date as day, month, and year
#ifndef DATE_H
#define DATE_H

using namespace std;

class Date {
public:
    enum Month {jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

    class Bad_date { };     // exception class

    Date(int dd = 0, Month mm = Month(0), int yy = 0);

    // functions for examining the Date
    int day() const;
    Month month() const;
    int year() const;

    // Set the default_date member variable
    static void set_default(int, Month, int);

    // functions for updating the Date
    Date& add_day(int n);               // add n days
    Date& add_month(int n);             // add n months
    Date& add_year(int n);              // add n years

private:
    int d, m, y;
    static Date default_date;
};

inline int Date::day() const{
    return d;
}

inline Date::Month Date::month() const {
    return Month(m);
}

inline int Date::year() const {
    return y;
}
#endif
