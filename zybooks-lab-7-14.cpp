// 7.14.1: LAB: Max and min numbers

// Write a program whose inputs are four integers, and whose outputs are the maximum and the minimum of the four values.

// Ex: If the input is:

// 12 18 4 9
// the output is:

// Maximum is 18
// Minimum is 4
// The program must define and call the following two functions.
// Define a function named MaxNumber that takes four integer parameters and returns an integer representing the maximum of the four integers.
// Define a function named MinNumber that takes four integer parameters and returns an integer representing the minimum of the four integers.
// int MaxNumber(int num1, int num2, int num3, int num4)
// int MinNumber(int num1, int num2, int num3, int num4)

#include <iostream>

using namespace std;

int MaxNumber(int num1, int num2, int num3, int num4);
int MinNumber(int num1, int num2, int num3, int num4);
int MaxNumber(int num1, int num2);
int MinNumber(int num1, int num2);

int main()
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;

    cin >> n1 >> n2 >> n3 >> n4;

    cout << "Maximum is " << MaxNumber(n1, n2, n3, n4) << endl;
    cout << "Minimum is " << MinNumber(n1, n2, n3, n4) << endl;

    return 0;
}

int MaxNumber(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int MinNumber(int num1, int num2) {
    return num1 < num2 ? num1 : num2;
}

int MaxNumber(int n1, int n2, int n3, int n4) {
    return MaxNumber(MaxNumber(n1, n2), MaxNumber(n3, n4));
}

int MinNumber(int n1, int n2, int n3, int n4) {
    return MinNumber(MinNumber(n1, n2), MinNumber(n3, n4));
}