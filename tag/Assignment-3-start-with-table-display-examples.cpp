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

using namespace std;

// DECLARATION
void printFareTable();
void printFareTableRow(string description, string price);

int main() {
  // FUNCTION CALL;
  printFareTable();
  return 0;
}

// IMPLEMENTATION
void printFareTable() {

  // Easiest Literal quotes
  cout << 
    "  Fare Description                                           Ticket $" << endl <<
    "--------------------------------------                     --------" << endl << 
    "Vehicle Under 14' (less than 168\") & Driver                 $57.90" << endl <<
    "Adult (age 19 - 64)                                         $14.95" << endl <<
    "Senior (age 65 & over) / Disability                         $7.40" << endl <<
    "Youth (age 6 - 18)                                          $5.55" << endl <<
    "Bicycle Surcharge (included with Vehicle)                   $4.00" << endl;

  // Hardest using setw without functions
  // const int COL_DESCRIPTION_WIDTH = 43;
  // const int COL_SPACE_WIDTH = 20;
  // const int COL_PRICE_WIDTH = 8;

  // cout << setw(COL_DESCRIPTION_WIDTH) << left << "  Fare Description" <<  setw(COL_SPACE_WIDTH) << " " << setw(COL_PRICE_WIDTH) << "  Ticket" << endl;
  // cout << setw(COL_DESCRIPTION_WIDTH) << left << "--------------------------------------" <<  setw(COL_SPACE_WIDTH) << " " << setw(COL_PRICE_WIDTH) << "--------" << endl;
  // cout << setw(COL_DESCRIPTION_WIDTH) << left << "Vehicle Under 14' (less than 168\") & Driver" <<  setw(COL_SPACE_WIDTH) << " " << setw(COL_PRICE_WIDTH) << " $57.90" << endl;
  // cout << setw(COL_DESCRIPTION_WIDTH) << left << "Adult (age 19 - 64)" <<  setw(COL_SPACE_WIDTH) << " " << setw(COL_PRICE_WIDTH) << " $14.95" << endl;
  // cout << setw(COL_DESCRIPTION_WIDTH) << left << "Senior (age 65 & over) / Disability" <<  setw(COL_SPACE_WIDTH) << " " << setw(COL_PRICE_WIDTH) << " $7.40" << endl;
  // cout << setw(COL_DESCRIPTION_WIDTH) << left << "Youth (age 6 - 18) " <<  setw(COL_SPACE_WIDTH) << " " << setw(COL_PRICE_WIDTH) << " $5.55" << endl;
  // cout << setw(COL_DESCRIPTION_WIDTH) << left << "Bicycle Surcharge (included with Vehicle)" <<  setw(COL_SPACE_WIDTH) << " " << setw(COL_PRICE_WIDTH) << " $4.00" << endl;

  // Using functions separate data from display
  // printFareTableRow("  Fare Description", "  Ticket");
  // printFareTableRow("--------------------------------------", "--------");
  // printFareTableRow("Vehicle Under 14' (less than 168\") & Driver" , " $57.90");
  // printFareTableRow("Adult (age 19 - 64)", " $14.95");
  // printFareTableRow("Senior (age 65 & over) / Disability", " $7.40" );
  // printFareTableRow("Youth (age 6 - 18) ", " $5.55");
  // printFareTableRow("Bicycle Surcharge (included with Vehicle)", " $4.00");
}


void printFareTableRow(string description, string price) {
  const int COL_DESCRIPTION_WIDTH = 43;
  const int COL_SPACE_WIDTH = 20;
  const int COL_PRICE_WIDTH = 8;

  cout << setw(COL_DESCRIPTION_WIDTH) << left << description;
  cout <<  setw(COL_SPACE_WIDTH) << " ";
  cout << setw(COL_PRICE_WIDTH) << price << endl;
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
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): y

How many adults? 2
How many seniors? 1
How many youths? 0

Your total charge is $95.20

If you spend $4.80 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!

*/
