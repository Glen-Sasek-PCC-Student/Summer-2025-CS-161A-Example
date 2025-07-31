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
#include <cmath>
// https://en.cppreference.com/w/cpp/header/cmath.html
// for:
// https://en.cppreference.com/w/cpp/numeric/math/ceil.html


#include <cctype>
// https://en.cppreference.com/w/cpp/header/cctype.html
// for:
// https://en.cppreference.com/w/cpp/string/byte/tolower.html

#include <iomanip>
// For setprecision
// https://en.cppreference.com/w/cpp/header/iomanip.html

using namespace std;

const bool debug = true;


// Compile and test
// g++ main.cpp && ./a.out < test.txt && rm ./a.out
int main() {
  const float SALES_TAX = 0.07;
  const float DELIVERY_CHARGE = 0.20;
  const int SLICES_PER_PIZZA = 8;

  // TOTALS
  int total_entries = 0;
  int total_pizzas = 0;
  int max_people = 0;
  float max_cost_USD = 0.0;

  // EACH ENTRY
  // INPUTS
  int people = 0;
  float slices_per_person = 0.0;
  float USD_per_pizza = 0.0;

  cout << "Welcome to my Pizza Party Statistics program!" << endl;

  bool has_next = true;
  while (has_next) {
    // do stuff
    cout << endl;
    cout << "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: ";

    // OPTIONAL: VALIDATE INPUT, numbers not characters, etc...
    cin >> people;
    cin >> slices_per_person;
    cin >> USD_per_pizza;

    // DEBUG ECHO INPUT
    if(debug) {
      cout << endl;
      cout << "people: " << people << endl;
      cout << "slices_per_person: " << slices_per_person << endl;
      cout << "USD_per_pizza:" << USD_per_pizza << endl;
    }    

    // CALCULATIONS
    // Number of pizzas: 4
    float slices = people * slices_per_person;
    float fractional_pizzas = slices / SLICES_PER_PIZZA;
    int pizzas = ceil(fractional_pizzas);

    // Cost of pizzas:  $42.00
    float pizzas_USD = pizzas * USD_per_pizza;
    // Example 4 PIZZA * 10.50 USD / [PER] 1 PIZZA

    // Tax:             $2.94
    float tax_USD = pizzas_USD * SALES_TAX;

    float pizzas_plus_tax_USD = pizzas_USD + tax_USD;

    // Delivery:        $8.99
    float delivery_USD = pizzas_plus_tax_USD * DELIVERY_CHARGE;

    // Total Cost:      $53.93
    float cost_USD = pizzas_plus_tax_USD + delivery_USD;

    cout << endl;
    cout << fixed << setprecision(2);
    cout << setw(18) << left << "Number of pizzas:"  << setw(8) << right  << pizzas << endl;
    cout << setw(18) << left << "Cost of pizzas:" << "$" << setw(7) << right << pizzas_USD << endl;
    cout << setw(18) << left << "Tax:" <<            "$"<< setw(7) << right << tax_USD << endl;
    cout << setw(18) << left << "Delivery:" <<       "$" << setw(7) << right << delivery_USD << endl;
    cout << setw(18) << left << "Total Cost:" <<     "$" << setw(7) << right << cost_USD << endl;

    // AFTER EACH ENTRY
    // Maximum number of people: 14
    max_people = max(max_people, people); // https://en.cppreference.com/w/cpp/algorithm/max.html

    // Maximum cost of pizzas: $115.17
    max_cost_USD = max(max_cost_USD, cost_USD);

    // Increment entries count
    total_entries++;

    // SUM PIZZAS
    total_pizzas = total_pizzas + pizzas;

    // AGAIN ?
    char y_or_n = '\0'; // Null character '\0'
    // ASCII TABLE: https://chatgpt.com/share/68794aa0-be34-8013-954c-afa8b9f53e34

    cout << "Do you want to enter more [y/n]: ";
    cin >> y_or_n;
    y_or_n = tolower(y_or_n);
    has_next = y_or_n == 'y';
    cout << endl;
  }

  // AFTER ALL ENTRIES
  // Average number of pizzas: 4.3
  float average_pizzas = static_cast<float>(total_pizzas) / total_entries;

  cout << endl;
  cout << fixed;
  cout << "Number of entries: " << total_entries << endl;
  cout << "Total number of pizzas: " << total_pizzas << endl;

  cout << setprecision(1);
  cout << "Average number of pizzas: " << average_pizzas << endl;

  cout << "Maximum number of people: " << max_people << endl;

  cout << setprecision(2);
  cout << "Maximum cost of pizzas: $" << max_cost_USD << endl;

  cout << endl;
  cout << "Thank you for using my program!" << endl;

  return 0;
}

// ------------- DESIGN -------------
/*
Program Name:

Program Description:

Design:
A. INPUT
int people = 0;
float slices_per_person = 0.0;
float cost_per_pizza_USD = 0.0;

B. OUTPUT
Define the output variables including data types.

C. CALCULATIONS
const float SALES_TAX = 0.07;
const float DELIVERY_CHARGE = 0.20;
const int SLICES_PER_PIZZA = 8;

// TOTALS
int total_entries = 0;
int total_pizzas = 0;

// EACH ENTRY
// INPUTS
int people = 0;
float slices_per_person = 0.0;
float USD_per_pizza = 0.0;

// CALCULATIONS
// Number of pizzas: 4
float slices = people * slices_per_person;
float fractional_pizzas = slices / SLICES_PER_PIZZA;
int pizzas = ceil(fractional_pizzas);

// Cost of pizzas:  $42.00
float pizzas_USD = pizzas * USD_per_pizza;  Example 4 PIZZA * 10.50 USD /[PER] 1 PIZZA

// Tax:             $2.94
float tax_USD = pizzas_USD * SALES_TAX;

float pizzas_plus_tax_USD = pizzas_USD + tax_USD;

// Delivery:        $8.99
float delivery_USD = pizzas_plus_tax_USD * DELIVERY_CHARGE;

// Total Cost:      $53.93
float cost_USD = pizzas_plus_tax_USD + delivery_USD;


// AFTER EACH ENTRY
// Maximum number of people: 14
int max_people = max(max_people, people);

// Maximum cost of pizzas: $115.17
float max_cost_USD = max(max_cost_USD, cost_USD);

// Increment entries count
total_entries++;

// SUM PIZZAS
total_pizzas = total_pizzas + pizzas;


// AFTER ALL ENTRIES
// Average number of pizzas: 4.3
float average_pizzas = static_cast<float>(total_pizzas) / total_entries;


D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts.
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs.
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Welcome to my Pizza Party Statistics program!

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 10  2.6  10.50

Number of pizzas: 4
Cost of pizzas:  $42.00
Tax:             $2.94
Delivery:        $8.99
Total Cost:      $53.93

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 9   2.5   10.95

Number of pizzas: 3
Cost of pizzas:  $32.85
Tax:             $2.30
Delivery:        $7.03
Total Cost:      $42.18

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 14   3.2   14.95

Number of pizzas: 6
Cost of pizzas:  $89.70
Tax:             $6.28
Delivery:        $19.20
Total Cost:      $115.17

Do you want to enter more (y/n): n

Number of entries: 3
Total number of pizzas: 13
Average number of pizzas: 4.3
Maximum number of people: 14
Maximum cost of pizzas: $115.17

Thank you for using my program!

*/
