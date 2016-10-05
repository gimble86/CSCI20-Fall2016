//Ryan Gimble 10-5-16
//Lab 10 Tax return program

#include <iostream>
#include <string>
using namespace std;

// constants
const int personalExemption = 3900;
const int standardDeduction = 6100;

// Tax info class declaration
class TaxInfo{


    public:
    double GetAmountRefunded() const;
    double GetSingleIncomeTax() const;
    double GetMarriedIncomeTax() const;
    double GetAmountOwed() const;
    double GetWages() const;
    string GetName() const;
    double GetTaxWithheld() const;
    TaxInfo();
    TaxInfo(string name_, bool married_, double wages_, double taxWithheld_);
    void PrintInfo();
    
    
    private:
    string name;
    bool married;
    double grossWages;
    double taxWithheld;
};

// default constructor
TaxInfo::TaxInfo(){
    name = "Guy";
    married = false;
    grossWages = 0.0;
    taxWithheld = 0.0;
}

//constructor with inputs for name, filing status, wages and taxes withheld.
TaxInfo::TaxInfo(string name_, bool married_, double wages_, double taxWithheld_){
    name = name_;
    married = married_;
    grossWages = wages_;
    taxWithheld = taxWithheld_;
}

//Function gets persons name 
string TaxInfo::GetName() const {
    return name;
}

//Function gets the amount refunded
double TaxInfo::GetAmountRefunded() const {
    double refund;
    refund = taxWithheld - GetAmountOwed();
    if(refund < 0){
        refund = 0;
    }
    return refund;
}

//Function gets the amount of taxes withheld
double TaxInfo::GetTaxWithheld() const {
    return taxWithheld;
}

//Function figures out the amount of taxes owed
double TaxInfo::GetAmountOwed() const {
        double taxesOwed;
        if(married == false){
            taxesOwed = GetSingleIncomeTax() - personalExemption - standardDeduction;
        }
        else if(married == true){
            taxesOwed = GetMarriedIncomeTax() - personalExemption * 2 - standardDeduction * 2;
        }
        if(taxesOwed <= 0){
            taxesOwed = 0;
        }
        return taxesOwed;
     }
    
// Function gets persons wages    
double TaxInfo::GetWages() const {
        return grossWages;
    }

//Function determines a persons income tax if they are married.
double TaxInfo::GetMarriedIncomeTax() const {
        double taxes;
        if (grossWages <= 17850){
            taxes = grossWages * .1;
        }
        else if (grossWages > 17851 && grossWages <= 72500){
            taxes = 1785 + (grossWages - 17850) * .15;
        }
        else if (grossWages > 72500){
            taxes = 9982.50 + (grossWages -72500) *.28;
        }
        return taxes;
    }
    
//Function determines a persons income tax if they are single
double TaxInfo::GetSingleIncomeTax() const {
        double taxes;
        if (grossWages <= 8925){
            taxes = grossWages * .1;
        }
        else if (grossWages > 8925 && grossWages <= 36250){
            taxes = 892.50 + (grossWages - 8925) * .15;
        }
        else if (grossWages > 87850){
            taxes = 17891.25 + (grossWages - 87850) *.28;
        }
        return taxes;
    }
    
//prints persons tax information
void TaxInfo::PrintInfo(){
    cout << endl << endl << "Name: " << GetName() << endl << endl;
    cout << "Total Gross Income: " << GetWages() << endl << endl;
    cout << "Total tax owed before witholdings: " << GetAmountOwed() << endl << endl;
    cout << "After withholdings " << GetName() << " is entitled to a REFUND of $" << GetAmountRefunded() << endl << endl;
}


int main()
{
    TaxInfo person0;
    TaxInfo person1("Joe Vandal", false, 12100, 250);
    TaxInfo person2("Alfonso Haynes", true, 32351, 3192);
    TaxInfo person3("Bridget Rowe", false, 88229, 12057);
    TaxInfo person4("Wendy Joseph", true, 73291, 6972);
    
    person0.PrintInfo();
    person1.PrintInfo();
    person2.PrintInfo();
    person3.PrintInfo();
    person4.PrintInfo();
    
    
    return 0;
}


// Tax Table for Individuals
// If Adjusted Gross Income is:      Then the tax is:
// $0 - $8,920                       10% of the AGI
// $8,926 - $36,250                  $892.50 plus 15% of the excess over $8,925
// $36,251 - $87,850                 $4991.25 plus 25% of the excess over $36,250
// $87,851 and above                 $17,891.25 plus 28% of the excess over $87,850
 
 
// Tax Table for Married Couples
// If Adjusted Gross Income is:      Then the tax is:
// $0 - $17,850                      10% of the AGI
// $17,851 - $72,500                 $1,785 plus 15% of the excess over $17,850
// $72,501 and above                 $9,982.50 plus 28% of the excess over $72,500