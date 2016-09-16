//
//

#include <iostream>
#include <string>
using namespace std;

void arsonist1 (string chorus, string verse1) {
    
    verse1 = "When I was a child, I heard voices\nSome would sing and some would scream\nYou'll soon find you have few choices\nI learned the voices died with me\nWhen I was a child I'd sit for hours\nStaring into open flames\nSomething in it had a power\nCould barely tear my eyes away";
    chorus = "All you have is your fire\nAnd the place you need to reach\nDon't you ever tame your demons\nBut always keep them on a leash";
    
    cout << endl;
    cout << verse1 << endl;
    cout << endl;
    cout << chorus << endl;
    cout << endl;
}

void arsonist2 (string chorus, string verse2) {
    
    verse2 = "When I was 16 my senses fooled me\nThought gasoline was on my clothes\nI knew that something would always rule me\nI knew this scent was mine alone";
    chorus = "All you have is your fire\nAnd the place you need to reach\nDon't you ever tame your demons\nBut always keep them on a leash";
    
    cout << verse2 << endl;
    cout << endl;
    cout << chorus << endl;
    cout << endl;
}

void arsonist3 (string chorus, string verse3) {

    verse3 = "When I was a man I thought it ended\nWhen I knew love's perfect ache\nBut my peace has always depended\nOn all the ashes in my wake";
    chorus = "All you have is your fire\nAnd the place you need to reach\nDon't you ever tame your demons\nBut always keep them on a leash";
    
    cout << verse3 << endl;
    cout << endl;
    cout << chorus << endl;
    cout << endl;
    
}

int main() {
    string verse1 = "";
    string verse2 = "";
    string verse3 = "";
    string chorus = "";
    
arsonist1(chorus, verse1);
arsonist2(chorus, verse2);
arsonist3(chorus, verse3);
    
}