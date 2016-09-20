//Ryan Gimble 9-20-16
//Lab 8

#include <iostream>
using namespace std;

// convets user input pounds to kilos
double ToPounds(double kilos1) 
{
    // holds converted pounds
    double convertedPounds1 = kilos1 * 2.205;
    
    return convertedPounds1;
    
}

// converts user kilos to pounds
double ToKilos(double pounds1)
{
    // holds converted kilos
    double convertedKilos1 = pounds1 * 0.45359;
    
    return convertedKilos1;
}

int main()
{
    
    double convertedKilos = 0.0; // holds converted kilos
    double convertedPounds = 0.0; // holds converted pounds
    double pounds = 0.0; // holds user input pounds
    double kilograms = 0.0; // holds user input kilos
    
    cout << endl;
    cout << "Input weight in kilograms: ";
    cin >> kilograms;
    cout << "Input weight in pounds: ";
    cin >> pounds;
    cout << endl;
    
    convertedPounds = ToPounds(kilograms);
    convertedKilos = ToKilos(pounds);
    
    cout << kilograms << " kilograms equals " << convertedPounds << " pounds." << endl;
    cout << pounds << " pounds equals " << convertedKilos << " kilograms." << endl;
    
}