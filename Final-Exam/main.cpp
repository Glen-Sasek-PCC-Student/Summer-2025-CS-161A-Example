// ------------- FILE HEADER -------------
// Author: 
// Assignment:
// Date:
// Description:
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 
// Participation: 
// Challenge:
// Labs:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: 
// B. OUTPUT [yes/no]:
// C. CALCULATIONS [yes/no]:
// D. LOGIC and ALGORITHMS [yes/no]:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: 
// (Optional) Additional tests count:   


// COMPILE AND TEST:
// g++ main.cpp && for t in test*; do echo -e "\n\nTESTING: $t\nCONTENT OF TEST FILE:"; cat $t;  echo -e "\nPROGRAM OUTPUT:"; ./a.out < $t; done && rm ./a.out;

// ------------- CODE -------------
#include <iostream>

using namespace std;

const int PLACEHOLDER_RETURN_VALUE = -42;


// Prompt a user for the number of miles they want to ride (walk, run, swim, whatever you want) this week. 
// This is their goal. Write a function for the above task. 
void getInput(int &goal);

// In this function, use a for loop to prompt for the number of miles ridden each day for a week. 
// Include the day of the week (Sunday, Monday, etc) in your prompt.
// If the user enters a number less than 0, print an error message and prompt for the same day again. (See sample run below).
// After all of the days have been entered, calculate return the total miles for the week 
int calcTotal();

int main() {
  // Declare Variables
  int goalMiles = 0;
  int totalMiles = 0;

  // Welcome to my Miles Tracker program.
  cout << "Welcome to my Miles Tracker program." << endl;

  // How many miles do you want to ride this week? 50
  getInput(goalMiles); // Prompt and get goal 
   
  // If the user enters 0 or less, print a message that no miles were tracked this week. 
  // The message should be printed in main() and not in the function.

  // If a valid number of miles (Greater than 0) is entered, you must call another function
  totalMiles = calcTotal();// Wrap in if test, call if goalMiles  is greater than zero;


  cout << "TODO: Display results :)" << endl;
  // RESULTS 
  // You rode 50 miles this week.

  // POSSIBLE RESULTS
  // You may be creative with language but must include unique; none tracked, met, missed, and exceeded.
  // Good job! You met your goal!
  // Uh oh! You missed your goal by NUMBER miles!
  // Great job! You exceeded your goal by NUMBER miles!
  // No miles were tracked this week.

  // Keep riding!
  cout << "Keep riding!" << endl;
  return 0;
}


// Prompt a user for the number of miles they want to ride (walk, run, swim, whatever you want) this week. 
// This is their goal. Write a function for the above task.   
void getInput(int &goal) {
  cout << "TODO: void getInput(int &goal)" << endl;
  // How many miles do you want to ride this week? 50
}


// In this function, use a for loop to prompt for the number of miles ridden each day for a week. 
// Include the day of the week (Sunday, Monday, etc) in your prompt.
// If the user enters a number less than 0, print an error message and prompt for the same day again. (See sample run below).
// After all of the days have been entered, calculate return the total miles for the week 
int calcTotal() {
  int totalMiles = PLACEHOLDER_RETURN_VALUE;
  cout << "TODO: int calcTotal()" << endl;
  cout << "WARNING! Returning PLACEHOLDER_RETURN_VALUE: " << PLACEHOLDER_RETURN_VALUE << endl;
  // How many miles did you ride on Sunday? -9
  // Miles must be 0 or greater!
  // How many miles did you ride on Sunday? -3
  // Miles must be 0 or greater!
  // How many miles did you ride on Sunday? 0
  // How many miles did you ride on Monday? 10
  // How many miles did you ride on Tuesday? 10
  // How many miles did you ride on Wednesday? 10
  // How many miles did you ride on Thursday? 10
  // How many miles did you ride on Friday? 10
  // How many miles did you ride on Saturday? 0

  return totalMiles;
}


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
