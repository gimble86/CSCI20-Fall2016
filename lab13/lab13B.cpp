//
//

#include <iostream>
#include <string>
using namespace std;

int SecondsToMinutes(int timeCounter);
int SecondsToHours(int timeCounter);
int HourToSeconds(int StartHour, string AMPM);
string AMPM(int timeCounter);

int main(){
    
    int hours = 0;
    int minutes = 0;
    int maxSeconds = 53940;
    int minSeconds = 46800;
    int timeCounter = minSeconds;
    int startHour = 0;
    int endHour = 0;
    string startAMPM = "AM";
    string endAMPM = "AM";
    
    

    
    // while (timeCounter >= minSeconds && timeCounter <= maxSeconds){
    //     minutes = SecondsToMinutes(timeCounter);
    //     hours = SecondsToHours(timeCounter);
        
    //     if(minutes < 10)
    //         cout << hours - 12 << ":0" << minutes << " PM" << endl;
        
    //     else 
    //     cout << hours - 12 << ":" << minutes << " PM" << endl;
    //     timeCounter = timeCounter + 60;
    // }
    
    cout << endl << "Please enter a start hour: ";
    cin  >> startHour;
    cout << "AM or PM: ";
    cin >> startAMPM;
    cout << endl;
    cout << "Please enter an end hour: ";
    cin >> endHour;
    cout << "AM or PM: ";
    cin >> endAMPM;
    cout << endl;

    minSeconds = HourToSeconds(startHour, startAMPM);
    maxSeconds = HourToSeconds(endHour, endAMPM);
    timeCounter = minSeconds;
    
    for (timeCounter = minSeconds; timeCounter <= maxSeconds; timeCounter = timeCounter + 60){
        minutes = SecondsToMinutes(timeCounter);
        hours = SecondsToHours(timeCounter);
        
        if(minutes < 10){
            if(hours < 1){
                cout << hours + 12 << ":0" << minutes << " " << AMPM(timeCounter) << endl;
            }
            if(hours >= 1 && hours <= 12){
                cout << hours << ":0" << minutes << " " << AMPM(timeCounter) << endl;
            }
            else if(hours > 12){
                cout << hours - 12 << ":0" << minutes << " " << AMPM(timeCounter) << endl;
            }
        }
            
        else {
            if(hours < 1){
                cout << hours + 12 << ":" << minutes << " " << AMPM(timeCounter) << endl;
            }
            if(hours >= 1 && hours <= 12){
                cout << hours << ":" << minutes << " " << AMPM(timeCounter) << endl;
            }
            else if(hours > 12){
                cout << hours - 12 << ":" << minutes << " " << AMPM(timeCounter) << endl;
            }
        }
    }
    
    return 0;
}

int SecondsToMinutes(int timeCounter){
    int minutes_;
    
    minutes_ = (timeCounter % 3600) / 60;
    
    return minutes_;
}


int SecondsToHours(int timeCounter){
    int hours_;
    
    hours_ = timeCounter / 3600;
    
    return hours_;
    
}

int HourToSeconds(int Hour_, string AMPM){
    int seconds_;
    
    if(Hour_ >= 1 && Hour_ < 12 && AMPM == "AM"){
        seconds_ = Hour_ * 3600;
    }
    
    else if(Hour_ >= 1 && Hour_ < 12 && AMPM == "PM"){
        seconds_ = (Hour_ + 12) * 3600;
    }
    
    else if(Hour_ == 12 && AMPM == "AM"){
        seconds_ = 0 * Hour_;
    }
    
    else if(Hour_ == 12 && AMPM == "PM"){
        seconds_ = 3600 * Hour_;
    }
    
    return seconds_;
}

string AMPM(int timeCounter_){
    string ampm = "0";
    
    if(timeCounter_ <= 43140){
        ampm = "AM";
    }
    else
        ampm = "PM";
    return ampm;
}