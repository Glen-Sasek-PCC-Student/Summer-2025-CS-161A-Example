// https://en.cppreference.com/w/cpp/io/basic_istream.html
// https://en.cppreference.com/w/cpp/io/basic_ostream.html
#include <iostream>

// https://en.cppreference.com/w/cpp/string/basic_string.html 
#include <string> 

using namespace std;

// Compile, run, and cleanup command
// g++ example-string-find-substr.cpp && ./a.out && rm ./a.out

int main() {
    string text = "OpenAI Codex helps write code efficiently.";
    
    // Find the position of a substring
    // https://en.cppreference.com/w/cpp/string/basic_string/find.html
    size_t pos = text.find("Codex"); 
    if (pos != string::npos) {
        cout << "\"Codex\" found at position: " << pos << endl;
        
        // Extract substring starting from the found position
        // https://en.cppreference.com/w/cpp/string/basic_string/substr.html
        string part = text.substr(pos);  // from "Codex" to end
        cout << "Substring from that point: " << part << endl;
        
        // Extract only the word "Codex"
        string word = text.substr(pos, 5);  // 5 characters long
        cout << "Just the word: " << word << endl;
    } else {
        cout << "\"Codex\" not found in the text." << endl;
    }

    // Example: find another substring that isn’t present
    if (text.find("GPT") == string::npos) {
        cout << "\"GPT\" was not found." << endl;
    }

    return 0;
}
