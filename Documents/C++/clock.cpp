#include<iostream>
using namespace std;
class clockType
{
private:
int hr; //stores the hours
int min; //store the minutes
int sec;
public:
void setTime(int hours, int minutes, int seconds)
{
    hr = hours;
 min = minutes; 
 sec = seconds;
 }
void getTime(int& hours, int& minutes, int& seconds) const
{
    hours = hr;
     minutes = min; 
     seconds = sec;
}
void display(){
cout<<hr<<":"<<min<<":"<<sec<<endl;
//cout<<min<<endl;
//cout<<sec<<endl;}
//void printTime() const;
}
};
int main()
{
    
    clockType cl;
    cl.setTime(23,12,45);
    //cout<<cl.hr<<endl;
    cl.display();
    return 0;
}
