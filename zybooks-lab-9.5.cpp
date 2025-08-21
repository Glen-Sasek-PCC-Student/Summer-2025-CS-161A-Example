// 9.5 LAB: Paint a room
// A Portland Paints has determined that for every 110 square feet of wall space, one gallon of paint and eight hours of labor will be required. 
// The company charges $35.00 per hour for labor. 

// Write a modular program that allows the user to enter the length, width, and height of a room (in feet) and the price of the paint per gallon.

// Calculate the square foot area of the four walls, do not add the floor or ceiling.

// It should then display the following data:

// The number of gallons of paint required (integer, round up to the next gallon)
// The cost of the paint (double)
// The number of labor hours (integer, round up all fractions of an hours to whole hour)
// The labor charges (double)
// The total cost to paint the room (double)
// Input validation: Do not accept values less than 5 for the length, width, and height dimensions. Do not accept a value less than $10.00 for the price of paint.

// Ex: If the input is:
// 10 
// 10 
// 12 
// 15.45
// the output is:
// Gallons of paint:  5
// Paint cost:       $77.25
// Hours of labor:    35
// Labor cost:       $1225.00
// Total charges:    $1302.25



// Ex: If the input is:
// 4 
// 10 
// -9
// 10
// 12 
// 9
// 10.75
// the output is:
// 4
// ERROR. Cannot be less than 5 feet.
// 10
// -9
// ERROR. Cannot be less than 5 feet.
// 10
// 12
// 9
// ERROR: Paint price must be 10.00 or greater.
// 10.75
// Gallons of paint:  5
// Paint cost:       $53.75
// Hours of labor:    35
// Labor cost:       $1225.00
// Total charges:    $1278.75
// Use constants for 110 square feet and $35.00 labor charges.



// Use the following function prototypes:
// double getPaintPrice();
// void getWallDimensions(double & length, double & width, double & height);
// double calcWallSquareFeet(double length, double width, double height);
// void numberOfGallons(double, int &);
// void laborHours(double, int &);
// void displayCost(int, double, int);


#include <iostream>
#include <iomanip>
#include <cmath> // for https://en.cppreference.com/w/cpp/numeric/math/ceil
// https://en.cppreference.com/w/cpp/header/cmath.html

using namespace std;

/* Put your function prototypes here */ 
double getPaintPrice();
void getWallDimensions(double & length, double & width, double & height);
double calcWallSquareFeet(double length, double width, double height);
void numberOfGallons(double, int &);
void laborHours(double, int &);
void displayCost(int, double, int);

void getDimension(double &feet);

int main() {

    double length = 0.0;
    double width = 0.0;
    double height = 0.0;
    double price_USD = 0.0;
    double sqft = 0.0;
    int gallons = 0;
    int hours = 0;

    getWallDimensions(length, width, height);
    price_USD = getPaintPrice();

    sqft = calcWallSquareFeet(length, width, height);
    numberOfGallons(sqft, gallons);
    laborHours(sqft, hours);

    displayCost(gallons, price_USD, hours);

    return 0;
}

void getDimension(double &feet) {
    const double MIN_DIMENSION_FEET = 5.0;

    while(true) {
        cin >> feet;
        if(feet >= MIN_DIMENSION_FEET) {
            break;
        } else {
            cout << "ERROR: Cannot be less than 5 feet." << endl;
        }
    }
}

double getPaintPrice() {
    const double MIN_USD = 10.0;
    double usd = 0.0;
    while(true) {
        cin >> usd;
        if(usd >= MIN_USD) {
            break;
        } else {
            cout << "ERROR: Paint price must be 10.00 or greater." << endl;
        }
    } 
    return usd;
}

double calcWallSquareFeet(double length, double width, double height) {
    return (length * 2 + width * 2) * height; 
}

// Input validation: Do not accept values less than 5 for the length, width, and height dimensions. Do not accept a value less than $10.00 for the price of paint.
void getWallDimensions(double & length, double & width, double & height) {
     getDimension(length);
     getDimension(width);
     getDimension(height);
}

// 110 square feet of wall space, one gallon of paint
void numberOfGallons(double sqft, int &gallons) {
    const double SQFT_PER_GALLON = 110;
    gallons = ceil(sqft / SQFT_PER_GALLON); // https://en.cppreference.com/w/cpp/numeric/math/ceil
}


void laborHours(double sqft, int &hours) {
    const double SQFT_PER_GALLON = 110;
    const int HOURS_PER_GALLON = 8;
    
    double gallons = sqft / SQFT_PER_GALLON;
   
    hours = ceil(gallons * HOURS_PER_GALLON);
}

// Gallons of paint:  5
// Paint cost:       $77.25
// Hours of labor:    35
// Labor cost:       $1225.00
// Total charges:    $1302.25
void displayCost(int gallons, double USD_per_gallon , int hours) {
    const int LABOR_USD_PER_HOUR = 35;

    double paint_USD =  gallons * USD_per_gallon;
    double labor_USD = hours * LABOR_USD_PER_HOUR;
    double total_USD = paint_USD + labor_USD;

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Gallons of paint:  " << gallons << endl;
    cout << "Paint cost:       $" << paint_USD << endl;
    cout << "Hours of labor:    " << hours << endl;
    cout << "Labor cost:       $" << labor_USD << endl;
    cout << "Total charges:    $" << total_USD << endl;
}