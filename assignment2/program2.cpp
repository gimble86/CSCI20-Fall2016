//Ryan Gimble 
//Assignment 2, 9/27/16

#include <iostream>
using namespace std;

//declare and define constants

const double inchesInMile = 63360;
const double inchesInYard = 36;
const double inchesInFoot = 12;
const double inchesInMeter = 39.3701;

//create a class with ability to convert from inches to other units
class UnitConversion
{

//Declare class functions to get and set unit values
public:
double GetInches();
double GetFeetFromInches();
double GetYardsFromInches();
double GetMilesFromInches();
double GetMetersFromInches();
void SetInches(double userInches);
void SetInchesFromFeet(double userInches);
void SetInchesFromYards(double userInches);
void SetInchesFromMiles(double userInches);
void SetInchesFromMeters(double userInches);
void PrintMilesToAll();
void PrintMetersToMiles();
void PrintYardsToFeet();
void PrintInchesToMeters();
UnitConversion();
UnitConversion(double userInches);

//Create private variable to convert into other units
private:
double inches_;

};

// define class constructors
UnitConversion::UnitConversion() 
{
    inches_ = 0;
    return;
}

UnitConversion::UnitConversion(double userInches)
{
    inches_ = userInches;
    return;
}

// define class get functions

double UnitConversion::GetInches()
{
    return inches_;
}

double UnitConversion::GetFeetFromInches()
{
    return inches_ / inchesInFoot;
}

double UnitConversion::GetYardsFromInches()
{
    return inches_ / inchesInYard;
}

double UnitConversion::GetMilesFromInches()
{
    return inches_ / inchesInMile;
    
}

double UnitConversion::GetMetersFromInches()
{
    return inches_ / inchesInMeter;
    
}

//define class set functions
void UnitConversion::SetInches(double userInches)
{
    inches_ = userInches;
    return;
}

void UnitConversion::SetInchesFromFeet(double userInches)
{
    inches_ = userInches * inchesInFoot;
    return;
}

void UnitConversion::SetInchesFromYards(double userInches)
{
    inches_ = userInches * inchesInYard;
    return;
}

void UnitConversion::SetInchesFromMiles(double userInches)
{
    inches_ = userInches * inchesInMile;
    return;
}

void UnitConversion::SetInchesFromMeters(double userInches)
{
    inches_ = userInches * inchesInMeter;
    return;
}

//Class Print Functions()

//prints miles into all other units
void UnitConversion::PrintMilesToAll()
{
    cout << GetMilesFromInches() << " Miles equals: " << endl;
    cout << GetFeetFromInches() << " Feet" << endl;
    cout << GetInches() << " Inches" << endl;
    cout << GetMetersFromInches() << " Meters" << endl;
    cout << GetYardsFromInches() << " Yards" << endl;
}

// prints meters to miles
void UnitConversion::PrintMetersToMiles()
{
    cout << GetMetersFromInches() << " Meters = " << GetMilesFromInches() << " Miles." << endl;
    cout << endl;
}

//prints yards into feet
void UnitConversion::PrintYardsToFeet()
{
    cout << GetYardsFromInches() << " Yards = " << GetFeetFromInches() << " Feet." << endl;
    cout << endl;
}

//prints inches into meters
void UnitConversion::PrintInchesToMeters()
{
    cout << GetInches() << " Inches = " << GetMetersFromInches() << " Meters." << endl;
    cout << endl;
}

//begins main function
int main ()
{
    //create class objects with values to test constructors
    UnitConversion unit0;
    UnitConversion unit1(1000);

    //print initial values to test constructors
    cout << endl;
    cout << "Unspecified constructor test" << endl;
    unit0.PrintMilesToAll();
    cout << endl;
    
    cout << "Specified Constructor test" << endl;
    unit1.PrintMilesToAll();
    cout << endl;
    
    //sets inches from 1 mile and prints 1 mile in terms of other units
    unit1.SetInchesFromMiles(1);
    unit1.PrintMilesToAll();
    cout << endl;
    
    //converts 16 meteres into inches and prints in terms of miles
    unit0.SetInchesFromMeters(16);
    unit0.PrintMetersToMiles();
    
    //converts 20 yards into inches then prints in terms of feet
    unit1.SetInchesFromYards(20);
    unit1.PrintYardsToFeet();
    
    //converts 100 inches into meters and prints
    unit1.SetInches(100);
    unit1.PrintInchesToMeters();
    
    //converts 1 meter into inches and prints in terms of miles
    unit1.SetInchesFromMeters(1);
    unit1.PrintMetersToMiles();
    
    return 0;
}


// 1. 1 mile to feet
// 2. 1 mile to inches
// 3. 1 mile to meters
// 4. 1 mile to yards
// 5. 16 meters to miles
// 6. 20 yards to feet
// 7. 100 inches to meters
// 8. 1 meter to miles