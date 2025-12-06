#include <iostream>

using namespace std;

int main() {

    bool next = true;
    while(next) {
        char c = '\0';
        cout << "Enter OPtion: ";
        cin >> c;
        switch(c) {
            case 'q': // Fallthrough
            case 'Q':
                next = false;
                break;
            case 'p':
                // Print
                break;
            case '+':
                // enqueue
                break;
            case '-':
                // dequeue
                break; 
            default:
                cout << "Invalid option" << endl;               
        }
    }
}