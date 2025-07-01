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

#include <iomanip> 
// https://en.cppreference.com/w/cpp/header/iomanip.html
// for setprecision(1)
// https://en.cppreference.com/w/cpp/io/manip/setprecision.html


using namespace std;

int main() {
  const int COOKIES_PER_SERVING = 5;
  const int CALORIES_PER_SERVING = 160;

  int oreosEaten = 0;
  double servings = 0.0;
  double calories = 0.0;

  cout << "Welcome to the Oreo Calculator!" << endl;

  cout << "Enter the number of Oreos eaten: ";
  cin >> oreosEaten;

  // servings = oreosEaten / COOKIES_PER_SERVING; // No cast incorrect int result
  servings = static_cast<double>(oreosEaten) / COOKIES_PER_SERVING; // CPP style cast
  // servings = double(oreosEaten) / COOKIES_PER_SERVING;           // C style cast
  // servings = oreosEaten / (COOKIES_PER_SERVING + 0.0);           // coererce to float type
  // servings = 1.0 * oreosEaten / COOKIES_PER_SERVING;             // coererce to float type
  calories = CALORIES_PER_SERVING * servings;

  //set fixed and showpoint with precision set to 1 decimal place
  cout << fixed << showpoint << setprecision(1);

  cout << oreosEaten << " Oreos equals " << servings << " servings!" << endl;

  cout << "You consumed " << calories << " calories." << endl;

  cout << "Keep eating Oreos!" << endl;

  return 0;
}


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
int oreosEaten = 0;

B. OUTPUT
double servings = 0.0;
double calories = 0.0;

C. CALCULATIONS
const int COOKIES_PER_SERVING = 5;
const int CALORIES_PER_SERVING = 160;

servings = static_cast<double>(oreosEaten) / COOKIES_PER_SERVING;
calories = CALORIES_PER_SERVING * servings;

D. LOGIC and ALGORITHMS
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

MESSAGE "Welcome to the Oreo Calculator!"

PROMPT "Enter the number of Oreos eaten: "
INPUT oreosEaten

DO CALCULATIONS

DATA oreosEaten
LABEL " Oreos equals "
DATA servings
LABEL "  servings!"

MESSAGE "You consumed "
DATA calories
LABEL " calories."

MESSAGE "Keep eating Oreos!"


SAMPLE RUNS
Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 12

12 Oreos equals 2.4 servings!
You consumed 384.0 calories.

Keep eating Oreos!


Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 3

3 Oreos equals 0.6 servings!
You consumed 96.0 calories.

Keep eating Oreos!

*/
