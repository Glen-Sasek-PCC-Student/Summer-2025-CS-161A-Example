#include <iostream>
using namespace std;

int main() {

   int numerator = 0;
   int divisor = 0;

   cin >> numerator;
   cin >> divisor;

   int q1 = numerator/divisor;
   int q2 = q1/divisor;
   int q3 = q2/divisor;

   cout << q1 << ' ';
   cout << q2 << ' ';
   cout << q3 << endl;

   return 0;
}
