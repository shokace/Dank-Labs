//Petar Juric 1438711
//I used the .zip example to reconstruct the assignment.
//

#ifndef ROAD_H
#define ROAD_H
#endif

#ifdef _CONSOLE

#include <iostream>
using namespace std;

class Road
{
private:
	// Attributes
	int m_height, m_width;
public:
	// Methods
	Road(int height = 10, int width = 10); //initializer
	Road(const Road &);

	// Getters and Setters
	int getHeight() const { return m_height; }
	int getWidth() const { return m_width; }



	void setHeight(int a_Height = 10);
	void setWidth(int a_Width = 15); // using default arguements

	int getArea() const { return (m_height * m_width); }
	int getCircumference() const { return 2 * (m_height + m_width); }

};




#endif