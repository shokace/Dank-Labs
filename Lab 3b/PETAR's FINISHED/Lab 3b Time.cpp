/*Petar Juric
1438711

Time program: setting the time using constant correctness.
*/

#include <iostream>
#include "Lab 3b Time.h"

//#define __USERDEF__




using namespace std;

int main()
{
	cout << "Time" << endl;

	int sec, min, hour;

	Time t;



#ifdef __USERDEF__
	cout << "set hours: ";
	cin >> hour;
	t.sethour(hour);

	cout << "set minutes: ";
	cin >> min;
	t.setminute(min);
	cout << "set seconds: ";
	cin >> sec;
	t.setsecond(sec);

	cout << t.gethour() << ":" << t.getminute() << ":" << t.getsecond() << endl;

	cout << "Time in minutes: " << t.getTimeInMinutes() << endl;
	cout << "Time in seconds: " << t.getTimeInSeconds() << endl;
#endif

#ifndef __USERDEF__
	t.sethour(12);
	t.setminute(40);
	t.setsecond(30);

	cout << t.gethour() << ":" << t.getminute() << ":" << t.getsecond() << endl;

	cout << "Time in minutes: " << t.getTimeInMinutes() << endl;
	cout << "Time in seconds: " << t.getTimeInSeconds() << endl;

#endif




}