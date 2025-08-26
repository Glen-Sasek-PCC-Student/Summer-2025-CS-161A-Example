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


// ------------- CODE -------------
#include <iostream>
#include "gs-utils.h"

using namespace std;

void getInput(int &num);
void doStats(int num);

// Write a program that prompts a user for the number of positive integers (0 is neither positive or negative) they want to enter.
// Use this function prototype for this step: void getInput(int &num); This function should not output any error messages - that should be done in main().
// If a valid number was entered, call a function - void doStats(int num); to do the following:
// Use a for loop to prompt for each number, adding the position number in the prompt. Do not start at position 0! (See sample run below).
// If the user enters a negative number or 0, print an error, and then prompt for the number again. Be careful - you will need to adjust the counter variable in the for loop!
// After the positive integers have been entered, list the minimum and maximum integers entered and the first occurance of the position they were entered (1, 2, 3, 4, 5, etc).
// For example, if the user enters 4, 4, 5, 4, the minimum number is 4, and it was entered in position 1.
// Do not store all of the numbers, only the minimum, maximum, and the positions they were entered in.

// Include a welcome and goodbye message. (See sample run below). Use functions for these.


int main() {

  // "Welcome to my Final Exam Practice."
  // Prompt: modern greeting idioms
  // https://chatgpt.com/c/68adf0d8-ad48-832c-95a9-07543c806a15
  cout << "YO!" << endl;

  // How many positive integers do you want to process? 4
  cout << "How many positive integers do you want to process?" << endl;
  int intCount = 0;
  getInput(intCount);
  if(intCount <= 0) {
    cout << "No integers were entered." << endl;
  } else {
    doStats(intCount);
  }
  
  // "Thank you for using my program."
  // Prompt: modern goodbye idioms
  // https://chatgpt.com/c/68adf0d8-ad48-832c-95a9-07543c806a15
  cout << "I'm! out." << endl;

  return 0;
}


void getInput(int &num) {
  num = getInt();
}

void doStats(int num) {
  int min = 0;
  int minPosition = 0;

  int max = 0;
  int maxPosition = 0;

  for(int i = 1; i <= num; i++) {
    int n = 0;

    // Enter integer #1: 10
    // Enter integer #2: -9
    // Enter a positive integer!
    // Enter integer #2: 0
    // Enter a positive integer!
    // Enter integer #2: -3
    // Enter a positive integer!
    // Enter integer #2: 4
    // Enter integer #3: 3
    // Enter integer #4: -9
    // Enter a positive integer!
    // Enter integer #4: 5
    while(n <= 0) {
      string prompt = "Enter integer # " + to_string(i) + ": " ;
      cout << prompt;
      getInput(n);
      if(n <= 0) {
        cout << "Enter a positive integer!" << endl;
      }
    }

    // check min an max
    if(i == 1 || n < min) { // Always set min on first number i == 1
      min = n;
      minPosition = i;
    }

    if(n > max) {
      max = n;
      maxPosition = i;      
    }
  }

  cout << endl;
  
  // The minimum number entered was 3 entered in position 3.
  // The maximum number entered was 10 entered in position 1.
  cout << "The minimum number entered was " << min << " entered in position " << minPosition << "." << endl; 
  cout << "The maximum number entered was " << max << " entered in position " << maxPosition << "." << endl;
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
Welcome to my Final Exam Practice.
How many positive integers do you want to process? 0
No integers were entered.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? -9
No integers were entered.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? 3
Enter integer #1: 1
Enter integer #2: 2
Enter integer #3: 3
The minimum number entered was 1 entered in position 1.
The maximum number entered was 3 entered in position 3.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? 4
Enter integer #1: 2
Enter integer #2: 2
Enter integer #3: 2
Enter integer #4: 2
The minimum number entered was 2 entered in position 1.
The maximum number entered was 2 entered in position 1.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? 4
Enter integer #1: 10
Enter integer #2: -9
Enter a positive integer!
Enter integer #2: 0
Enter a positive integer!
Enter integer #2: -3
Enter a positive integer!
Enter integer #2: 4
Enter integer #3: 3
Enter integer #4: -9
Enter a positive integer!
Enter integer #4: 5
The minimum number entered was 3 entered in position 3.
The maximum number entered was 10 entered in position 1.
Thank you for using my program.

*/
