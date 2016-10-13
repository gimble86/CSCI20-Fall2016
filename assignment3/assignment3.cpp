//
//

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
    
    while(keepPlaying != 1){
    
        cout << "Please enter a minimum number: ";
        cin >> minNumber;
        cout << "Please enter a max number: ";
        cin >> maxNumber;
        winningNumber = RandomNumber(minNumber, maxNumber);
        cout << endl;
    
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

int RandomNumber(int minNumber, int maxNumber){
    srand(time(0));
    
    int randomNumber = ((rand() % maxNumber) + minNumber);
    
    return randomNumber;
}