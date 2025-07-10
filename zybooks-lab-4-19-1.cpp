// A year in the modern Gregorian Calendar consists of 365 days. In reality, the
// earth takes longer to rotate around the sun. To account for the difference in
// time, every 4 years, a leap year takes place. A leap year is when a year has
// 366 days: An extra day, February 29th. The requirements for a given year to
// be a leap year are:

// 1) The year must be divisible by 4

// 2) If the year is a century year (1700, 1800, etc.), the year must be evenly
// divisible by 400; therefore, both 1700 and 1800 are not leap years

// Some example leap years are 1600, 1712, and 2016.

// Write a program that takes in a year and determines whether that year is a
// leap year.

// Ex: If the input is:

// 1712
// the output is:

// 1712 - leap year
// Ex: If the input is:

// 1913
// the output is:

// 1913 - not a leap year

// Compile and run one test
// g++ zybooks-lab-4-19-1.cpp && ./a.out < <(echo '1712') && rm ./a.out

// Compile and run two tests
// g++ zybooks-lab-4-19-1.cpp && ./a.out < <(echo '1712'); ./a.out < <(echo '1913'); rm ./a.out

#include <iostream>
using namespace std;

int main() {
    int year;
    bool isLeapYear = false;

    cin >> year;

    /* Type your code here. */

    // 1) The year must be divisible by 4
    // 2) If the year is a century year (1700, 1800, etc.), the year must be
    // evenly divisible by 400; therefore, both 1700 and 1800 are not leap years

    bool mod_4 = year % 4 == 0;
    bool mod_100 = year % 100 == 0;
    bool mod_400 = year % 400 == 0;

    if (mod_4 && mod_100) {
        isLeapYear = mod_400;
    } else if (mod_4) {
        isLeapYear = true;
    } else {
        isLeapYear = false;
    }

    // c++ ternary      TEST ? THEN : ELSE
    // isLeapYear = year % 4 == 0 ? (year % 100 != 0) || (year % 400 != 0) : false;

    if (isLeapYear) {
        cout << year << " - leap year" << endl;
    } else {
        cout << year << " - not a leap year" << endl;
    }

    return 0;
}
