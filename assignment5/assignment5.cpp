// Ryan Gimble 12-10-16 Assignment 5
// Pig Dice game with computer opponent

//preprocessor 
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

//defining class for dice used to play game
class Die{
    
//functions used by class
public:
void Roll();
void Zero();
int GetRoll();

//variables used by class
private:
int dieValue = 0;
};

//rolls dice
void Die::Roll(){
	dieValue = ((rand() % 6) + 1);
	return;
}

//sets value of dice back to zero
void Die::Zero(){
    dieValue = 0;
    return;
}

//gets the value of the last dice roll
int Die::GetRoll(){
	return dieValue;
}

//start main functions
int main() {
    
    //declare variables and functions used by program
    Die dice1;
    Die dice2;
    int turnSum = 0;
    int hold = 0;
    string playerName = "";
    int pTurn = 1;
    int cTurn = 1;
    int rolls = 0;
    int playerTurnScores[1000] = {};
    int computerTurnScores[1000] = {};
    
    //seeds random number
    srand(time(0));
    
    //output directions for game
    cout << "This is a dice game called Pig. The object of the game is to \n";
    cout << "beat the computer to 100 points.  Each turn you will roll two dice \n";
    cout << "with the goal being to reach 100 points.  However, if you roll a one \n";
    cout << "with either dice, your score will be set to zero for the turn.  If you \n";
    cout << "roll double ones, you're score for the whole game will go back to zero. \n";
    cout << "You will be given the opportunity to bank your points and pass your turn after \n";
    cout << "each roll.  Good luck!\n" << endl;
    
    //get username
    cout << "What is your name?: ";
    cin >> playerName;
    cout << endl;
    
        //loop iterates until either the player or computer wins
        while(playerTurnScores[pTurn - 1] < 100 && computerTurnScores[cTurn - 1] < 100){
            
            //notifys player it is there turn
            cout << endl;
            cout << playerName << "'s turn.\n";
            
            //sets variables to 0 for each iteration of the loop
            hold = 0;
            turnSum = 0;
            
            //prompts user to hold or roll
            cout << "Enter 0 to roll or 1 to hold: ";
            cin >> hold;
            cout << endl;
            
            //loop iterates until player holds or is broken out of the loop by rolling a 1
            while(hold != 1){
                
                //rolls dice
                dice1.Roll();
                dice2.Roll();
        
                //tells player what they rolled
                cout << "Your first dice was a " << dice1.GetRoll() << " your second dice was a ";
                cout << dice2.GetRoll() << endl;
            
                //if no ones are rolled this tallies up their score
                if(dice1.GetRoll() != 1 && dice2.GetRoll() !=1){
                    turnSum = dice1.GetRoll() + dice2.GetRoll() + turnSum;
                    playerTurnScores[pTurn] = turnSum + playerTurnScores[pTurn - 1];
                    cout << "\nYour score right now is: " << playerTurnScores[pTurn] << endl << endl;
                }
            
                //if the players roll a 1 their turn ends and they lose their points for the turn.
                else if (dice1.GetRoll() == 1 && dice2.GetRoll() != 1){
                    playerTurnScores[pTurn] = playerTurnScores[pTurn-1];
                    cout << "\nYou rolled a 1, your turn is over and you lose your points for this round\n";
                    cout << "\nYour score right now is: " << playerTurnScores[pTurn] << endl << endl;
                    break;
                }
                
                //if the players roll a 1 their turn ends and they lose their points for the turn.
                else if (dice1.GetRoll() != 1 && dice2.GetRoll() == 1){
                    playerTurnScores[pTurn] = playerTurnScores[pTurn-1];
                    cout << "\nYou rolled a 1, your turn is over and you lose your points for this round\n";
                    cout << "\nYour score right now is: " << playerTurnScores[pTurn] << endl << endl;
                    break;
                }
            
                //if the player rolls two ones they lose all their points and their turn.
                else if(dice1.GetRoll() == 1 && dice2.GetRoll() == 1){
                    playerTurnScores[pTurn] = 0;
                    cout << "\nOh no, double 1's! Your turn is over and you lose ALL of your points!\n";
                    cout << "\nYour score right now is: " << playerTurnScores[pTurn] << endl << endl;
                    break;
                }
                
                //if the player scores over 100 points the game ends
                if(playerTurnScores[pTurn] >= 100){
                    cout << "Congratulations you won in " << pTurn << " turns!";
                    break;
                }
                
                //prompts to player to roll or hold if they didnt roll a 1
                cout << "Enter 0 to roll or 1 to hold: ";
                cin >> hold;
                cout << endl;
            }
            
            //zeros dice for computer
            dice1.Zero();
            dice2.Zero();
            
            //increments the players turn
            pTurn++;
            
            //zeros variables for computers turn for each iteration of the looop
            turnSum = 0;
            rolls = 0;
                
            //branch only taken if player hasnt already won
            if(playerTurnScores[pTurn - 1] < 100){
                
                //outputs that it is the computer turn
                cout << endl;
                cout << "Computers turn\n";
            
                //computer will roll a maximum of three times in a row
                while(rolls <= 3 ){
                    
                    //computer will roll until they get 20 or more points as long as they haven't gone over three rolls
                    if(turnSum <= 20){
                        
                        //rolls dice
                        dice1.Roll();
                        dice2.Roll();
                        
                        // increments rolls variable
                        rolls++;
                        
                        //outputs what the computer rolled
                        cout << "The computer's first dice was a " << dice1.GetRoll() << " The computer's second dice was a ";
                        cout << dice2.GetRoll() << endl;
            
                        //if computer didnt roll a one its score is tallied
                        if(dice1.GetRoll() != 1 && dice2.GetRoll() !=1){
                            turnSum = dice1.GetRoll() + dice2.GetRoll() + turnSum;
                            computerTurnScores[cTurn] = turnSum + computerTurnScores[cTurn - 1];
                            cout << "\nThe computer's score right now is: " << computerTurnScores[cTurn] << endl << endl;
                        }
            
                        //if the computer rolled a 1 its points for the turn are lost and it loses its turn
                        else if (dice1.GetRoll() == 1 && dice2.GetRoll() != 1){
                            computerTurnScores[cTurn] = computerTurnScores[cTurn - 1];
                            cout << "\nThe computer rolled a 1, its turn is over and it loses its points for this round\n";
                            cout << "\nThe Computers score right now is: " << computerTurnScores[cTurn] << endl << endl;
                            break;
                        }
                
                        //if the computer rolled a 1 its points for the turn are lost and it loses its turn
                        else if (dice1.GetRoll() != 1 && dice2.GetRoll() == 1){
                            computerTurnScores[cTurn] = computerTurnScores[cTurn - 1];
                            cout << "\nThe computer rolled a 1, its turn is over and it loses its points for this round\n";
                            cout << "\nThe Computers score right now is: " << computerTurnScores[cTurn] << endl << endl;
                            break;
                        }
                        
                        //if the computer rolls two ones it loses its turn and all of its points
                        else if(dice1.GetRoll() == 1 && dice2.GetRoll() == 1){
                            computerTurnScores[cTurn] = 0;
                            cout << "\nOh no, double 1's! The computers turn is over and it loses ALL of its points!\n";
                            cout << "\nThe computers score right now is: " << computerTurnScores[cTurn] << endl << endl;
                            break;
                        }
                    
                    }
                    
                    //if the computer scores over 100 points the game ends
                    if(computerTurnScores[cTurn] >= 100){
                            cout << "The computer won in " << cTurn << " turns!\n";
                            break;
                        }
                    
                    //if the computer gets over 20 points in a turn it will hold
                    if(turnSum >= 20){
                        cout << "The computer holds\n" << endl;
                        break;
                    }
                    
                    //if the computer gets over 3 rolls it will hold
                    if(rolls >= 3){
                        cout << "The computer holds\n" << endl;
                    }
            
                }
            }
                //increments the number of turns the computer has taken.
                cTurn++;
                    
            }
        //outputs game over when game ends.
        cout << "\nGame Over";
        
    //end program.
    return 0;
}