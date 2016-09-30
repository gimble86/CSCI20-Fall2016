//Ryan Gimble
//Program #1 Variables

#include <string>
#include <iostream>
using namespace std;

//
struct employeeWages {
    string employeeName;
    float employeePayRate;
    float employeeHours;
    float employeeTaxRate = .17;
    float employeeNetPay = 0.0;
    float employeeGrossPay = 0.0;
};

int main () {
    
    //
    float taxWithholdings = 0.0;
    employeeWages payCard;
    
    //
    cout << endl << "Please enter employee's name: ";
    getline(cin, payCard.employeeName);
    
    cout << "Please enter employee's hourly rate: ";
    cin  >> payCard.employeePayRate;
    
    cout << "Please enter employee's hours worked: ";
    cin  >> payCard.employeeHours;
    cout << endl;
    
    //
    taxWithholdings = payCard.employeeTaxRate * payCard.employeePayRate * payCard.employeeHours;
    payCard.employeeGrossPay = payCard.employeeHours * payCard.employeePayRate;
    payCard.employeeNetPay = payCard.employeeGrossPay - taxWithholdings;
    
    cout << "Name: " << payCard.employeeName << endl;
    cout << "Hours Worked: " << payCard.employeeHours << endl;
    cout << "Pay Rate: $" << payCard.employeePayRate << endl;
    cout << "Gross Pay: $" << payCard.employeeGrossPay << endl;
    cout << "Net Pay: $" << payCard.employeeNetPay << endl;
}