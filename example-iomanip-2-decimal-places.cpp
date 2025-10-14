


#include <iostream>
#include <iomanip> // For setprecision()
// https://en.cppreference.com/w/cpp/header/iomanip.html

// https://en.cppreference.com/w/cpp/io/manip/setprecision.html

// g++ example-iomanip-2-decimal-places.cpp && ./a.out && rm ./a.out

using namespace std;

int main() {
  
    float f = 1.2345;
    cout << fixed << setprecision(2) << f << endl;

    return 0;
}