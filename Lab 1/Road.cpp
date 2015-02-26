//Road.cpp by Alex Butorin

#include "Road.h"
#include "Road.h"

const float Road::DEFAULT_WIDTH_FT = 10;
const float Road::DEFAULT_LENGTH_M = 1;
const float Road::DEFAULT_THICKNESS_IN = 5;

//Setters
void Road::setWidth( float width)
{
  if (width > 0.0)
    Road::m_Width_ft = width;
  else
    Road::m_Width_ft = DEFAULT_WIDTH_FT;
}
void Road::setLength( float length)
{
  if (length > 0.0)
    Road::m_Length_m = length;
  else
    Road::m_Length_m = DEFAULT_LENGTH_M;
}


