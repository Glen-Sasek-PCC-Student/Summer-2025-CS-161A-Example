#ifndef GS_UTILS
#define GS_UTILS

#include <iostream>
#include <string>
#include <limits>

// using namespace std;
using std::string;
using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;

int getInt(string prompt = "", string error_message = "") {
    int n = 0;
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
            if(error_message.size() > 0) {
                cout << error_message;
            }
        }
    }
    return n;
}


double getDouble(string prompt = "", string error_message = "") {
    double n = 0.0;
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
            if(error_message.size() > 0) {
                cout << error_message;
            }
        }
    }
    return n;
}


#endif