#include "Road.h"
#include "Road.h" //testing ifndef

const int FEET_PER_MILE = 5280;
const float DEFAULT_WIDTH_FT = 10, DEFAULT_LENGTH_MIL = 1, DEFAULT_THICKNESS_IN = 5;

// 2 float ctor
Road::Road(float length, float width)
{
	m_Length = length;
	m_Width = width;
}

// Setters
void Road::setWidth(const float & width)
{
	if (width > 0)
		m_Width = width;
	else
		m_Width = DEFAULT_WIDTH_FT;
}
void Road::setLength(const float & length)
{
	if (length > 0)
		m_Length = length;
	else
		m_Length = DEFAULT_LENGTH_MIL;
}

float Road::asphalt(const float & thickness)
{
	if (thickness > 0)
	{
		//Convert length and thickness to feet, and multiply
		return  (m_Length * FEET_PER_MILE) * m_Width * (thickness / 12.0f);
	}
	else
		return  (m_Length * FEET_PER_MILE) * m_Width * (5.0f / 12.0f);
}