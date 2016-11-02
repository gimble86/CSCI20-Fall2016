// Ryan Gimble *Date* lab # 17
// This program takes user name input and outputs possible usernames

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    //declaration of arrays
    char firstName[11] = "";
    char lastName[21] = "";
    char userName1[31] = "";
    char userName2[31] = "";
    char userName3[31] = "";
    
    //getting user input
    cout << "\nPlease enter a first name less than 10 characters: ";
    cin >> firstName;
    
    //loop checks to make sure user input is not too big.
    while (strlen(firstName) > 10){
        cout << "Too many characters!";
        cout << "\nPlease enter a first name less than 10 characters: ";
        cin >> firstName;
    }
        
    
    cout << "Please enter a last name less than 20 characters: ";
    cin >> lastName;
    
    //loop checks to make sure user input is not too big.
    while (strlen(lastName) > 20){
        cout << "Too many characters!";
        cout << "\nPlease enter a last name less than 20 characters: ";
        cin >> lastName;
    }
    
    //if the user enters two of the same name if statment outputs a warning
    if(strcmp(firstName, lastName) == 0) {
        cout << "Waring! First Name and last name are the same!";
    }
    
    cout << "Which of the three usernames would you like?\n" << endl;
    
    //setup possible usernames
    strcpy(userName1, firstName);
    strcpy(userName2, firstName);
    strcpy(userName3, lastName);
    
    //output usernames
    cout << strcat(userName1, lastName) << endl;
    cout << strncat(userName2, lastName, 1) << endl;
    cout << strncat(userName3, firstName, 1) << endl;
    
    return 0;
}