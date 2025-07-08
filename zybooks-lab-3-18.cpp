// Smallest Number

// Write a program whose inputs are three integers, and whose output is the smallest of the three values.
// Ex: If the input is:
// 7 15 3
// the output is:
// 3

#include <iostream>
using namespace std;

int main() {
   
   /* Type your code here. */
   int n1, n2, n3;
   cin >> n1 >> n2 >> n3;

   // find min
   int min = n1;
   
   if(n2 < min) {
     min = n2;
   }

   if(n3 < min) {
     min = n3;
   }

   cout << min << endl;

   return 0;
}
