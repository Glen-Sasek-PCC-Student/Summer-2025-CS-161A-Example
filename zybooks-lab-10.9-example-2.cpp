// 10.9 C++ LAB: Remove spaces - functions
// Write a program that removes all spaces from the given input. 
// You may assume that the input string will not exceed 50 characters.

// Hello my name is John.
// HellomynameisJohn.

// Your program must define and call the following function. userString is the user specified string. 
// The function assigns userStringNoSpaces with the user specified string without spaces.
// void RemoveSpaces(char userString[], char userStringNoSpaces[])

// Note: You must go through a for loop and check each character and copy to the new char array if it is not a space. At the end do not forget to append the null character '\0' to the last position, so the c-string will be a complete null-terminated string


// g++ zybooks-lab-10.9-example-2.cpp && ./a.out <<< Hello my name is John. && rm ./a.out

#include <iostream>
#include <cstring>
using namespace std;

void RemoveSpaces(char userString[], char userStringNoSpaces []);

void RemoveSpaces(char userString[], char userStringNoSpaces[]){
   int i;
   int spacesRemoved = 0;
   for(i = 0; i < strlen(userString); i++){
      if(userString[i] != ' '){ 
         userStringNoSpaces[i - spacesRemoved] = userString[i];
      } else  {
        spacesRemoved++;
      }
   }
   userStringNoSpaces[strlen(userString)] = '\0';
}
int main() {

   char userString[50] = {0};
   char userStringNoSpaces[50] = {0};
   
   cin.getline(userString, 50);
   RemoveSpaces(userString, userStringNoSpaces);
   cout << userString << endl;
   cout << userStringNoSpaces << endl;

   return 0;
}