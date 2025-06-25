// ------------- FILE HEADER -------------
// Author: Glen Sasek
// Assignment: 1
// Date: June 24
// Description: Payroll
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 1
// Participation: 0%
// Challenge: 0%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: y
// B. OUTPUT [yes/no]: y
// C. CALCULATIONS [yes/no]: y
// D. LOGIC and ALGORITHMS [yes/no]: y
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: Yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <string>

using namespace std;

const string MESSAGE_WELCOME = "Welcome to my Weekly Payroll program!!";
const string MESSAGE_PAYROLL_SUMMARY = "Your Payroll Summary:";
const string MESSAGE_GOODBYE = "Thank you for using my Weekly Payroll program!!";

const string PROMPT_EMPLOYEE_ID = "Enter your employee ID number (numbers only): ";
const string PROMPT_HOURS_WORKED = "Enter number of hours worked (whole numbers): ";
const string PROMPT_HOURLY_RATE = "Enter the hourly rate: ";
const string PROMPT_FEDERAL_WITHOLDING_RATE = "Enter the federal withholding rate: ";

const string LABEL_GROSS_PAY = "Total Gross Pay: $";
const string LABEL_FEDERAL_TAX_WITHOLDING = "Federal Tax Withholding: $";
const string LABEL_NET_PAY = "Net Pay: $";

// Run Test 1 Command
// g++ *.cpp && ./a.out < test-1.txt && rm ./a.out

// Run Test 2 Command
// g++ *.cpp && ./a.out < test-2.txt && rm ./a.out
int main() {
  cout << MESSAGE_WELCOME << endl;

  int employee_id = 0;
  int hours_worked = 0;
  int hourly_rate = 0;
  int federal_withholding_rate = 0;

  cout << endl;
  cout << PROMPT_EMPLOYEE_ID;
  cin >> employee_id;

  cout << PROMPT_HOURS_WORKED;
  cin >> hours_worked;

  cout << PROMPT_HOURLY_RATE;
  cin >> hourly_rate;

  cout << PROMPT_FEDERAL_WITHOLDING_RATE;
  cin >> federal_withholding_rate;

  int total_gross_pay = 0;
  int federal_tax_witholding = 0;
  int net_pay = 0;

  total_gross_pay = hours_worked * hourly_rate;
  federal_tax_witholding = total_gross_pay * (federal_withholding_rate / 100.0);
  net_pay = total_gross_pay - federal_tax_witholding;

  cout << endl;
  cout << MESSAGE_PAYROLL_SUMMARY << endl;
  cout << LABEL_GROSS_PAY << total_gross_pay << endl;
  cout << LABEL_FEDERAL_TAX_WITHOLDING << federal_tax_witholding << endl;
  cout << LABEL_NET_PAY << net_pay << endl;

  cout << endl;
  cout << MESSAGE_GOODBYE << endl;

  return 0;
}


// ------------- DESIGN -------------
/* 

Program Name: Weekly Payroll

Program Description: Calculate pay and taxes 

Design:
A. INPUT
Read the employee ID number (an int) from the user
int employee_id = 0;

Read the number of hours worked (an int) from the user
int hours_worked = 0;

Read the hourly rate (an int) from the user
int hourly_rate = 0;

Read the federal withholding rate (an int, e.g., 10)
int federal_withholding_rate = 0;

B. OUTPUT
Output the following::
-Total Gross Pay
int total_gross_pay = 0;

-Federal Tax Withholding
int federal_tax_witholding = 0;

-Net Pay
int net_pay = 0;

C. CALCULATIONS
Your program should calculate the total gross pay, the Income Tax Withholding, and the net pay.

First calculate the total gross pay from the hours worked and the hourly rate inputs.
total_gross_pay = hours_worked * hourly_rate;

Then calculate the Federal Tax withholding using the gross pay and the federal withholding rate.
federal_tax_witholding = total_gross_pay * (federal_withholding_rate / 100.0);

Then calculate the Net Pay by subtracting the federal tax withholding from the gross pay.
net_pay = total_gross_pay - federal_tax_witholding;

D. LOGIC and ALGORITHMS
MESSAGE "Welcome to my Weekly Payroll program!!"

PROMPT "Enter your employee ID number (numbers only): "
INPUT employee_id

PROMPT "Enter number of hours worked (whole numbers): "
INPUT hours_worked

PROMPT "Enter the hourly rate: "
INPUT hourly_rate

PROMPT "Enter the federal withholding rate: "
INPUT federal_withholding_rate

DO CALCULATIONS

MESSAGE "Your Payroll Summary:"

LABEL "Total Gross Pay: "
DATA total_gross_pay

LABEL "Federal Tax Withholding: "
DATA federal_tax_witholding

LABEL "Net Pay: "
DATA net_pay

MESSAGE "Thank you for using my Weekly Payroll program!!"



SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!


Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!

*/