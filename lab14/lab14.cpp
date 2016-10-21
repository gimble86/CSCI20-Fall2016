//Ryan Gimble 10-18-16
//Debugged this pre-written program and produced output outlining the process

//Grade Average
// Read in a series of grades, terminated by a -1.
// Then output the average and minimum of those grades.

#include <iostream>
using namespace std;

int main() {
    
// Declare variables
    int count = 0;
    double total = 0;
    int minimum = 1000;
    int grade = 0;
    int userInput = 0;

    //Read numbers in until we see the -1
    //Sum up grades as we do, and look for minimum
    while (userInput != -1) {
        cin >> userInput;
        
        if (userInput >= 0){
        grade = userInput;
        total = total + grade;
        count = count + 1;
        }
        
        //fixme
        if (grade < minimum) {
        minimum = grade;
        }
    }
    
    // Output results
    double average = total / count;
    cout << "Average was " << average << endl;
    cout << "Minimum was " << minimum << endl;
    return 0;
    
    //instructional comments need to be commented out
    //ran compiler, looked for syntax errors.
    //read through code looking for obvious logic errors.  
    //if (grade < minimum) looks like a problem because it grade is initialized to zero.  initiallized minimum to 1000 instead since that should be out of range of any grading scale. 
    //entering negative 1 into grade causes total to be wrong
    //created new variable and if statement in loop to correct problem created by entering -1 into grade
    // changed total into a double type variable so that average would include a decimal.
    //initially commenting parts of the program and troubleshooting components such as the loop and if statements one at a time worked the best because it allowed me to fix things one at a time
    //debugging is important because it is the process of making sure the program output is accurate.  If output is inaccurate, the purpose of a program is defeated.
    
}