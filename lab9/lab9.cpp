//
//

#include <iostream>
using namespace std;

class TemperatureConverter {
    public:
    double GetTempFromKelvin() const;
    double GetTempAsCelsius() const;
    double GetTempAsFahrenheit() const;
    void SetTempFromCelsius(double userTemp);
    void SetTempFromFahrenheit(double userTemp);
    void SetTempFromKelvin(double userTemp);
    void PrintTemps();
    TemperatureConverter();
    TemperatureConverter(double userTemp);
    private:
    double kelvin_;
};

TemperatureConverter::TemperatureConverter() {
    kelvin_ = 0;
    return;
}

TemperatureConverter::TemperatureConverter(double userTemp) {
    kelvin_ = userTemp;
    return;
}

void TemperatureConverter::PrintTemps() {
    cout << "Temp K: " << GetTempFromKelvin() << endl;
    cout << "Temp C: " << GetTempAsCelsius() << endl;
    cout << "Temp F: " << GetTempAsFahrenheit() << endl;
    return;
}
void TemperatureConverter::SetTempFromKelvin(double userTemp) {
    kelvin_ = userTemp;
    return;
}

void TemperatureConverter::SetTempFromCelsius(double userTemp) {
    kelvin_ = userTemp + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double userTemp) {
    kelvin_ = (5 * (userTemp - 32) / 9) + 273.15;
    return;
}

double TemperatureConverter::GetTempFromKelvin() const {
    return kelvin_;
}

double TemperatureConverter::GetTempAsCelsius() const {
    return kelvin_ - 273.15;
}

double TemperatureConverter::GetTempAsFahrenheit() const {
    return ((kelvin_ - 273.15) * 9) / 5 + 32;
}


int main () 
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemps();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemps();
    
    return 0;
    
}