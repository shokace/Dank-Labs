//Petar Juric 1438711
//I used the .zip example to reconstruct the assignment.
//

#ifndef ROAD_H
#define ROAD_H

#ifdef _CONSOLE
#include <iostream>
using namespace std;
#endif

class Road
{
private:
	// Attributes
	int m_height = NULL,
        m_width  = NULL;
public:
	// Methods
	Road()
    {
        m_height = 10;
        m_width = 10;
    }
	Road(int height, int width)
    {
        m_height = height;
        m_width = width;
    }

    Road& operator=(const Road& copy)
    {
        if(this == &copy)
        {
            return *this;
        }
        
        m_height = copy.m_height;
        m_width = copy.m_width;
        
        return *this;
    }
    


	// Getters and Setters
	int getHeight() const { return m_height; }
	int getWidth() const { return m_width; }



	void setHeight(int a_Height = 10);
	void setWidth(int a_Width = 15); // using default arguements

	int getArea() const { return m_height * m_width; }
	int getCircumference() const { return 2 * (m_height + m_width); }

};

#endif