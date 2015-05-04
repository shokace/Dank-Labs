
#ifndef ROAD_H
#define ROAD_H
class Time
{
public:

  // Default ctor
  Time();

  // Parametrized ctor
  Time( const float & setHours,
        const float & setMinutes,
        const float & setSeconds );

  // Setters
  void setHours  ( const float & hours  );
  void setMinutes( const float & minutes);
  void setSeconds( const float & Seconds);

  // Getters
  float timeInHours  () const;
  float timeInMinutes() const;
  float timeInSeconds() const;

private:
  float hours, minutes, seconds;

};
#endif
