// Write a program that takes in an integer in the range 11-99 (inclusive) as input. 
// The output of the program is a countdown starting from the input integer 
// until an integer where both digits are identical. End with a newline.

// Ex: If the input is:
// 93
// the output is:
// 93 92 91 90 89 88

// Ex: If the input is:
// 11
// the output is:
// 11

// Ex: If the input is:
// 9 or any value not between 11 and 99 (inclusive), 
// the output is:
// Input must be 11-99

// For coding simplicity, follow each output number by a space, even the last one.

// Use a while loop. 
// Compare the digits; 
// do not write a large if-else for all possible same-digit numbers (11, 22, 33, ..., 99), 
// as that approach would be cumbersome for larger ranges.

// g++ zybooks-lab-6.7.cpp && for n in 93 11 9; do ./a.out < <(echo $n); echo; done && rm ./a.out

#include <iostream>

using namespace std;

int main() {

    int n = 0;
    cin >> n;

    if(n < 11 or n > 99) {
        cout << "Input must be 11-99" << endl;
        return 1;
    }

    bool next = true;
    int i = n;
    while(next) {
        cout << i << " ";
        next = (i / 10) != (i % 10);
        i--;
    }
    cout << endl;

    return 0;
}
