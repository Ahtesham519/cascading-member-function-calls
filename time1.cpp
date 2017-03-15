//time1.cpp
//demonstrates the cascading of the function call

//Time class defination
//member functions defined in Time1.cpp

#include TIME_H
#define TIME_H

class Time
{
public:
    explicit Time( int = 0, int = 0, int = 0 );     //default constructor
    
    //set function (the Time & return types enable cascading)
    Time &setTime( int , int , int );    // det hour ,minute , seconds
    Time &setHour ( int );// set Hour
    Time &setMinute( int ); //set minute
    Time &setSecond( int );  //set second
    
    //get functions (normally declared const)
   unsigned int getHour() const; //return hour
   unsigned int getMinute() const; //return minute
   unsigned int setSecond() const; //return second
   
   //print functions (normally declared const)
   void printUniversal() const; //print universal time
   void printStandards() const; //print standard time
   
private:
   unsigned int hour; // 0-23 ( 24 hour clock format)
   unsigned int minute; // 0-59
   unsigned int second; // 0-59
};
//end the class TIME
