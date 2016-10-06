//
//

#include <iostream>
using namespace std;


int main(){
    
char outdoors = 'y';
char running = 'y';
char swimming = 'y';
char pizza = 'y';

cout << "Do you like being outside? y or n: ";
cin >> outdoors;

switch(outdoors){
    case 'y':
        cout << "Do you like running? y or n: ";
        cin >> running;
        switch(running){
            case 'y':
                cout << "You're a Jogger!";
                break;
            case 'n':
                cout << "You're a walker!";
        }
            
}

if(outdoors == 'n'){
    cout << "Do you like pizza? y or n: ";
    cin >> pizza;
    
    if(pizza == 'y'){
        cout << "You're a foodie!";
    }
    else if (pizza == 'n'){
        cout << "Do you like swimming? y or n: ";
        cin >> swimming;
    }
        if(swimming == 'y'){
            cout << "You're Michael Phelps!";
         }
        else if(swimming =='n'){
            cout << "You don't like anything!";
        }
}
    return 0;
}





