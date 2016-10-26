//Ryan Gimble 10/25/16
//Lab 12 Array menu, takes user order and repeats it back

#include <iostream>
using namespace std;
 
int main() {
    
    //Declare Array and variable
    int grubMenu [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int userNum = -1;
    
    //cout menu options
    cout << endl;
    cout << "Welcome to Gimble's Grub, please select items from the menu.  Press 0 to quit" << endl << endl;
    cout << "For Tacos enter 1" << endl;
    cout << "For Pizza enter 2" << endl;
    cout << "For Cheeseburgers enter 3" << endl;
    cout << "For Chinese Food enter 4" << endl;
    cout << "For Breakfast Burritos enter 5" << endl;
    cout << "For Sushi enter 6" << endl;
    cout << "For Fried Chicken enter 7" << endl;
    cout << "For Ice Cream enter 8" << endl;
    cout << "For Sandwiches enter 9" << endl;
    cout << "For Hot Dogs enter 10" << endl << endl;
    cout << "Please make your selections: ";
    cin >> userNum;
    
    //loop takes customer input unti 0 is entered
    while (userNum !=0){
        
        //switch case updates array values based on user input
        switch(userNum) {
            
            case 1: grubMenu[0] = grubMenu[0] + 1;
            break;
            case 2: grubMenu[1] = grubMenu[1] + 1;
            break;
            case 3: grubMenu[2] = grubMenu[2] + 1;
            break;
            case 4: grubMenu[3] = grubMenu[3] + 1;
            break;
            case 5: grubMenu[4] = grubMenu[4] + 1;
            break;
            case 6: grubMenu[5] = grubMenu[5] + 1;
            break;
            case 7: grubMenu[6] = grubMenu[6] + 1;
            break;
            case 8: grubMenu[7] = grubMenu[7] + 1;
            break;
            case 9: grubMenu[8] = grubMenu[8] + 1;
            break;
            case 10: grubMenu[9] = grubMenu[9] + 1;
            break;
            default: cout << "Invalid choice." << endl;
        }
        
        cout << "Please make your next selection: ";
        cin >> userNum;
    }
    
    //outputs final customer order
    cout << "\nOrder summary: " << endl;
    cout << grubMenu[0] << " Tacos" << endl;
    cout << grubMenu[1] << " Pizzas" << endl;
    cout << grubMenu[2] << " Cheeseburgers" << endl;
    cout << grubMenu[3] << " Chinese Food" << endl;
    cout << grubMenu[4] << " Breakfast Burritos" << endl;
    cout << grubMenu[5] << " Sushi" << endl;
    cout << grubMenu[6] << " Fried Chicken" << endl;
    cout << grubMenu[7] << " Ice Creams" << endl;
    cout << grubMenu[8] << " Sandwiches" << endl;
    cout << grubMenu[9] << " Hot Dogs" << endl;
    
    return 0;
}