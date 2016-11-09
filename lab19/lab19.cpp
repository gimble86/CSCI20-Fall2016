// Ryan Gimble *Date* Lab #19
// Program reads data in from a file into a two dimensional array and outputs data into an output file called output.txt

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    //declare variables and arrays
    ofstream outFS;
    ifstream inFS;
    int numArray[100][5] = {0};
    int i = 0;
    int j = 0;
    double average = 0;
    double runningTotal = 0;
    string myTxtFile = "";

    // get name of input file
    cout << "Please enter name of input file: ";
    cin >> myTxtFile;
    
    // open input file
    cout << "\nopenning myfile.txt" << endl;
    inFS.open(myTxtFile);
    
    //check to see if file opened successfully
    if(!inFS.is_open()) {
        cout << "File not Opened!";
        
        return 1;
    }
    
    cout << "\nReading in integers" << endl;
    
    i = 0;
    
    //read in input file info into two dimensional array, get running total for average, calculate totals for each row
    while(!inFS.eof()) {
        for(j = 0; j <= 3; j++) {
        inFS >> numArray[i][j];
        runningTotal = runningTotal + numArray[i][j];
        numArray[i][4] = numArray[i][4] + numArray [i][j];
        }
    i++;
    
    }
    
    //close input file
    inFS.close();
    
    //calculate average of array input
    average = runningTotal / ((i)*(j));
    
    //declare variable equal to the number of rows input from file
    int numRows = i;
    
    i = 0;

    //calculate total of inputs for each column
    for(j = 0; j <= 3; j++) {
        
        i = 0;
        
        while(i < numRows){
            numArray[numRows][j] = numArray[numRows][j] + numArray[i][j];
            i++;
        }
    }
    
    //open output file
    cout << "\nSending info to output file" << endl;
    outFS.open("output.txt");
    
    //check to see if file opened successfully
    if (!outFS.is_open()) {
      cout << "Could not open file myoutfile.txt." << endl;
      return 1;
   }
    
    i = 0;
    
    //write to output file
    while(i <= numRows){
        for(j = 0; j <= 4; j++) {
            outFS << numArray [i][j] << " ";
        }
        outFS << endl;
        
        i++;
    }
    
    //add average to output file
    outFS << endl;
    outFS << "The average of the matrix is: " << average;
    
    return 0;
}