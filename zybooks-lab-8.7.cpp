// Write a program that simulates flipping a coin to make decisions. 
// The input is how many decisions are needed, and the output is either heads or tails. 
// Assume the input is a value greater than 0.

// Ex: If the input is:
// 3
// the output is:
// heads
// tails
// heads

// For reproducibility needed for auto-grading, 
// seed the program with a value of 2. 
// In a real program, you would seed with the current time. 
// In that case, every program's output would be different, 
// which is what is desired but can't be auto-graded.

// Note: A common student mistake is to call srand() before each call to rand(). 
// But seeding should only be done once, at the start of the program, 
// after which rand() can be called any number of times.

// Your program must define and call the following function that randomly picks 0 or 1 and 
// updates a variable in main() with "heads" or "tails". 
// Assume the value 0 represents "heads" and 1 represents "tails".
// void flipCoin(string &coin)

// lab activity
// 8.7.1: LAB: Flip a coin

#include <iostream>
#include <cstdlib>
// https://en.cppreference.com/w/cpp/numeric/random/rand.html
// https://en.cppreference.com/w/cpp/numeric/random/srand.html

#include <ctime>
// https://en.cppreference.com/w/cpp/chrono/c/time.html

using namespace std;

// COMPILE AND TEST
// g++ zybooks-lab-8.7.cpp && ./a.out < <(echo 3) && rm ./a.out

void flipCoin(string &coin);

int main() {
    // Typical use:
    // time_t now = time(nullptr);
    // cout << "time(nullptr): " << now << endl;
    // srand(now);

    // for zybook submit
    srand(2);

    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string coin = "unflipped";
        flipCoin(coin);
        cout << coin << endl;
    }
    
}


// Your program must define and call the following function that randomly picks 0 or 1 and 
// updates a variable in main() with "heads" or "tails". 
// Assume the value 0 represents "heads" and 1 represents "tails".
void flipCoin(string &coin) {
    int r = rand();

    // for testing
    // cout << "rand(): " << r << endl;
    
    if(r % 2 == 0){
        coin = "heads";         
    } else {
        coin = "tails";
    }
}