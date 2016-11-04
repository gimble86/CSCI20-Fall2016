// Ryan Gimble 11/3/16 Lab #18
// Program accepts user name input and outputs 3 different possible usernames using different string manipulator functions

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // declares varviables
    string firstName = "";
    string lastName = "";
    string userName1 = "";
    string userName2 = "";
    string userName3 = "";
    int keepGoing = 0;
    
    
    //loop allows user to keep entering different names
    while(keepGoing != 1){
     
     //getting user input
        cout << "\nPlease enter a first name less than 10 characters: ";
        cin >> firstName;
        cout << endl;
        
        while (firstName.length() > 10){
            cout << "Too many characters!";
            cout << "\nPlease enter a first name less than 10 characters: ";
            cin >> firstName;
        }
        
        cout << "Please enter a last name less than 20 characters: ";
        cin >> lastName;
        cout << endl;
        
        //loop checks to make sure user input is not too big.
        while (lastName.length() > 20){
            cout << "Too many characters!";
            cout << "\nPlease enter a last name less than 20 characters: ";
            cin >> lastName;
        }
        
        //if the user enters two of the same name if statment outputs a warning
        if(firstName == lastName) {
            cout << "Waring! First Name and last name are the same!";
        }
        
        cout << "Name: " << firstName << " " << lastName << ":" << endl << endl;
        cout << "Which of the three usernames would you like?\n" << endl;
     
        //set username styles using string manipulations
        userName1 = firstName + lastName;
        
        userName2 = firstName;
        userName2.resize(2);
        
        userName3 = firstName;
        userName3.resize(1);
        
        // output the three different usernames and ask user if they would like to keep going
        cout << userName1 << endl;
        cout << userName2 + lastName << endl;
        cout << userName3 + lastName << endl << endl;
        cout << "To enter another name enter 0, to quit enter 1: " << endl;
        cin >> keepGoing;
        
    }
    
    return 0;
}