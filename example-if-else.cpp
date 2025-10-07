// https://chatgpt.com/s/t_68e57d692ed48191851855cb9913e9c3
// minimal_if_else.cpp
#include <iostream>

int main() {
    int a = 5;
    int b = 3;

    // simple comparison
    if (a > b) {
        std::cout << "a > b\n"; // expected: a > b
    } else {
        std::cout << "a <= b\n";
    }

    // equality / inequality
    if (a == b) {
        std::cout << "a == b\n";
    } else if (a != b) {
        std::cout << "a != b\n"; // expected: a != b
    }

    // compound logical expressions
    if (a > 0 && b > 0) {
        std::cout << "both positive\n"; // expected
    }

    if (a < 0 || b < 0) {
        std::cout << "at least one negative\n";
    } else {
        std::cout << "no negatives\n"; // expected
    }

    // negation
    bool flag = false;
    if (flag == false) {
        std::cout << "flag is false\n"; // expected
    } else {
        std::cout << "flag is true\n"; // expected
    }

    // ternary operator (expression form)
    std::cout << "max = " << (a > b ? a : b) << '\n'; // expected: max = 5

    // if with initializer (C++17): evaluate and use the initialized value
    if (int diff = a - b; diff == 2) {
        std::cout << "difference is 2 (diff = " << diff << ")\n"; // expected
    } else {
        std::cout << "difference is not 2\n";
    }

    // nested if minimal example
    if (a > b) {
        if (a - b > 1) {
            std::cout << "a is larger by more than 1\n"; // expected
        } else {
            std::cout << "a is larger by 1\n";
        }
    }

    return 0;
}
