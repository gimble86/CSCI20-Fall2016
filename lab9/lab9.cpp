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