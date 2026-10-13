// https://en.cppreference.com/w/cpp/io/basic_istream.html
// https://en.cppreference.com/w/cpp/io/basic_ostream.html
#include <iostream>
#include <sstream>

// https://en.cppreference.com/w/cpp/string/basic_string.html 
#include <string> 

using namespace std;

// Compile, run, and cleanup command
// g++ ez-find-substr && ./a.out && rm ./a.out

// Utility function to enable code demonstrating standard input.
void setup();

int main() {
    // Template function to setup example;
    setup();

    // Example starts here
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
    if (pos != string::npos) {
        cout << endl << phrase_2 << endl << "found at position: " << pos << endl;
        
        // Extract substring starting from the found position
        // https://en.cppreference.com/w/cpp/string/basic_string/substr.html
        string matching_part = phrase_1.substr(pos); // From pos to end
        cout << "Substring from that point: " << matching_part << endl;
    } else {
        cout << phrase_2 << endl << "Is not found in: " << endl << phrase_1 << endl;
    }
    return 0;
}

void setup() {
    string s1 = "To read all characters including spaces to the end of a line use getline.";
    string s2 = "to the end";
    static istringstream test_input(s1 + "\n" + s2 + "\n");
    cin.rdbuf(test_input.rdbuf());
}