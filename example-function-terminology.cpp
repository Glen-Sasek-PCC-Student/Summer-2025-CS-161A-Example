#include <iostream>
#include "gs-utils.h"

using namespace std;


// PASS BY VALUE SEMANTICS: THE VALUE IS COPIED

// PASS BY REFERENCE SEMANTICS: REFERENCE TO ORIGINAL VALUE


// FUNCTION DECLARATIONS: ABOVE MAIN (Or in .h file)

// FUNCTION DECLARTION, PROTOTYPE, HEADER, INTERFACE, SIGNATURE

// [return type]   [name]   [formal parameters (type OPTIONAL name), ...]  [SEMICOLON]
// void            welcome  ()                                             ;
// DESCRIPTION: Say Hello, Greet user
void welcome();

// [return type]   [name]          [formal parameters (type OPTIONAL name), ...]  [SEMICOLON]
// void            printByValue    (string s)                                      ;
// DESCRIPTION: Print the string to the console                             
void printByValue(string s);

// [return type]   [name]              [formal parameters (type & OPTIONAL name), ...]  [SEMICOLON]
// void            printByReference    (string s)                                      ;
// DESCRIPTION: Print the string to the console                             
void printByReference(string &s);


void carWashByValue(string car); // by value
void carWashByReference(string &car); // by reference


int main() {

    //FUNCION CALL
    // [function name]   [parameters]  [SEMICOLON]
    // welcome           ()            ;
    welcome();

    //FUNCION CALL BY VALUE
    // [function name]   [actual parameters]  [SEMICOLON]
    // print             ("HOT TODAY !!!\n")   
    string hot_today = "HOT TODAY !!!\n";

    printByReference(hot_today);
    cout << hot_today;

    printByValue(hot_today);
    cout << hot_today;


    string car = "DIRTY :(";
    cout << "CAR IS: " << car << endl;

    carWashByValue(car);
    cout << "CAR IS: " << car << endl;

    carWashByReference(car);
    cout << "CAR IS: " << car << endl;



    int x = getInt("GIMMIE an INT: ");
    cout << endl << "GOT IT: " << x << endl;


    x = getInt("PARDON ME, DO YOu HAVE AN INT PLEASE?: ", "UM that wasn't an int was it?????\n");
    cout << endl << "GOT IT: " << x << endl;

}


// FUNCTION IMPLEMENTATIONS: AFTER MAIN (Or in .h or .cpp file)

// FUNCTION IMPLEMENTATION:
// 1. Replace semicolon with basic block ; -> {}
// 2. Add content to block.

// [return type]   [name]   [actual parameters (type name), ...]  [SEMICOLON]
// void            welcome  ()                                     ;
// DESCRIPTION: Say Hello, Greet user
void welcome() {
    cout << "Hello, World!" << endl;
}


// [return type]   [name]   [actual parameters string s]  [SEMICOLON]
// void            print    (string s)                                      ;
// DESCRIPTION: Print the string to the console                             
void printByValue(string s) {
    s = "COLD TODAY ~~~~~\n";
    cout << s;
}

void printByReference(string & s) {
    s = "COLD TODAY ~~~~~\n";
    cout << s;
}

void carWashByValue(string car){
    cout << "BY VALUE WASHING COPY OF CAR " << endl;
    car = "clean";
}

void carWashByReference(string &car) {
    cout << "BY VALUE WASHING ACTUAL CAR " << endl;
    car = "clean";
}






