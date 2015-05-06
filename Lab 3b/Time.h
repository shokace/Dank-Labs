/*Petar Juric
1438711

Time program: setting the time using constant correctness.
*/


class Time
{
	int second, minute, hour;

public:

	//Time();
	void sethour( int hrs );
	void setminute( int min);
	void setsecond( int sec );
    
    
    int getTimeInSeconds() const;
    int getTimeInMinutes() const;

	int gethour() const;
	int getminute() const;
	int getsecond() const;

private:
	
};

void Time::sethour( int hrs )
{
	hour = hrs;
}

void Time::setminute( int min )
{
	minute = min;
}

void Time::setsecond( int sec )
{
	second = sec;
}

int Time::gethour()const
{
	return hour;
}

int Time::getminute()const
{
	return minute;
}

int Time::getsecond()const
{
	return second;
}

int Time::getTimeInMinutes() const
{
    return (hour * 60) + minute + (second/60);
    
}

int Time::getTimeInSeconds() const
{
    return (hour * 60 * 60) + (minute * 60) + second;
}

