#include <iostream>

using namespace std;

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
  cout << "argc: " <<  argc << endl;
  for(int i = 0; i < argc; i++) {
    cout << "argv[" << i << "] " << argv[i] << endl;
  }
  return 0;
}
