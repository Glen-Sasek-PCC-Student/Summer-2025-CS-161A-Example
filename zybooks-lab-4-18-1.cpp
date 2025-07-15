// Primary U.S. interstate highways are numbered 1-99.
// Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west.
// Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits.
// Thus, I-405 services I-5, and I-290 services I-90.
// Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.

// Given a highway number, indicate whether it is a primary or auxiliary highway.
// If auxiliary, indicate what primary highway it serves.
// Also indicate if the (primary) highway runs north/south or east/west.

// Ex: If the input is:
// 90
// the output is:
// I-90 is primary, going east/west.

// Ex: If the input is:
// 290
// the output is:
// I-290 is auxiliary, serving I-90, going east/west.

// Ex: If the input is:
// 0
// the output is:
// 0 is not a valid interstate highway number.

// Ex: If the input is:
// 200
// the output is:
// 200 is not a valid interstate highway number.


// Compile and run
// g++ zybooks-lab-4-18-1.cpp && for n in 90 290 0 200 405 84 101 26; do ./a.out < <(echo $n); echo; done && rm ./a.out

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MIN = 1;
    const int MAX = 999;

    int n = 0;
    int primary = 0;       // numbered    1-99 unused if n < 100
    // int auxiliary = 0;     numbered 101-999 except multiples of 100, Not needed
    
    bool is_east_west = true; // Even numbers go ease/west, Odd north/south
    bool is_valid = true;
    bool is_primary = true;

    cin >> n;
    if(n < MIN || n > MAX) {
        is_valid = false;
    }
    if(n % 100 == 0) {
        is_valid = false;
    }

    if(is_valid) {
        // if(n < 100) {
        //     primary = true;
        // } else {
        //     primary = false;
        // }
        is_primary = n < 100; // Above can be expressed like this
        is_east_west = n % 2 == 0;
        
        string direction = is_east_west ? "east/west" : "north/south";
        if(is_primary) {
            cout << "I-" << n << " is primary, going " << direction << "." << endl;
        } else {
            primary = n % 100;
            cout << "I-" << n << " is auxiliary, serving I-" << primary << ", going " << direction << "." << endl;
        } 
    } else {
        cout << n << " is not a valid interstate highway number." << endl;
    }

    return 0;
}
