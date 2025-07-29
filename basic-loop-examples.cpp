#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        cout << "i = " << i << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    bool done = false;
    int count = 0;

    while (!done) {
        cout << "count = " << count << endl;
        ++count;
        if (count >= 5) {
            done = true;
        }
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter numbers (-1 to stop):" << endl;

    while (cin >> num && num != -1) {
        cout << "You entered: " << num << endl;
    }

    return 0;
}

