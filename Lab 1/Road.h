//Road.h by AB
#ifndef Road_h
#define Road_h

class Road
{
public:
  const int FEET_PER_MILE = 5280;
  static const float DEFAULT_WIDTH_FT, DEFAULT_LENGTH_M, DEFAULT_THICKNESS_IN;

  //Setters
  void setWidth( float width);
  void setLength( float length);

  //Getters
  float getWidth()  const { return m_Width_ft;  }
  float getLength() const { return m_Length_m; }

  //Asphalt volume calculat0r
  float asphalt ( float thickness ) const
  {
    if (thickness > 0)
      {
      //Convert length and thicnkess to feet, and multiply
      return  float(m_Length_m * FEET_PER_MILE) * m_Width_ft * (thickness / 12.0 );
      }
    else
      return  float(m_Length_m * FEET_PER_MILE) * m_Width_ft * (5.0 / 12.0 );
  }

private:
  float m_Width_ft;  //Width in feet
  float m_Length_m; //Length in miles
};
#endif // Road_h
