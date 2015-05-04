#include "Time.h"

//Default ctor
Time::Time()
{

}

// Parametrized ctor
Time::Time( const float & setHours,
            const float & setMinutes,
            const float & setSeconds )
{
  hours   = setHours;
  minutes = setMinutes;
  seconds = setSeconds;
}

// Setters
void Time::setHours  ( const float & setHours   ){  hours   = setHours;   }
void Time::setMinutes( const float & setMinutes ){  minutes = setMinutes; }
void Time::setSeconds( const float & setSeconds ){  seconds = setSeconds; }

// Getters
float Time::timeInHours  () const {  return ( hours + (minutes / 60) + (seconds / 3600))  ;  }
float Time::timeInMinutes() const {  return ( (hours * 60) + minutes + (seconds / 60))    ;  }
float Time::timeInSeconds() const {  return ( (hours * 3600 + (minutes * 60) + seconds) ) ;  }
