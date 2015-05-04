//Lab 3b by Alex Butorin (1216985)

#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
  float hours = 1;
  float minutes = 40;
  float seconds = 30;


  Time defaultTime;
  cout << "Testing default ctor" << endl;

  cout << "Testing parametrized ctor & getters" << endl;
  Time time( hours, minutes, seconds );

  cout << "  Time in minutes: " << time.timeInMinutes()   << ", should be 100.5."  << endl;
  cout << "  Time in hours: "   << time.timeInHours()     << ", should be 1.675." << endl;
  cout << "  Time in seconds: " << time.timeInSeconds()   << ", should be 6030. "  << endl << endl;

  cout << "Testing setters" << endl;
  cout << "  Setting time to 2h:15m:30s" << endl;
  time.setHours  ( 2.f );
  time.setMinutes( 15.f );
  time.setSeconds( 30.f );

  cout << "  Time in minutes: " << time.timeInMinutes()   << ", should be 135.5."  << endl;
  cout << "  Time in hours: "   << time.timeInHours()     << ", should be 2.258. " << endl;
  cout << "  Time in seconds: " << time.timeInSeconds()   << ", should be 8130. "  << endl << endl;
  cout << "  Using " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

}
