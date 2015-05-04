//Road.h by Alex Butorin (1216985)
#ifndef Road_h
#define Road_h

class Road
{
public:


  // Default ctor
  Road (float length, float width);

  // Setters
  void setWidth ( const float & width);
  void setLength( const float & length);

  // Getters
  float getWidth()  const { return m_Width; }
  float getLength() const { return m_Length; }

  //Asphalt volume calculat0r
  float asphalt (const float & thickness);

private:
  float m_Width;  //Width in feet
  float m_Length;  //Length in miles
};

#endif // Road_h
