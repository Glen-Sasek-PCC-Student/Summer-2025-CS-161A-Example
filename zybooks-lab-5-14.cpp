// 5.14.1: LAB: Warm up: Drawing a right triangle

// Program Specifications Complete a program that outputs a right triangle based on user specified height triangleHeight and symbol triangleChar.

// Note: This program is designed for incremental development. Complete each step and submit for grading before starting the next step. Only a portion of tests pass after each step but confirm progress.

// Step 0: Read the template file and do not change the provided code. 
// The program reads a symbol and the triangle's height from a user and outputs a fixed-hight right triangle using * characters.

// Step 1 (1 pt): Output the same right triangle with user-specified characters. 
// Modify the program to output the same right triangle using the user-specified triangleChar characters instead of *. Submit for grading to confirm 1 test passes.

// Ex: If triangleChar = % and triangleHeight = 5, the output is:

// Enter a character:
// %
// Enter triangle height:
// 5

// % 
// % % 
// % % % 

// Step 2 (2 pts): Output a right triangle with user-specified characters and height. 
// Modify the program to use a nested loop to output a right triangle of height triangleHeight. The first line will have one user-specified character. Each subsequent line will have one additional user-specified character until the number in the triangle's base reaches triangleHeight. Output a space after each user-specified character, including after the line's last user-specified character. Submit for grading to confirm all tests pass.

// Ex: If triangleChar = % and triangleHeight = 5, the output is:

// Enter a character:
// %
// Enter triangle height:
// 5

// % 
// % % 
// % % % 
// % % % % 
// % % % % % 



#include <iostream>
using namespace std;

int main() {
   char c;
   int height;

   cout << "Enter a character:" << endl;
   cin >> c;
   
   cout << "Enter triangle height:" << endl;
   cin >> height;
   cout << endl;

   for(int row = 0; row < height; row++) {
      for(int col = 0; col <= row; col++) {
         cout << c << " ";
      }      
      cout << endl;
   }

   
   return 0;
}
