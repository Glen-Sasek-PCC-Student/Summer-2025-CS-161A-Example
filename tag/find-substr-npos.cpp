
#include <iostream>
// https://en.cppreference.com/w/cpp/header/iostream.html
// https://gcc.gnu.org/onlinedocs/libstdc++/manual/io.html

#include <string>
// Defined in header <string>
// https://en.cppreference.com/w/cpp/string/basic_string.html 
// https://en.cppreference.com/w/cpp/string/basic_string/find
// https://en.cppreference.com/w/cpp/string/basic_string/substr.html
// https://en.cppreference.com/w/cpp/string/basic_string/npos.html
// https://en.cppreference.com/w/cpp/string/basic_string/getline


using namespace std;

const string TROUT_MEME = "Effecting the local trout population 🎣";
const string TROUT_APPROVED = "🦈🦈🦈🦈🦈🦈🦈🦈🦈 TROUT APPROVED 🦈🦈🦈🦈🦈🦈🦈🦈🦈🦈";

int main() {
    string haystack;
    const string needle = "trout";

    size_t foundPosition = string::npos;
    // https://en.cppreference.com/w/cpp/types/size_t.html

    cout << "Enter a phrase: ";
    getline(cin, haystack); // cin >> haystack only reads one word

    foundPosition = haystack.find(needle);

    if(foundPosition != string::npos) {
        cout << "  Found: " << needle << endl;
        cout << "     in: " << haystack << endl;
        cout << "at char: " << foundPosition << endl;
        cout << "       : " << haystack.substr(foundPosition) << endl;
        cout << TROUT_MEME << endl;
    } else {
        cout << "Did not detect: " << needle << endl;
        cout <<  TROUT_APPROVED << endl;
    }
}