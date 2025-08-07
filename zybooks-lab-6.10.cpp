// Write a program that removes all non alpha characters from the given input.

// Ex: If the input is:

// -Hello, 1 world$!
// the output is:

// Helloworld

 // g++ zybooks-lab-6.10.cpp && ./a.out < <(echo '-Hello, 1 world$!') && rm ./a.out

#include <iostream>
#include <string>
#include <cctype>
// https://en.cppreference.com/w/cpp/header/cctype.html
// https://en.cppreference.com/w/cpp/string/byte/isalpha.html

using namespace std;

int main() {

    string s = "";

    // https://en.cppreference.com/w/cpp/string/basic_string/getline.html
    getline(cin, s);

    // Easy
    // for(int i = 0; i < s.size(); i++) {
    //     char c = s.at(i);
    //     if(isalpha(c)) {
    //         cout << c;
    //     }
    // }
    // cout << endl;

    // Medium
    // string result = "";
    // for(int i = 0; i < s.size(); i++) {
    //     char c = s.at(i);
    //     if(isalpha(c)) {
    //         result = result + c; // https://en.cppreference.com/w/cpp/string/basic_string/operator%2B
    //     }
    // }
    // cout << result << endl;

    // Using string erase
    // In place, no additional memory used.
    for(int i = 0; i < s.size();) {
        if(isalpha(s.at(i))) {
           i++; // Only increment if alpha
        } else {
            s.erase(i, 1);
        }
    }
    cout << s << endl;
    
}