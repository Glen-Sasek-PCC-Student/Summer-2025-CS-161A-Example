// A pedometer treats walking 1 step as walking 2.5 feet. 
// Define a function named FeetToSteps that takes a double as a parameter, 
// representing the number of feet walked, and returns the number of steps 
// walked as an integer by type casting. 
// Then, write a main program that reads the number of feet walked as an input, 
// calls function FeetToSteps() with the input as an argument, and 
// outputs the number of steps returned from FeetToSteps().

// Use floating-point arithmetic to perform the conversion.

// Note: Type casting a double to an integer may affect the result's accuracy.

// Ex: If the input is:

// 150.5
// the output is:

// 60
// The program must define and call a function:
// int FeetToSteps(double userFeet)

#include <iostream>

using namespace std;

// A pedometer treats walking 1 step as walking 2.5 feet.
const double FT_PER_STEP = 2.5;

int FeetToSteps(double ft);

int main() {
   /* Type your code here */
   double ft = 0.0;
   cin >> ft;
   cout << FeetToSteps(ft) << endl;

   return 0;
}

int FeetToSteps(double ft) {
    int steps = ft / FT_PER_STEP;
    return steps;
}
