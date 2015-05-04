//
//
//Petar Juric 1438711
//I used the .zip example to reconstruct the assignment.
/*
TO TEST
// Methods
Rectangle();
Rectangle(char a_fillChar, int height = 10, int width = 15);
Rectangle(const Rectangle &);

// Getters and Setters
int getHeight() const { return m_height; }
int getWidth() const { return m_width; }
char getFillChar() const { return m_fillChar; }

void setFillChar( char a_fill ) { m_fillChar = a_fill; }
void setHeight( int a_Height = 10 );
void setWidth( int a_Width = 15 ); // using default arguements

int getArea() const { return m_height * m_width; }

*/

#include <iostream>
using namespace std;

#ifndef _CONSOLE
#define _CONSOLE
#endif

#ifndef _DEBUG
#define _DEBUG
#endif 

#include "Road.h"

// Implicit ctor calls

void TestRoad()
{
	//// Methods


	cout << "ctor" << endl;


	Road rB(100, 5);
	//// Getters and Setters
	cout << "Getters and Setters" << endl;

	cout << "rB.getHeight " << rB.getHeight() << endl;

	cout << "rB.getWidth " << rB.getWidth() << endl;






	/*
	Road rC(20);

	//void setHeight( int a_Height = 10 );
	rC.setHeight(2);
	cout << "setHeight " << rC.getHeight() << endl;
	rC.setHeight(-17);
	cout << "setHeight " << rC.getHeight() << endl;
	//void setWidth( int a_Width = 15 ); // using default arguements
	rC.setWidth(3);
	cout << "setWidth " << rC.getWidth() << endl;
	cout << endl;

	//int getArea() const { return m_height * m_width; }
	cout << "getArea " << rB.getArea() << endl;
	*/

}

int main()
{
	TestRoad();
}