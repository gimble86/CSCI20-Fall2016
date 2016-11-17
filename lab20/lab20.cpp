//Ryan Gimble 11-17-16
//Lab 20, commenting on a program using pointers

//allows use of basic input/output library
#include <iostream>
//allows use of cstring library
#include <cstring>
//uses std namespace
using namespace std;
 
//begins main function/program
int main()
{
                //declare a char array of 10 characters including null character
                char firststr[10];
                // int variable called firstname initialized to 0
                int firstname = 0;
                //char pointer initiallized to hold the memory address of firststr
                char *head = firststr;
                //char pointer initiallized to hold the memory address of firststr
                char *tail = firststr;
                //output prompts user to input 10 letter or less word
                cout << "Please enter a 10 letter word or less" << endl;
                //user inputs word into firststr char array
                cin >> firststr;
                //strlen() function determines the length of the char array
                strlen(firststr);
                //assigns the length of the user word to firstname
                firstname = strlen(firststr);
                //outputs "Your word is" followed by the user input
                cout << "Your word is " << firststr << endl;
                
                // if statement checks to see if user input is less than 10 letters long
                if (firstname<10)
                {
                                //loop iterates as long as the current value in the memory address of the pointer doesnt equal /0
                                while (*head != '\0')
                                {
                                                //outputs the value held in the current memory address
                                                cout << *head;
                                                //increments the memory address location by 1
                                                head++;
                                }
                }
                //branch taken if user word is >= 10
                else
                {
                                //is output if word is too large
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                // creates a new line in the output
                cout << endl;
                //assigns the tail pointer to the last memory address of the user input which isnt the null character
                tail = &firststr[strlen(firststr) - 1];
                //Checks length of firstname variable, if < 10 branch is taken
                if (firstname < 10)
                {               
                                //loop iterates as long as the value the memory address the tail pointer is pointing to is not 0
                                while (*tail>0)
                                {
                                                //outputs value in the address tail is currently pointing to
                                                cout << *tail;
                                                //moves tail back one memory address
                                                tail--;
                                }
                }
                //create a new line in the output
                cout << endl;
                //assigns the first memory address of firststr to head
                head = firststr;
                //assigns the last memory address of firststr which isnt the null character to tail
                tail = &firststr[strlen(firststr) - 1];
                //increments the memory address of head by 1
                head++;
                //de-increments the memory address of tail by 1
                tail--;
                //branch taken if value in current head memory address is equal to value in tail memory address
                if (*head == *tail)
                {
                                //output if values are equal
                                cout << "It is an palindrome!" << endl;
                }
                //else branch taken if value in current head memory address is not equal to value in tail memory address
                else
                {
                                //output if vales are unequal
                                cout << "It is not an palindrome" << endl;
                }
 
                //return 0 ends the main function/program
                return 0;
}