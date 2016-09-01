#include <iostream>
using namespace std;

int main()
{
    int cents = 0;
    int quarters = 0;
    int nickels = 0;
    int dimes = 0;
    int pennies = 0;
    float dollarSum = 0;
    float coinstarPercent = .109;
    float amountPaid = 0;
    float coinstarProfit = 0;
    
    
    cout << "Please input amount of cents: ";
    cin  >> cents;
    
    dollarSum      = cents/100.00;
    quarters       = cents/25;
    cents          = cents%25;
    dimes          = cents/10;
    cents          = cents%10;
    nickels        = cents/5;
    cents          = cents%5;
    pennies        = cents/1;
    coinstarProfit = dollarSum*coinstarPercent;
    amountPaid     = dollarSum-coinstarProfit;
    
    cout << "There are " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." << endl;
    cout << "The total dollar amount is $" << dollarSum << endl;
    cout << "The amount you will be paid out is $" << amountPaid << endl;
    
    
    
    //cout << cents;

}