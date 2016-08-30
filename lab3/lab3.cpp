//Ryan Gimble 8-30-16
// Lab 3

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare and initialize variables
    string name = "bob";
    float real = 0;
    int integer = 0;
    char letter = 'z';
    
    //User inputs variables for mad lib
    cout << "Please enter a first name: ";
    cin  >> name;
    cout << "Please enter a whole number: ";
    cin  >> integer;
    cout << "Please enter a number with a decimal: ";
    cin  >> real;
    cout << "Please enter an upper case letter: ";
    cin  >> letter;
    cout << endl;
    
    // Show user input
    cout << "Name: " << name << endl;
    cout << "Number: " << integer << endl;
    cout << "Decimal: " << real << endl;
    cout << "Letter: " << letter << endl;
    cout << endl;
    
    //Produce mad lib paragraph
    cout << "Once upon a time " << name << " was feeling extra classy after drinking a whole lot of chardonnay, so naturally he decided to go to Taco Bell. " << endl;
    cout << "When " << name << " arrived, he tried to order " << real << " tacos. Confused, the Taco Bell employee replied \"I'm sorry but we only serve whole tacos here...\"" << endl;
    cout << "Disappointed, " << name << " decided to order " << integer << " tacos instead. As he was leaving, " << name << " at the Taco Bell employee that he was a big " << letter << endl;
    cout << "and sped off. The Taco Bell employee was very confused by the experience.";

}