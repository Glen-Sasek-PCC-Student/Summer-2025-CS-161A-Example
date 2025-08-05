// Write a program whose input is a character and a string, 
// and whose output indicates the number of times the character appears in the string. 
// The output should include the input character and 
// use the plural form, n's, 
// if the number of times the characters appears is not exactly 1.

// Ex: If the input is:
// n Monday
// the output is:
// 1 n

// Ex: If the input is:
// z Today is Monday
// the output is:
// 0 z's

// Ex: If the input is:
// n It's a sunny day
// the output is:
// 2 n's

// Case matters.

// Ex: If the input is:
// n Nobody
// the output is:
// 0 n's

// n is different than N.

// g++ zybooks-lab-6.8.cpp && for n in "n Monday" "z Today is Monday" "n It's a sunny day" "n Nobody"; do ./a.out < <(echo $n); echo; done && rm ./a.out

#include <iostream>
#include <string> //https://en.cppreference.com/w/cpp/string/basic_string.html

using namespace std;

int main() {

    char needle = '\0';

    string haystack = "";

    cin >> needle;

    getline(cin, haystack);

    int found_count = 0;

    for(int i = 0; i < haystack.size(); i++) {
        // https://en.cppreference.com/w/cpp/string/basic_string/operator_at.html
        // https://en.cppreference.com/w/cpp/string/basic_string/at.html
        if(haystack[i] == needle) { // Same as haystack.at(i)
            found_count++;
        }
    }

    switch(found_count) {
        case 1:
            cout << "1 " <<  needle << endl;
            break;
        default:
            cout << found_count << " " << needle << "'s" << endl;
    }
}