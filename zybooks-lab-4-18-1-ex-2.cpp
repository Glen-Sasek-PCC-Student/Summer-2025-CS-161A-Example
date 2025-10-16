/*
   Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. 
   Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits. 
   Thus, I-405 services I-5, and I-290 services I-90. 
   Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.

   Given a highway number, indicate whether it is a primary or auxiliary highway. 
   If auxiliary, indicate what primary highway it serves. 
   Also indicate if the (primary) highway runs north/south or east/west.
*/

/*
   Ex: If the input is:

   90
   the output is:

   I-90 is primary, going east/west.
   Ex: If the input is:

   290
   the output is:

   I-290 is auxiliary, serving I-90, going east/west.
   Ex: If the input is:

   0
   the output is:

   0 is not a valid interstate highway number. 
   Ex: If the input is:

   200
   the output is:

   200 is not a valid interstate highway number. 
*/

// COMPILE and TEST
// g++ zybooks-lab-4-18-1-ex-2.cpp && for n in 90 91 290 290 0 200; do echo -e "\n\nTESTING: $n"; ./a.out <<<$n; done && rm ./a.out

#include <iostream>

using namespace std;

const string HWY_LABEL = "I-"; 

const string IS_PRIMARY = "is primary,";
const string IS_AUXILARY_SERVING = "is auxiliary, serving";

const string GOING_EAST_WEST = "going east/west.";
const string GOING_NORTH_SOUTH = "going north/south.";

const string IS_PRIMARY_EAST_WEST = IS_PRIMARY + " " + GOING_EAST_WEST;
const string IS_PRIMARY_NORTH_SOUTH = IS_PRIMARY + " " + GOING_NORTH_SOUTH;

const string NOT_VALID = "is not a valid interstate highway number.";

const int MIN_PRIMARY = 1;
const int MAX_PRIMARY = 99;
const int MAX_AUXILARY = 999;

int main() {
   int n = 0;
   
   cin >> n;

   // Check valid
   bool valid = true;
   valid &= (n % 100 != 0); // Not 0 or multiple of 100
   valid &= (n >= MIN_PRIMARY);
   valid &= (n <= MAX_AUXILARY); 
   
   if(valid) {
      // Check Primary/Auxiliary
      bool primary = (n <= MAX_PRIMARY);
      
      // Check North/South
      bool north_south = (n % 2 != 0);

      if(primary) {
         // Display Primary
         string s = "";
         s += HWY_LABEL + to_string(n) + " ";
         s += north_south ? IS_PRIMARY_NORTH_SOUTH : IS_PRIMARY_EAST_WEST;       
         cout << s << endl;
      } else {
         // Display Auxilary 
         int serving_primary_n = n % 100;
         string s = "";
         s += HWY_LABEL + to_string(n) + " ";
         s += IS_AUXILARY_SERVING + " " + to_string(serving_primary_n) + " ";
         s += north_south ? GOING_NORTH_SOUTH : GOING_EAST_WEST;
         cout << s << endl;
      }
   } else {
      cout << n << ' ' << NOT_VALID << endl;
   }
}
