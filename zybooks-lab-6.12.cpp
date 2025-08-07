// Write a program that takes in a line of text as input, and outputs that line of text in reverse. 
// The program repeats, ending when the user enters "Done", "done", or "d" for the line of text.

// Ex: If the input is:

// Hello there
// Hey
// done
// then the output is:

// ereht olleH
// yeH

// g++ zybooks-lab-6.12.cpp && ./a.out < <(echo 'Hello there'; echo 'Hey'; echo 'done') && rm ./a.out
#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "";

    bool next = true;

    while(next) {

        // https://en.cppreference.com/w/cpp/string/basic_string/getline.html
        getline(cin, s);

        if(s == "d"
           or
           s == "Done"
           or
           s == "done"){
            next = false;
        } else {

            for(int i = s.size() - 1; i >= 0; i--) {
                cout << s[i];
            }

            cout << endl;
        }
    }

}