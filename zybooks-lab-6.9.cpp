// Forms often allow a user to enter an integer. 
// Write a program that takes in a string representing an integer as input, 
// and outputs Yes if every character is a digit 0-9.

// Ex: If the input is:
// 1995
// the output is:
// Yes

// Ex: If the input is:
// 42,000
// or
// 1995!
// the output is:
// No

// Hint: Use a loop and the isdigit() function (don't forget to include the cctype library).

// g++ zybooks-lab-6.9.cpp && for n in 1995 42,000 '1995!'; do ./a.out < <(echo $n); echo; done && rm ./a.out

#include <iostream>
#include <string>
#include <cctype>
// https://en.cppreference.com/w/cpp/header/cctype.html
// https://en.cppreference.com/w/cpp/string/byte/isdigit.html

using namespace std;

int main() {

    string s = "";
    cin >> s;

    bool allDigits = true;

    for(int i = 0; i < s.size() && allDigits; i++) {
        allDigits = isdigit(s[i]);
    }

    cout << (allDigits ? "Yes" : "No") << endl;
}

