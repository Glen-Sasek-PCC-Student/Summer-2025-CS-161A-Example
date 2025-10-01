#include <iostream>
#include <cstring>
using namespace std;

int main() {
   const int MAX_CHARS = 50;
   
   bool next = true;
   while(next) {
      char s[MAX_CHARS];
      cin.getline(s, MAX_CHARS);
      next = strcmp(s, "Quit") != 0;
      next = next && strcmp(s, "quit") != 0;
      next = next && strcmp(s, "q") != 0;
      if(next) {
         for(long unsigned int i = strlen(s); i > 0; i--) {
            cout << s[i-1];
         }
         cout << endl;
      }
   }

   return 0;
}
