// https://en.cppreference.com/w/cpp/io/basic_istream.html
// https://en.cppreference.com/w/cpp/io/basic_ostream.html
#include <iostream>
#include <sstream>

// https://en.cppreference.com/w/cpp/string/basic_string.html 
#include <string> 

using namespace std;

// Compile, run, and cleanup command
// g++ ezi-find-substr && ./a.out && rm ./a.out

int main() {
    string phrase_1 = "";
    string phrase_2 = "";

    cout << "Phrase 1: ";
    getline(cin, phrase_1); // https://en.cppreference.com/cpp/string/basic_string/getline
    cout << "Entered: " << phrase_1 << endl;

    cout << "Phrase 2: ";
    getline(cin, phrase_2);
    cout << "Entered: " << phrase_2 << endl;

    // Find the position of a phrase_2 in phrase_1
    // https://en.cppreference.com/w/cpp/string/basic_string/find.html
    size_t pos = phrase_1.find(phrase_2); 

    // Test if the substring was found
    if (pos != string::npos) {
        cout << endl << phrase_2 << endl << "found at position: " << pos << endl;
        
        // https://en.cppreference.com/w/cpp/string/basic_string/substr.html
        string matching_part = phrase_1.substr(pos); // From pos to end
        cout << "Substring from that point: " << matching_part << endl;
    } else {
        cout << phrase_2 << endl << "Is not found in: " << endl << phrase_1 << endl;
    }
    return 0;
}
