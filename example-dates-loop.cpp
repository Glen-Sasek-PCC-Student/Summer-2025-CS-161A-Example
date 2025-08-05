#include <iostream>

using namespace std;

int main() {

    for(int i = 0; i <= 100; i = i + 7) {
        cout << "Week: " << (i / 7 + 1) << endl; 
        cout << "Days: ";
        for(int day = 1; day <= 7; day++) {
            cout << (i + day) << '\t';
        }
        cout << endl << endl;
    }
}