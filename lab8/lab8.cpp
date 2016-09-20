//
//

#include <iostream>
using namespace std;

double ToPounds(double kilos1) 
{
    double convertedPounds1 = kilos1 * 2.205;
    
    return convertedPounds1;
    
}

double ToKilos(double pounds1)
{
    double convertedKilos1 = pounds1 * 0.45359;
    
    return convertedKilos1;
}

int main()
{
    double convertedKilos = 0.0;
    double convertedPounds = 0.0;
    double pounds = 0.0;
    double kilograms = 0.0;
    
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