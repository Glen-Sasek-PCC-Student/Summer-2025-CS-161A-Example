// 8.6 LAB: Swapping variables
// Write a program whose input is two integers and whose output is the two integers swapped.

// Ex: If the input is:
// 3 8
// the output is:
// 8 3
// Your program must define and call a function. 
// SwapValues swaps the two values such that if userVal1 = 3 and userVal2 = 8, 
// after the function is called userVal1 = 8, and userVal2 = 3.



#include <iostream>

using namespace std;

void SwapValues(int &userVal1, int &userVal2);

int main() {

    int n1 = 0;
    int n2 = 0;

    cin >> n1 >> n2;
    cout << n2 << " " << n1 << endl; 

}

void SwapValues(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;

    // Avoid using a temp with exclusive or, xor:
    // https://en.wikipedia.org/wiki/XOR_swap_algorithm
    // https://en.cppreference.com/w/cpp/keyword/xor.html
    // https://en.cppreference.com/w/cpp/language/operator_alternative.html
    // x = x xor y;  // x = x ^ y
    // y = y xor x;  // y = y ^ x
    // x = x xor y;  // x = x ^ y
}
