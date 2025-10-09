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

// TEST
// g++ example-1.cpp && for x in test*; do ./a.out < $x; done; rm ./a.out

// ------------- CODE -------------
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>
#include "lang-en.h"

using namespace std;

const int MAX_PASSENGERS = 20;

const float EARN_FREE_TICKET_MIN = 100.0;

const float FARE_VEHICLE_WITH_DRIVER_USD = 57.90;
const float FARE_ADULT_USD = 14.95;
const float FARE_SENIOR_USD = 7.40;
const float FARE_YOUTH_USD = 5.55;
const float FARE_BIKE_USD = 4.00;

// DECLARATION
void printFareTable();
void printFareTableRow(string description, string price);
void printFareTableRow(string description, float priceUSD);

int main() {
  cout << MESSAGE_WELCOME << endl;
  // FUNCTION CALL;
  printFareTable();

  char y_n = 'n';

  cout << PROMPT_VEHICLE_YES_NO;
  cin >> y_n;
  bool vehicle = tolower(y_n) == 'y';

  int adult_count = 0;
  int senior_count = 0;
  int youth_count = 0;
  int bike_count = 0;

  cout << PROMPT_ADULTS_COUNT;
  cin >> adult_count;

  cout << PROMPT_SENIORS_COUNT;
  cin >> senior_count;

  cout << PROMPT_YOUTHS_COUNT;
  cin >> youth_count;

  if(!vehicle) {
    cout << PROMPT_BIKES_COUNT;
    cin >> bike_count;
  }

  float fareUSD = vehicle ? FARE_VEHICLE_WITH_DRIVER_USD : 0.0;
  fareUSD += adult_count * FARE_ADULT_USD; 
  fareUSD += senior_count * FARE_SENIOR_USD;
  fareUSD += youth_count * FARE_YOUTH_USD;
  fareUSD += bike_count * FARE_BIKE_USD;

  if(adult_count + senior_count + youth_count > MAX_PASSENGERS) {
    cout << MESSAGE_MAX_PASSENGERS_EXCEEDED << endl;
  } else {
    cout << LABEL_CHARGE_USD << fareUSD << endl;

    if(fareUSD > EARN_FREE_TICKET_MIN) {
      cout << MESSAGE_CONGRATULATIONS_FREE_TICKET << endl;
    } else {
      float difference = EARN_FREE_TICKET_MIN - fareUSD;
      cout << MESSAGE_EARN_FREE_TRIP_1 << difference << MESSAGE_EARN_FREE_TRIP_2 << endl;
    }
  }
 
  cout << MESSAGE_THANK_YOU << endl;
  return 0;
}

// IMPLEMENTATION
void printFareTable() {

    printFareTableRow(FARE_HEADER_DESCRIPTION, FARE_HEADER_TICKET_USD);
    printFareTableRow(FARE_SPACER_DESCRIPTION, FARE_SPACER_TICKET);
    printFareTableRow(FARE_VEHICLE_WITH_DRIVER_DESCRIPTION, FARE_VEHICLE_WITH_DRIVER_USD);
    printFareTableRow(FARE_ADULT_DESCRIPTION, FARE_ADULT_USD);
    printFareTableRow(FARE_SENIOR_DESCRIPTION, FARE_SENIOR_USD);
    printFareTableRow(FARE_YOUTH_DESCRIPTION, FARE_YOUTH_USD);
    printFareTableRow(FARE_BIKE_DESCRIPTION, FARE_BIKE_USD);
}


void printFareTableRow(string description, string price) {
  const int COL_DESCRIPTION_WIDTH = 43;
  const int COL_SPACE_WIDTH = 20;
  const int COL_PRICE_WIDTH = 8;

  cout << fixed << setprecision(2);
  cout << setw(COL_DESCRIPTION_WIDTH) << left << description;
  cout << setw(COL_SPACE_WIDTH) << " ";
  cout << setw(COL_PRICE_WIDTH) << right << price << endl;
}

void printFareTableRow(string description, float priceUSD)  {
  stringstream strstream;
  strstream << " $" << fixed << setprecision(2) << priceUSD;
  printFareTableRow(description, strstream.str());
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
