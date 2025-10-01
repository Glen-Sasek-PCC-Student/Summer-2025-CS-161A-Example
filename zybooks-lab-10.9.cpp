// 10.9 C++ LAB: Remove spaces - functions
// Write a program that removes all spaces from the given input. You may assume that the input string will not exceed 50 characters.
//
// Ex: If the input is:
//
// Hello my name is John.
// the output is:
//
// HellomynameisJohn.
//
// Your program must define and call the following function. userString is the user specified string. 
// The function assigns userStringNoSpaces with the user specified string without spaces.
// void RemoveSpaces(char userString[], char userStringNoSpaces[])

// Note: You must go through a for loop and check each character and copy to the new char array if it is not a space. 
// At the end do not forget to append the null character '\0' to the last position, so the c-string will be a complete null-terminated string.

#include <iostream>
#include <cstring>
using namespace std;

const int MAX_CHARACTERS = 50;

// Your program must define and call the following function. userString is the user specified string. 
// The function assigns userStringNoSpaces with the user specified string without spaces.
void RemoveSpaces(char userString[], char userStringNoSpaces[]);

int main() {

   /* Type your code here. */
   char beforeString[MAX_CHARACTERS + 1] = {};
   char afterString[MAX_CHARACTERS + 1] = {};
   // https://en.cppreference.com/w/cpp/io/basic_istream/getline.html
   cin.getline(beforeString, MAX_CHARACTERS);

   RemoveSpaces(beforeString, afterString);
   cout << afterString << endl;

   return 0;
}

void RemoveSpaces(char userString[], char userStringNoSpaces[]) {
    for(int i = 0; i < strlen(userString); i++) {
        if(userString[i] != ' ') {
            strncat(userStringNoSpaces, userString + i, 1);
        }
    }

    // Avoids strncat requires extra variable.
    // int copyCount = 0;
    // for(int i = 0; i < strlen(userString); i++) {
    //     char c = userString[i];
    //     if(c != ' ') {
    //         // strncat(userStringNoSpaces, userString + i, 1);
    //         userStringNoSpaces[copyCount] = c;
    //         copyCount++;
    //     }
    // }
}