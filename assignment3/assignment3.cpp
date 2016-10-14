//Ryan Gimble 10-13-16
//Game has user pick two numbers and then generates a random number between those two numbers.  User then has to guess the number.

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std; 


int main(){
    
    int RandomNumber(int minNumber, int maxNumber);
    int minNumber = 0;
    int maxNumber = 0;
    int winningNumber = 0;
    int userNumber = 0;
    int counter = 0;
    int keepPlaying = 0;
    
    // loop keeps the game going until the user enters 1 to quit the game.
    while(keepPlaying != 1){
    
        cout << "Please enter a minimum number: ";
        cin >> minNumber;
        cout << "Please enter a max number: ";
        cin >> maxNumber;
        winningNumber = RandomNumber(minNumber, maxNumber);
        cout << endl;
    
        // loop comares the users input with the random number and tells the user if their guess was high/low or correct.
        while(userNumber != winningNumber){
            
            cout << "Try and guess a number between the two numbers you chose: ";
            cin >> userNumber;
            
            if(userNumber > winningNumber){
                cout << "You guessed to high, try again." << endl;
            }
            else if(userNumber < winningNumber){
                cout << "You guessed to low, try again" << endl;
            }
            else if(userNumber == winningNumber){
                cout << "You guessed the right number!" << endl;
            }
            
            counter = counter + 1;
        }
        
        cout << "It took you " << counter << " Tries to guess the right number!" << endl << endl;
        cout << "To keep playing enter 0, to quit enter 1: ";
        cin >> keepPlaying;
        counter = 0;
        userNumber = 0;
    
    }
    
    
    
    return 0;
}

//function accepts user min number and max number and then generates a number between those numbers. returns the random number.
int RandomNumber(int minNumber, int maxNumber){
    srand(time(0));
    
    int randomNumber = ((rand() % maxNumber) + minNumber);
    
    return randomNumber;
}