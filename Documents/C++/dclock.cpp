#include<iostream>
#include <chrono>
#include <thread>
#include<iomanip>
#include <stdio.h>
using namespace std;
class Clock{
 int hr;
 int min;
 int sec;
 public :
 int setTime(int hours,int minutes,int seconds){
     hr=hours;
     min=minutes;
     sec=seconds;
 }
 void display(){
     
     cout<< setw(2) << setfill('0')<<hr<<":"<< setw(2) << setfill('0') << min<<":"<< setw(2) << setfill('0')<<sec<<endl;

 }
 void increment()
 {
     sec++;
     if(sec>59)
     {
         min++;
         sec=00;
     }
     if(min>59)
     {
        hr++;
        min=00;
     }
 }
};
int main()
{
    Clock time;
    time.setTime(23,59,30);
        while(cin.get() != 'q'){
            for(;;){
        time.display();
        time.increment();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        system("clear");
        if (cin.get() == 'q')
        {
            break;
            system("pause");
        } 
            }
        }

    return 0;
}