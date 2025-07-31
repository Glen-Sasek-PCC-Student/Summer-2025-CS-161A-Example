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

using namespace std;

int main()
{
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
  float pizzas_USD = pizzas * USD_per_pizza;
  // Example 4 PIZZA * 10.50 USD / [PER] 1 PIZZA

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
