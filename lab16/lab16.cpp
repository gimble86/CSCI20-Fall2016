//Ryan Gimble 10/25/16
//Lab 12 Array menu, takes user order and shows the user the prices and available inventory as they make choices.  Repeats order at the end and shows final price.

//Side note, I see now how I could have made inventory an array also.

#include <iostream>
using namespace std;
 
int main() {
    
    //Declare Array and variable
    float price [10] = {2.59, 10.59, 3.99, 8.99, 4.59, 12.99, 6.99, 4.75, 4.99, 2.99};
    int grubMenu [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int userNum = -1;
    float totalPrice = 0;
    int invTaco = 10;
    int invPizza = 10;
    int invCheeseBurger = 10;
    int invChineseFood = 10;
    int invBreakfastBurrito = 10;
    int invSushi = 10;
    int invFriedChicken = 10;
    int invIceCream = 10;
    int invSandwiches = 10;
    int invHotDog = 10;
    
    
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
    
    //cin initial user input to start the loop
    cin >> userNum;
    
    //loop takes customer input unti 0 is entered
    while (userNum !=0){
        
        //switch case updates array values based on user input.  Also shows item price/available inventory  and adjusts inventory.
        switch(userNum) {
            
            case 1: grubMenu[0] = grubMenu[0] + 1;
                cout << "Price: " << price[0] << " Inventory: " << invTaco << endl; 
                invTaco = invTaco - 1;
                totalPrice = totalPrice + price[0];
            break;
            case 2: grubMenu[1] = grubMenu[1] + 1;
            cout << "Price: " << price[1] << " Inventory: " << invPizza << endl; 
                invPizza = invPizza - 1;
                totalPrice = totalPrice + price[1];
            break;
            case 3: grubMenu[2] = grubMenu[2] + 1;
            cout << "Price: " << price[2] << " Inventory: " << invCheeseBurger << endl; 
                invCheeseBurger = invCheeseBurger - 1;
                totalPrice = totalPrice + price[2];
            break;
            case 4: grubMenu[3] = grubMenu[3] + 1;
            cout << "Price: " << price[3] << " Inventory: " << invChineseFood << endl; 
                invChineseFood = invChineseFood - 1;
                totalPrice = totalPrice + price[3];
            break;
            case 5: grubMenu[4] = grubMenu[4] + 1;
            cout << "Price: " << price[4] << " Inventory: " << invBreakfastBurrito << endl; 
                invBreakfastBurrito = invBreakfastBurrito - 1;
                totalPrice = totalPrice + price[4];
            break;
            case 6: grubMenu[5] = grubMenu[5] + 1;
            cout << "Price: " << price[5] << " Inventory: " << invSushi << endl; 
                invSushi = invSushi - 1;
                totalPrice = totalPrice + price[5];
            break;
            case 7: grubMenu[6] = grubMenu[6] + 1;
            cout << "Price: " << price[6] << " Inventory: " << invFriedChicken << endl; 
                invFriedChicken = invFriedChicken - 1;
                totalPrice = totalPrice + price[6];
            break;
            case 8: grubMenu[7] = grubMenu[7] + 1;
            cout << "Price: " << price[7] << " Inventory: " << invIceCream << endl; 
                invIceCream = invIceCream - 1;
                totalPrice = totalPrice + price[7];
            break;
            case 9: grubMenu[8] = grubMenu[8] + 1;
            cout << "Price: " << price[8] << " Inventory: " << invSandwiches << endl; 
                invSandwiches = invSandwiches - 1;
                totalPrice = totalPrice + price[8];
            break;
            case 10: grubMenu[9] = grubMenu[9] + 1;
            cout << "Price: " << price[9] << " Inventory: " << invHotDog << endl; 
                invHotDog = invHotDog - 1;
                totalPrice = totalPrice + price[9];
            break;
            default: cout << "Invalid choice." << endl;
        }
        
        cout << "Please make your next selection: ";
        cin >> userNum;
    }
    
    //outputs final customer order and total price.
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
    cout << "You're total price is: " << totalPrice << endl;
    
    return 0;
}