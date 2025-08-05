#include <iostream>

using namespace std;

int main() {

    const int ROW_COUNT = 10;
    const int COL_COUNT = 5;

    const char FIELD_SEPARATOR = '\t';
    const char RECORD_SEPARATOR = '\n';

    for(int row = 1; row <= ROW_COUNT; row++) {
        for(int col = 1; col <= COL_COUNT; col++) {
            float data = row * col;
            cout << data <<  FIELD_SEPARATOR;
        }
        cout << RECORD_SEPARATOR;
    }

}

