// ------------- FILE HEADER -------------
// Author:
// Assignment:
// Date:
// Description:
// Sources:

// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: NONE MIDTERM WEEK

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
#include <string>
#include <limits> // NOT <climits> for cin.ignore(numeric_limits<streamsize>::max(), '\n');
#include <iomanip>


// RUN AND TEST COMMAND
// cd _midterm // Or the directory containing these files
// g++ main.cpp && for t in *.txt; do ./a.out < $t; done; rm ./a.out 

// MINIMAL COMPILE AND RUN, one line each
// COMPILE
// g++ main.cpp

// RUN
// ./a.out

// REMOVE ./a.out
// rm ./a.out



using namespace std;

int main() {
  string p1_name = "";
  string p2_name = "";
  string p3_name = "";

  int p1_count = 0;
  int p2_count = 0;
  int p3_count = 0;

  cout << "Welcome to the Rock Collector Championships!" << endl;
  
  cout << "Enter player 1 name: ";
  getline(cin, p1_name);
  cout << "How many rocks did " << p1_name << " collect? ";
  cin >> p1_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter player 2 name: ";
  getline(cin, p2_name);
  cout << "How many rocks did " << p2_name << " collect? ";
  cin >> p2_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter player 3 name: ";
  getline(cin, p3_name);
  cout << "How many rocks did " << p3_name << " collect? ";
  cin >> p3_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // DEBUG
  // cout << endl;
  // cout << "NAME" <<  '\t' << "COUNT" << endl;
  // cout << p1_name << '\t' << p1_count << endl;
  // cout << p2_name << '\t' << p2_count << endl;
  // cout << p3_name << '\t' << p3_count << endl;

  //Calculations

  float average = (p1_count + p2_count + p3_count) / 3.0;

  cout << fixed << setprecision(2);

  int a = p1_count;
  int b = p2_count;
  int c = p3_count;

  enum {THREE_WAY_TIE, TIE_FOR_FIRST, TIE_FOR_SECOND, NO_TIES};
  int result_type = NO_TIES;
  string first_name = "";
  string second_name = "";
  string third_name = "";

  // 1. ALL TIE FOR FIRST      a == b and b == c
  // 2. TWO TIED FOR FIRST     a == b and b > c
  // 3. TWO TIED FOR FIRST     a == c and c > b
  // 4. TWO TIED FOR FIRST     b == c and c > a
  // 5. TWO TIED FOR SECOND    a == b and b < c
  // 6. TWO TIED FOR SECOND    a == c and c < b
  // 7. TWO TIED FOR SECOND    b == c and c < a

  // 8.  1:a	 2:b  3:c          a > b and b > c
  // 9.  1:a	 2:c  3:b          a > c and c > b
  // 10. 1:b	 2:a  3:c          b > a and a > c
  // 11. 1:b	 2:c  3:a          b > c and c > a
  // 12. 1:c	 2:b  3:a          c > b and b > a
  // 13. 1:c	 2:a  3:b          c > a and a > b

  if(a == b and b == c) {
    result_type = THREE_WAY_TIE;
  } else if (a == b and b > c) {
    result_type = TIE_FOR_FIRST;
    first_name = p1_name;
    second_name = p2_name;
    third_name = p3_name;
  }else if (a == c and c > b) {
    result_type = TIE_FOR_FIRST;
    first_name = p1_name;
    second_name = p3_name;
    third_name = p2_name;
  }else if (b == c and c > a) {
    result_type = TIE_FOR_FIRST;
    first_name = p2_name;
    second_name = p3_name;
    third_name = p1_name;
  }else if (a == b and b < c) {
    result_type = TIE_FOR_SECOND;
    first_name = p3_name;
    second_name = p1_name;
    third_name = p2_name;
  }else if (a == c and c < b) {
    result_type = TIE_FOR_SECOND;
    first_name = p2_name;
    second_name = p1_name;
    third_name = p3_name;
  }else if (b == c and c < a) {
    result_type = TIE_FOR_SECOND;
    first_name = p1_name;
    second_name = p2_name;
    third_name = p3_name;
  }else if (a > b and b > c) {
    result_type = NO_TIES;
    first_name = p1_name;
    second_name = p2_name;
    third_name = p3_name;
  }else if (a > c and c > b) {
    result_type = NO_TIES;
    first_name = p1_name;
    second_name = p3_name;
    third_name = p2_name;
  }else if (b > a and a > c) {
    result_type = NO_TIES;
    first_name = p2_name;
    second_name = p1_name;
    third_name = p3_name;
  }else if (b > c and c > a) {
    result_type = NO_TIES;
    first_name = p2_name;
    second_name = p3_name;
    third_name = p1_name;
  }else if (c > b and b > a) {
    result_type = NO_TIES;
    first_name = p3_name;
    second_name = p2_name;
    third_name = p1_name;
  }else if (c > a and a > b) {
    result_type = NO_TIES;
    first_name = p3_name;
    second_name = p1_name;
    third_name = p2_name;
  }else {
    cout << "ERROR: Unhandled result" << endl; 
  }

  cout << endl;
  switch(result_type) {
    case THREE_WAY_TIE:
      cout << "It is a three way tie!" << endl;
      break;
    case TIE_FOR_FIRST:
      cout << first_name << " and " << second_name << " are tied for first place." << endl;
      cout << third_name << " is in second place!" << endl;
      break;
    case TIE_FOR_SECOND:
      cout << first_name << " is in first place!" << endl;  
      cout << second_name << " and " << third_name << " are tied for second place." << endl;
     break;
    case NO_TIES:
      cout << first_name << " is in first place!" << endl;
      cout << second_name << " is in second place!" << endl;
      cout << third_name << " is in third place!" << endl;
      break;
    default:
      cout << "Error, unsupported result type" << endl;
  }


  cout << "The average number of rocks collected by the top three players is " << average << " rocks!" << endl;

  cout << "Congratulations Rock Collectors!" << endl;

  return 0;
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
Welcome to the Rock Collector Championships!

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.

Enter player 2 name: Link
How many rocks did Link collect? 45

Enter player 3 name: D. Va
How many rocks did D. Va collect? 45

Link and D. Va are tied for first place.
Gordan Freeman is in second place!

The average number of rocks collected by the top three players is 30.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: Mario
How many rocks did Mario collect? 56

Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56

Enter player 3 name: Sonic
How many rocks did Sonic collect? 56

It is a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57

Enter player 2 name: Samus
How many rocks did Samus collect? 102

Enter player 3 name: Kirby
How many rocks did Kirby collect? 62

Samus is in first place!
Kirby is in second place.
King Dedede is in third place.

The average number of rocks collected by the top three players is 73.67 rocks!

Congratulations Rock Collectors!

*/
