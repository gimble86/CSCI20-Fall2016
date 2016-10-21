//Ryan Gimble 10-13-16
//Game has user pick two numbers and then generates a random number between those two numbers.  User then has to guess the number.

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std; 

//define class, functions and variables
class GuessingGame {
    public:
    void SetUserNumber();
    
    void GetKeepPlaying(int keepPlaying);
    void SetMinNumber();
    void SetMaxNumber();
    void SetWinningNumber(int minNumber, int maxNumber);
    int GetKeepPlaying();
    void SetKeepPlaying();
    int GetUserNumber();
    int GetWinningNumber();
    void SetCounterToZero();
    void SetUserNumberToZero();
    void IncrementCounter();
    int GetCounter();
    int GetMinNumber();
    int GetMaxNumber();
    
    private:
    int minNumber = 0;
    int maxNumber = 0;
    int winningNumber = 0;
    int userNumber = 0;
    int counter = 0;
    int keepPlaying = 0;
};

int main(){
    GuessingGame game1;
    
    // loop keeps the game going until the user enters 1 to quit the game.
    while(game1.GetKeepPlaying() != 1){
    
        cout << "Please enter a minimum number: ";
        game1.SetMinNumber();
        cout << "Please enter a max number: ";
        game1.SetMaxNumber();
        game1.SetWinningNumber(game1.GetMinNumber(), game1.GetMaxNumber());
        cout << game1.GetWinningNumber();
        cout << endl;
    
        // loop comares the users input with the random number and tells the user if their guess was high/low or correct.
        while(game1.GetUserNumber() != game1.GetWinningNumber()){
            
            cout << "Try and guess a number between the two numbers you chose: ";
            game1.SetUserNumber();
            
            if(game1.GetUserNumber() > game1.GetWinningNumber()){
                cout << "You guessed to high, try again." << endl;
            }
            else if(game1.GetUserNumber() < game1.GetWinningNumber()){
                cout << "You guessed to low, try again" << endl;
            }
            else if(game1.GetUserNumber() == game1.GetWinningNumber()){
                cout << "You guessed the right number!" << endl;
            }
            
            game1.IncrementCounter();
        }
        
        cout << "It took you " << game1.GetCounter() << " Tries to guess the right number!" << endl << endl;
        cout << "To keep playing enter 0, to quit enter 1: ";
        game1.SetKeepPlaying();
        game1.SetCounterToZero();
        game1.SetUserNumberToZero();
    
    }
    
    
    
    return 0;
}

//function accepts user min number and max number and then generates a number between those numbers. Assigns that number to winning number
void GuessingGame::SetWinningNumber(int minNumber, int maxNumber){
    srand(time(0));
    
    winningNumber = ((rand() % maxNumber) + minNumber);
    
    return;
}

//returns the winning number
int GuessingGame::GetWinningNumber(){
    return winningNumber;
}

//lets the user cin a number
void GuessingGame::SetUserNumber() {
    
    cin >> userNumber;
    
    return;
}

//lets the user cin a value into keep playing
void GuessingGame::SetKeepPlaying() {
    
    cin >> keepPlaying;
    
    return;
}

//returns the keepPlaying value
int GuessingGame::GetKeepPlaying(){
    return keepPlaying;
}

//lets the user cin a value into minNumber
void GuessingGame::SetMinNumber() {
    cin >> minNumber;
    return;
}

//lets the user cin a value into maxnumber
void GuessingGame::SetMaxNumber() {
    cin >> maxNumber;
    return;
}

//returns the user number
int GuessingGame::GetUserNumber() {
    
    return userNumber;
}

// sets the counter back to zero after a round has been played.
void GuessingGame::SetCounterToZero() {
    counter = 0;
    return;
}

//sets the userNum back to zero after a round has been played.
void GuessingGame::SetUserNumberToZero() {
    userNumber = 0;
    return;
}

//increments the counter after the user makes a guess what the number is.
void GuessingGame::IncrementCounter() {
    counter = counter + 1;
    return;
}

//returns the value of the counter
int GuessingGame::GetCounter() {
    return counter;
}

//returns the value of the minNumber
int GuessingGame::GetMinNumber() {
    return minNumber;
}

//returns the value of the maxNumber
int GuessingGame::GetMaxNumber() {
    return maxNumber;
}