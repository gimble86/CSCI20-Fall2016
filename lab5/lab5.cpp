//Ryan Gimble lab 5
//9-6-16

#include <iostream>
#include <string>
using namespace std;

    //Declare structure
    struct monsterDetails {
        string monsterName;
        string monsterHead;
        string monsterEyes;
        string monsterEars;
        string monsterNose;
        string monsterMouth;
    };

int main ()
{
    
    //Declare variables using structure
    monsterDetails oneMonster;
    monsterDetails twoMonster;
    monsterDetails threeMonster;
    
    //Set object values
    oneMonster.monsterName    = "OneMonster";
    oneMonster.monsterHead    = "Zombus";
    oneMonster.monsterEyes    = "Spritem";
    oneMonster.monsterEars    = "Vegitas";
    oneMonster.monsterNose    = "None";
    oneMonster.monsterMouth   = "Wackus";
    
    twoMonster.monsterName    = "TwoMonster";
    twoMonster.monsterHead    = "Happy";
    twoMonster.monsterEyes    = "Spritem";
    twoMonster.monsterEars    = "Vegitas";
    twoMonster.monsterNose    = "Wackus";
    twoMonster.monsterMouth   = "Wackus";
    
    threeMonster.monsterName  = "0";
    threeMonster.monsterHead  = "0";
    threeMonster.monsterEyes  = "0";
    threeMonster.monsterEars  = "0";
    threeMonster.monsterNose  = "0";
    threeMonster.monsterMouth = "0";
    
    //User input for monster three
    cout << endl;
    cout << "Input a monster name: ";
    cin  >> threeMonster.monsterName;
    
    cout << "Input a monster Head: ";
    cin  >> threeMonster.monsterHead;
    
    cout << "Input a monster eye: "; 
    cin  >> threeMonster.monsterEyes;
    
    cout << "Input a monster ear: ";
    cin  >> threeMonster.monsterEars;
    
    cout << "Input a monster nose: ";
    cin  >> threeMonster.monsterNose;
    
    cout << "Input a monster mouth: ";
    cin  >> threeMonster.monsterMouth;
    cout << endl;
    
    //Output for three monsters
    cout << oneMonster.monsterName << endl;
    cout << oneMonster.monsterHead << endl;
    cout << oneMonster.monsterEyes << endl;
    cout << oneMonster.monsterEars << endl;
    cout << oneMonster.monsterNose << endl;
    cout << oneMonster.monsterMouth << endl;
    cout << endl;
    
    cout << twoMonster.monsterName << endl;
    cout << twoMonster.monsterHead << endl;
    cout << twoMonster.monsterEyes << endl;
    cout << twoMonster.monsterEars << endl;
    cout << twoMonster.monsterNose << endl;
    cout << twoMonster.monsterMouth << endl;
    cout << endl;
    
    cout << threeMonster.monsterName << endl;
    cout << threeMonster.monsterHead << endl;
    cout << threeMonster.monsterEyes << endl;
    cout << threeMonster.monsterEars << endl;
    cout << threeMonster.monsterNose << endl;
    cout << threeMonster.monsterMouth << endl;
}