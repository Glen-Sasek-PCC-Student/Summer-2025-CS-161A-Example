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

// COMPILE AND RUN TESTS
// g++ main.cpp && for x in test*; do ./a.out < $x; done; rm ./a.out

#include <iostream>
#include <string>
#include <limits>

using namespace std;

// FUNCTION PROTOYPES

// Welcome message (void function)
void welcome();
void instructions();
void bye();

// A function called int readInt(string prompt); 
// This function should be used any time you read any integers from the user. 
// Use this function to read the number of Assignments from the user.
int readInt(string prompt);

// A function called double readScore(string prompt); to read all the scores from the user. 
// Any time you read a score you must call this function. 
// The function must do data validation to make sure it is a numeric value, 
// and that it is within the range of 0 to 4 inclusive.
double readScore(string prompt);

// A function called double assignAverage(int numAssigns); 
// to read the Assignment scores from the user. 
// This function must call readScore every time you read an Assignment score. 
// You must use a for loop to do this. 
// Then calculate and return the average score.
double assignAverage(int numAssigns);

// A function called double calcFinalScore(double assignAvg, double midterm, double final); 
// that takes the Assignment average score, the midterm score and the final exam score, 
// and calculates the final numerical score based on the appropriate weights for assignments and exams. 
// The assignments are weighted at 60%, the midterm and final exams are weighted at 20% each.
double calcGradeScore(double averageAssignmentScore, double midtermExamScore, double finalExamScore);

// A function called char calcLetterGrade(double finalScore); 
// that takes the finalScore and returns a letter grade. 
// Print the letter grade in main().
char calcLetterGrade(double gradeScore);



int main() {
 

  //   Welcome to my Final Grade Calculator!
  welcome();


  // Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
  // The number of assignments must be between 0 and 10.
  // All scores entered must be between 0 and 4.
  instructions();

  int numberOfAssignments = 0;
  double averageAssignmentScore = 0.0;
  double midtermExamScore = 0.0;
  double finalExamScore = 0.0;

  // Enter the number of assignments (0 to 10): 6
  numberOfAssignments = readInt("Enter the number of assignments (0 to 10): ");

  // Enter score 1: 3.4 
  // Enter score 2: 4 
  // Enter score 3: 2.5 
  // Enter score 4: 3.3
  // Enter score 5: 3.1
  // Enter score 6: 2.5
  averageAssignmentScore = assignAverage(numberOfAssignments);

  // Read the midterm exam score and the final exam score in main() by calling the readScore() function.
  // Enter your midterm exam score: 3.5
  midtermExamScore = readScore("Enter your midterm exam score: ");

  // Enter your final exam score: 4
  finalExamScore = readScore("Enter your final exam score: ");

  double gradeScore = calcGradeScore(averageAssignmentScore, midtermExamScore, finalExamScore);
  
  // Your Final Numeric score is 3.4
  cout << "Your Final Numeric score is " << gradeScore << endl;
   
  char grade = '\0';
  grade = calcLetterGrade(gradeScore);

  // Your Final Grade is A
  cout << "Your Final Grade is " << grade << endl;

  // Thank you for using my Grade Calculator!
  bye();
  return 0;
}






// FUNCTION IMPLEMENTATIONS
// Welcome message (void function)
void welcome() {
  cout << "Welcome to my Final Grade Calculator!" << endl;
}

void instructions() {
  // Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
  // The number of assignments must be between 0 and 10.
  // All scores entered must be between 0 and 4.
  cout << "Please enter the following information..." << endl;
  cout << "I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
  cout << "The number of assignments must be between 0 and 10." << endl;
  cout << "All scores entered must be between 0 and 4." << endl;
}

// A function called int readInt(string prompt); 
// This function should be used any time you read any integers from the user. 
// Use this function to read the number of Assignments from the user.
int readInt(string prompt) {
  int n = 42; // For testing: UPDATE!
  cout << "TODO: int readInt(string prompt)" << endl;
  // Hint see gs-utils.h
  // https://github.com/Glen-Sasek-PCC-Instructor/Summer-2025-CS-161A-Example/blob/main/gs-utils.h  
  return n;
}

// A function called double readScore(string prompt); to read all the scores from the user. 
// Any time you read a score you must call this function. 
// The function must do data validation to make sure it is a numeric value, 
// and that it is within the range of 0 to 4 inclusive.
double readScore(string prompt) {
  double n = 0.0;
  cout << prompt; // For testing, you may want to move or remove this line
  cout << "TODO: double readScore(string prompt)" << endl;
  // Hint see gs-utils.h
  // https://github.com/Glen-Sasek-PCC-Instructor/Summer-2025-CS-161A-Example/blob/main/gs-utils.h
  return n;
}

// A function called double assignAverage(int numAssigns); 
// to read the Assignment scores from the user. 
// This function must call readScore every time you read an Assignment score. 
// You must use a for loop to do this. 
// Then calculate and return the average score.
double assignAverage(int numAssigns) {
  double average = 0.0;
  double sum = 0.0;
  // Enter score 1: 3.4 
  // Enter score 2: 4 
  // Enter score 3: 2.5 
  // Enter score 4: 3.3
  // Enter score 5: 3.1
  // Enter score 6: 2.5
  for(int i = 1; i <= numAssigns; i++) {
    // https://en.cppreference.com/w/cpp/string/basic_string/to_string
    string prompt = "Enter score " + to_string(i) + ": " ;
    sum = sum + readScore(prompt);
  }

  average = sum / numAssigns;
  return average;
}

// A function called double calcFinalScore(double assignAvg, double midterm, double final); 
// that takes the Assignment average score, the midterm score and the final exam score, 
// and calculates the final numerical score based on the appropriate weights for assignments and exams. 
// The assignments are weighted at 60%, the midterm and final exams are weighted at 20% each.
double calcGradeScore(double a, double m, double f) {
  double gradeScore = 0.0;
  const double ASSIGNMENT_WEIGHT = 0.60;
  const double EXAM_WEIGHT = 0.20;

  cout << "TODO: double calcFinalScore(double assignAvg, double midterm, double final)" << endl;
  return gradeScore;
}

// A function called char calcLetterGrade(double finalScore); 
// that takes the finalScore and returns a letter grade. 
// Print the letter grade in main().
char calcLetterGrade(double finalScore) {
  char c = '\0';
  // Hint use switch
  cout << "TODO: char calcLetterGrade(double finalScore)" << endl;
  return c;
}

void bye() {
  cout << "Thank you for using my Grade Calculator!" << endl;
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
Letter Grade	4.0 Score	Level
A	>=3.3 <= 4.0	Exceeds
B	>=2.8 < 3.3	Meets
C	>=2.0 < 2.8	Approaching
D	>=1.2 < 2.0	Not Yet
F	0.0 < 1.2	No Evidence


D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 6
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 3.3
Enter score 5: 3.1
Enter score 6: 2.5
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.4
Your Final Grade is A
Thank you for using my Grade Calculator!


Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 3
Enter score 1: 3 
Enter score 2: 4 
Enter score 3: 2.5 
Enter your midterm exam score: 2.5
Enter your final exam score: 2
Your Final Numeric score is 2.8
Your Final Grade is B
Thank you for using my Grade Calculator!


Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 12
Illegal Value! Please try again!!
Enter the number of assignments (0 to 10): 5
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 5.5
Illegal Score! Please try again!
Enter score 4: 3.5
Enter score 5: 3.1
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.5
Your Final Grade is A
Thank you for using my Grade Calculator!

*/
