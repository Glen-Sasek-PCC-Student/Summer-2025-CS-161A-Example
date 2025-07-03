// Given three floating-point numbers x, y, and z, output x^z, x^y^z, the absolute value of y, and the square root of (xy)^z.

// Ex: If the input is:

// 5.0 6.5 3.2
// the output is:

// 172.466 1.29951e+279 6.5 262.43

#include <iostream>
#include <cmath>  
// https://en.cppreference.com/w/cpp/header/cmath.html
// https://en.cppreference.com/w/cpp/numeric/math/sqrt.html
// https://en.cppreference.com/w/cpp/numeric/math/pow.html
// https://en.cppreference.com/w/cpp/numeric/math/fabs.html

using namespace std;

// Compile and Test
// g++ zybooks-lab-2-21.cpp && ./a.out < <(echo "5.0 6.5 3.2") && rm ./a.out

int main() {
   double x;
   double y;
   double z;

   /* Type your code here. Note: Include the math library above first. */
   cin >> x >> y >> z;
   cout << pow(x, z) << " " << pow(x, pow(y, z)) << " " << abs(y) << " " << sqrt(pow((x * y), z)) << endl;

   return 0;
}
