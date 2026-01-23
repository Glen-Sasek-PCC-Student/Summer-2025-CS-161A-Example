/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

    const double vehicleTicket = 57.90;
    const double adultTicket = 14.95;
    const double seniorTicket = 7.40;
    const double youthTicket = 5.55;
    const double bikeTicket = 4.00;

int main()
{
    string choice;
    int adult;
    int youth;
    int senior;
    int bikes;
    double totalCharge;
    //Setting up the Menu/Tickets...
    cout << "Welcome to The San Juan Fare Calculator!" << endl;
    cout << "\nFare Description!\t\tTicket Prices:" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Vehicle Under 14' & Driver\t\t57.90$" << endl;
    cout << "Adult (age 19 - 64)\t\t\t" << adultTicket << "$" << endl;
    cout << "Senior (65 & over) / Disability\t\t7.40$" << endl;
    cout << "Youth (age 6 - 18)\t\t\t" << youthTicket << "$" << endl;
    cout << "Bicycle Surcharge(with Car)\t\t4.00$" << endl;
    
    cout << "\nAre you taking a vehicle on the ferry?: ";
    cin >> choice;
    
    if (choice == "y") {
        cout << "\nGreat! How many adults: ";
        cin >> adult;
        
        cout << "How many seniors: ";
        cin >> senior;
        
        cout << "How many youths: ";
        cin >> youth;
        
        totalCharge = vehicleTicket +
        (adultTicket * adult) +
        (seniorTicket * senior) +
        (youthTicket * youth);
        
        cout << fixed << setprecision(2);
        cout << "Your total is: " << totalCharge << "$" << endl;
    }
    else if (choice == "n") {
        cout << "\nGreat! How many adults: ";
        cin >> adult;
        
        cout << "How many seniors: ";
        cin >> senior;
        
        cout << "How many youths: ";
        cin >> youth;
        
        cout << "How many bikes: ";
        cin >> bikes;
        
        totalCharge = (adultTicket * adult) +
        (seniorTicket * senior) +
        (youthTicket * youth) +
        (bikeTicket * bikes);
        
        cout << fixed << setprecision(2);
        cout << "Your total is: " << totalCharge << "$" << endl;
    }
    
    
    
    
    
    
    
    return 0;
}