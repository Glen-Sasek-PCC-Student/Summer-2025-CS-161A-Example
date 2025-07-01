// Given a long long integer representing a 10-digit phone number, output the area code, prefix, and line number using the format (800) 555-1212.

// Ex: If the input is:

// 8005551212
// the output is:

// (800) 555-1212
// Hint: Use % to get the desired rightmost digits. Ex: The rightmost 2 digits of 572 is gotten by 572 % 100, which is 72.

// Hint: Use / to shift right by the desired amount. Ex: Shifting 572 right by 2 digits is done by 572 / 100, which yields 5. (Recall integer division discards the fraction).

// For simplicity, assume any part starts with a non-zero digit. So 0119998888 is not allowed.


// CHALLENGE support any numbers 0000000000 - 9999999999
// use #include <iomanip>
// https://en.cppreference.com/w/cpp/header/iomanip.html 

#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;

   int areaCode = 0;
   int prefix = 0;
   int lineNumber = 0;

   cin >> phoneNumber;
   
   /* Type your code here */
   lineNumber = phoneNumber % 10000;
   phoneNumber = phoneNumber / 10000;

   prefix = phoneNumber % 1000;
   phoneNumber = phoneNumber / 1000;

   areaCode = phoneNumber % 1000;

   cout << "(" << areaCode << ") " <<  prefix << "-" << lineNumber << endl; 
   
   return 0;
}
