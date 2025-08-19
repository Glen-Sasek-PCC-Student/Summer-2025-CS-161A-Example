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
#include <limits>
#include "gs-utils.h" // optional example of including a file

using namespace std;

// Welcome message (void function)
void welcome();
void instructions();
void bye();

// A function called int readInt(string prompt); 
// This function should be used any time you read any integers from the user. 
// Use this function to read the number of Assignments from the user.
int readInt(string prompt);

// to read all the scores from the user. Any time you read a score you must call this function. 
// The function must do data validation to make sure it is a numeric value, 
// and that it is within the range of 0 to 4 inclusive.
void readScore(string prompt, double &num);

// to read the Assignment scores from the user. 
// This function must call readScore every time you read an Assignment score. 
// You must use a for loop to do this. 
// Then calculate and return the average score.
double assignAverage(int numAssigns);

// that calls the readScore() function and reads the 2 exam scores.
void getInput(double &midtermScore, double &finalExamScore);

// A function called double calcFinalScore(double assignAvg, double midterm, double final); 
// that takes the Assignment average score, the midterm score and the final exam score, 
// and calculates the final numerical score based on the appropriate weights for assignments and exams. 
// The assignments are weighted at 60%, the midterm and final exams are weighted at 20% each.
double calcGradeScore(double averageAssignmentScore, double midtermExamScore, double finalExamScore);

// that takes the finalScore by value and a character 
// for the letter grade by reference. 
// Print the letter grade in main().
void calcLetterGrade(double finalScore, char &letter);


int main() {
  //   Welcome to my Final Grade Calculator!
  welcome();

  // Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
  // The number of assignments must be between 0 and 10.
  // All scores entered must be between 0 and 4.
  instructions();

  const int MAX_NUMBER_OF_ASSIGNMENTS = 10;
  const int MIN_NUMBER_OF_ASSIGNMENTS = 0;

  int numberOfAssignments = 0;
  double averageAssignmentScore = 0.0;
  double midtermExamScore = 0.0;
  double finalExamScore = 0.0;

  // Enter the number of assignments (0 to 10): 6
  bool validNumberOfAssignments = false;
  do {
    numberOfAssignments = readInt("Enter the number of assignments (0 to 10): ");
    validNumberOfAssignments = numberOfAssignments >= MIN_NUMBER_OF_ASSIGNMENTS && numberOfAssignments <= MAX_NUMBER_OF_ASSIGNMENTS;
    if(!validNumberOfAssignments) {
      cout << "ERROR, bad number of assignments: " << numberOfAssignments << endl;
    }
  } while (!validNumberOfAssignments);

  // Enter score 1: 3.4 
  // Enter score 2: 4 
  // Enter score 3: 2.5 
  // Enter score 4: 3.3
  // Enter score 5: 3.1
  // Enter score 6: 2.5
  averageAssignmentScore = assignAverage(numberOfAssignments);

  // Assignment 7 Version replaced by void getInput(double &midtermScore, double &finalExamScore);
  // // Read the midterm exam score and the final exam score in main() by calling the readScore() function.
  // // Enter your midterm exam score: 3.5
  // midtermExamScore = readScore("Enter your midterm exam score: ");

  // // Enter your final exam score: 4
  // finalExamScore = readScore("Enter your final exam score: ");

  getInput(midtermExamScore, finalExamScore);

  double gradeScore = calcGradeScore(averageAssignmentScore, midtermExamScore, finalExamScore);
  
  // Your Final Numeric score is 3.4
  cout << "Your Final Numeric score is " << gradeScore << endl;
   
  char grade = '\0';
  // Assignment 7 version
  // grade = calcLetterGrade(gradeScore);
  calcLetterGrade(gradeScore, grade);

  // Your Final Grade is A
  cout << "Your Final Grade is " << grade << endl;

  // Thank you for using my Grade Calculator!
  bye();
  return 0;
}

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

void bye() {
  cout << "Thank you for using my Grade Calculator!" << endl;
}


// A function called int readInt(string prompt); 
// This function should be used any time you read any integers from the user. 
// Use this function to read the number of Assignments from the user.
int readInt(string prompt) {
  // int n = 42; // For testing: UPDATE!
  // cout << "TODO: int readInt(string prompt)" << endl;
  // Hint see gs-utils.h
  // https://github.com/Glen-Sasek-PCC-Instructor/Summer-2025-CS-161A-Example/blob/main/gs-utils.h  
  return getInt(prompt);
}


// A function called double readScore(string prompt); to read all the scores from the user. 
// Any time you read a score you must call this function. 
// The function must do data validation to make sure it is a numeric value, 
// and that it is within the range of 0 to 4 inclusive.

// double readScore(string prompt) { // Assignment 7 function
void readScore(string prompt, double &n) {
  // cout << prompt; // For testing, you may want to move or remove this line
  // cout << "TODO: double readScore(string prompt)" << endl;
  // Hint see gs-utils.h
  // https://github.com/Glen-Sasek-PCC-Instructor/Summer-2025-CS-161A-Example/blob/main/gs-utils.h
  n = 0.0;
  bool valid = false;
  while(!valid) {
    if(prompt.size() > 0) {
        cout << prompt;
    }
    cin >> n;
    if(cin){
        valid = true;
    } else {
        cin.clear();
        // https://en.cppreference.com/w/cpp/header/limits.html
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // https://en.cppreference.com/w/cpp/types/numeric_limits.html
        // https://en.cppreference.com/w/cpp/io/streamsize.html
        // https://en.cppreference.com/w/cpp/types/numeric_limits/max.html
    }
  }
}

// A function called double assignAverage(int numAssigns); 
// to read the Assignment scores from the user. 
// This function must call readScore every time you read an Assignment score. 
// You must use a for loop to do this. 
// Then calculate and return the average score.
double assignAverage(int numAssigns) {
  double average = 0.0;
  double sum = 0.0;
  const double MAX_SCORE = 4.0;
  const double MIN_SCORE = 0.0;
  // Enter score 1: 3.4 
  // Enter score 2: 4 
  // Enter score 3: 2.5 
  // Enter score 4: 3.3
  // Enter score 5: 3.1
  // Enter score 6: 2.5
  for(int i = 1; i <= numAssigns; i++) {
    // https://en.cppreference.com/w/cpp/string/basic_string/to_string
    string prompt = "Enter score " + to_string(i) + ": " ;
    double d = 0.0;
    do {
      readScore(prompt, d);
    } while (d < MIN_SCORE || d > MAX_SCORE);
    sum = sum + d;
  }

  average = sum / numAssigns;
  return average;
}

// that calls the readScore() function and reads the 2 exam scores.
void getInput(double &midtermExamScore, double &finalExamScore) {
  // Enter your midterm exam score: 3.5
  const double MAX_SCORE = 4.0;
  const double MIN_SCORE = 0.0;
  do {
    readScore("Enter your midterm exam score: ", midtermExamScore);
  } while (midtermExamScore < MIN_SCORE || midtermExamScore > MAX_SCORE);

  // Enter your final exam score: 4
  do {
    readScore("Enter your final exam score: ", finalExamScore);
  } while (finalExamScore < MIN_SCORE || finalExamScore > MAX_SCORE);
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

// char calcLetterGrade(double finalScore) { // Assignment 7 function
void calcLetterGrade(double finalScore, char &c) {
  c = '\0';
  // Hint use switch
  cout << "TODO: char calcLetterGrade(double finalScore)" << endl;
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
