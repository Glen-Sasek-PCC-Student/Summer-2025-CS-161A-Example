// index,CITY,JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC,ANN
// 0,"BIRMINGHAM,AL",81,83,89,92,99,106,107,105,102,94,85,80,107

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <map>

using namespace std;

const int FIELD_COUNT = 15;
const int MAX_ROWS = 800;
const int MAX_CHARS = 25;

enum MONTH {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

class HighTemp {
    public:
        int index = 0;
        string city = "";
        string state_code = "";

        int monthly_high_temp[DEC+1];

        int yearly_high_temp = 0;

        void print() {
            cout <<  left << setw(40) << city << '\t' << state_code << '\t';

            
            for(int i = JAN; i <=DEC; i++) {
                cout << monthly_high_temp[i] << '\t';
            }
            cout << endl;
        }

};


// DECLARATION
void readData();

void printHeadings();

void printData();

void highTempPerState();

HighTemp tempData[MAX_ROWS];
int tempDataCount = 0;

string headings[FIELD_COUNT];

int main()
{
    readData();
    printHeadings();
    printData();
    highTempPerState();
}



void readData()
{
    ifstream fin("clean-2.csv");
    
    // Read headings 
    for(int i = 0; i < FIELD_COUNT - 1; i++) {
        getline(fin, headings[i], ',');
    }
    getline(fin, headings[FIELD_COUNT - 1]);

    // 0,"BIRMINGHAM,AL",81,83,89,92,99,106,107,105,102,94,85,80,107
    // Read Data 
    while(fin && !fin.eof() && (fin.peek() != fin.eof())) {
        fin.get();
        getline(fin, tempData[tempDataCount].city, ',');
        getline(fin, tempData[tempDataCount].state_code, '"');
        fin.get();
        for(int i = JAN; i <=DEC; i++) {
            fin >> tempData[tempDataCount].monthly_high_temp[i];
            if(!fin) {
                fin.clear();
                tempData[tempDataCount].monthly_high_temp[i] = -1;
                fin.get();
            }

            fin.get();
        }
        fin >> tempData[tempDataCount].yearly_high_temp;
        fin.get();
        tempDataCount++;
    }
}


void printHeadings() {
    cout << left << setw (40) << headings[0] << '\t' << setw(20);
    for(int i = 1; i < FIELD_COUNT - 1; i++) {
        cout << headings[i] << '\t';
    }
    cout << endl;
}

void printData() {
    for(int i = 0; i < tempDataCount; i++) {
        tempData[i].print();
    }
}


void highTempPerState() {
    map<string, int> stateHighTempMap;

    for(int i = 0; i < tempDataCount; i++) {
        if (stateHighTempMap.find( tempData[i].state_code) == stateHighTempMap.end()) {
            // Key not found, set the value
            stateHighTempMap[tempData[i].state_code] = tempData[i].yearly_high_temp;
        } else {
           if(tempData[i].yearly_high_temp > stateHighTempMap[tempData[i].state_code]) {
            stateHighTempMap[tempData[i].state_code] = tempData[i].yearly_high_temp;
           }
        }
    }

    for (const auto& pair : stateHighTempMap) {
        std::cout << pair.first << ", " << pair.second << std::endl;
    }
}