// Given a line of text as input, output the number of characters excluding spaces, periods, exclamation points, or commas.

// Ex: If the input is:

// Listen, Mr. Jones, calm down.
// the output is:

// 21
// Note: Account for all characters that aren't spaces, periods, exclamation points, or commas (Ex: "r", "2", "?").

// g++ zybooks-lab-6.11.cpp && ./a.out < <(echo 'Listen, Mr. Jones, calm down.') && rm ./a.out

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "";
    int n = 0;

    // https://en.cppreference.com/w/cpp/string/basic_string/getline.html
    getline(cin, s);


    // USING SWITCH
    // for(int i = 0; i < s.size(); i++) {
    //     char c = s[i];
    //     switch(c) {
    //         case ' ': // fallthrough
    //         case '.': // fallthrough
    //         case '!': // fallthrough
    //         case ',': 
    //             break; // Do not increment count
    //         default:
    //             n++;
    //             break;
    //     }
    // }

    // COMPOUND TEST
    // for(int i = 0; i < s.size(); i++) {
    //     char c = s[i];
    //     if( c != ' ' 
    //         && 
    //         c != '.' 
    //         && 
    //         c != '!' 
    //         && 
    //         c != ',') {
    //         n++;
    //     }
    // }


    // FIND IN SET
    string doNotCountCharacters = " .!,";
    for(int i = 0; i < s.size(); i++) {
        char c = s[i];
        // https://en.cppreference.com/w/cpp/string/basic_string/npos.html
        // https://en.cppreference.com/w/cpp/string/basic_string/find.html
        if(doNotCountCharacters.find(c) == std::string::npos) {
            n++;
        }
    }

    cout << n << endl;

}
