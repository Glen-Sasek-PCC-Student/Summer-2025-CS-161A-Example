// Given three input values representing counts of nickels, dimes, and quarters, output the total amount as dollars and cents.

// Output each floating-point value with two digits after the decimal point using the following statement once before all other cout statements:
// cout << fixed << setprecision(2);

// Ex: If the input is:

// 3 1 4
// where 3 is the number of nickels (at $0.05 each), 1 is the number of dimes (at $0.10 each), and 4 is the number of quarters (at $0.25 each), the output is:

// Amount: $1.25
// For simplicity, assume input is non-negative.


#include <iostream>
#include <iomanip>
using namespace std;

const float USD_PER_NICKEL = 0.05;
const float USD_PER_DIME = 0.10;
const float USD_PER_QUARTER = 0.25;

// Compile and Test
// g++ zybooks-lab-2-22.cpp && ./a.out < <(echo "3 1 4") && rm ./a.out

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   
   /* Type your code here. */
   cin >> nickels >> dimes >> quarters;
   cout << fixed << setprecision(2);

   dollars = nickels * USD_PER_NICKEL;    
   dollars += dimes * USD_PER_DIME;
   dollars += quarters * USD_PER_QUARTER; //dollars += n is the same as dollars = dollars + n
   // https://en.cppreference.com/w/cpp/language/operator_precedence.html

   cout << "Amount: $" << dollars << endl;
   
   return 0;
}