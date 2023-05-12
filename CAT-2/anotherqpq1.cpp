/*
Mr Richard was travelling in a train. The train started from Chennai at 8 hours 30 minutes and 30 seconds
It reached Madurai at 18 hrs, 50 minutes and 40 seconds, that is, it took 10 hours 20 minutes and 10 seconds
Write a program using default arguments in C++ and calculate the arrival time with the departure being provided
by the user. Answer should be 24:60:60 format
*/

#include <iostream>
using namespace std;

//Function to calculate the arrival time, takes starting time as input

void printing(int reachtime, int reachour, int reachmin, int reachsec){
    printf("Arrival time is : %02d:%02d:%02d\n ", reachour, reachmin, reachsec);

}
void arrivaltime(int hours=8, int minutes = 30, int seconds=30){
    int traveltime= (10*3600)+(20*60)+(10);
    int deptime=hours*3600+minutes*60+seconds;
    static int reachtime=traveltime+deptime;
    static int reachour=reachtime/3600;
    static int reachmin=(reachtime%3600)/60;
    static int reachsec=reachtime%60;
    printing(reachtime, reachour, reachmin, reachsec);

}

int main(){
    int hours, minutes, seconds;
    cout<<"Enter the departure time in 24 hours format\n";
    cout<<"Hours: Minutes: Seconds \n";
    cin>>hours>>minutes>>seconds;
    arrivaltime(hours, minutes, seconds);

}
/* Another approach is as follows:
#include <iostream>
using namespace std;

// struct to hold time values
struct Time {
    int hour;
    int minute;
    int second;
};

//Function to calculate the arrival time, takes starting time as input
Time arrivaltime(int hours=8, int minutes=30, int seconds=30){
    int traveltime = (10 * 3600) + (20 * 60) + 10;
    int deptime = hours * 3600 + minutes * 60 + seconds;
    int reachtime = traveltime + deptime;
    int reachhour = reachtime / 3600;
    int reachmin = (reachtime % 3600) / 60;
    int reachsec = reachtime % 60;
    Time reach = {reachhour, reachmin, reachsec};
    return reach;
}

//Function to print the arrival time in 24 hour format
void printing(Time reach){
    printf("Arrival time is : %02d:%02d:%02d\n", reach.hour, reach.minute, reach.second);
}

int main(){
    int hours, minutes, seconds;
    cout<<"Enter the departure time in 24 hours format\n";
    cout<<"Hours: Minutes: Seconds \n";
    cin>>hours>>minutes>>seconds;
    Time reach = arrivaltime(hours, minutes, seconds);
    printing(reach);
    return 0;
}
*/
