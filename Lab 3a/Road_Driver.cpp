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
#include "Road.h"

// Implicit ctor calls

void TestRoad()
{
	//// Methods

	cout << "ctor" << endl;
    
    Road rA; // create init struct
    
    cout << "Getters and Setters: rA" << endl;
    
    cout << "rA.getHeight " << rA.getHeight() << endl;
    
    cout << "rA.getWidth " << rA.getWidth() << endl;
    
    cout << "rA.getArea " << rA.getArea() << endl;
    
    cout << "rA.getCircumference" << rA.getCircumference() << endl;
    

	Road rB(100, 5); //create parameterized struct
    
	//// Getters and Setters
    
	cout << "Getters and Setters rB" << endl;
    
	cout << "rB.getHeight " << rB.getHeight() << endl;
    
	cout << "rB.getWidth " << rB.getWidth() << endl;
    
    cout << "rB.getArea " << rB.getArea() << endl;
    
    cout << "rB.getCircumference" << rB.getCircumference() << endl;
    
    const Road copy = rB; //copies rb into copy
    
    //Test copy struct
    cout << endl;
    cout << "copy.getHeight " << copy.getHeight() << endl;
    
    cout << "copy.getWidth " << copy.getWidth() << endl;
    
    cout << "copy.getArea " << copy.getArea() << endl;
    
    cout << "copy.getCircumference " << copy.getCircumference();
    
    
    

	
 

}

int main()
{
	TestRoad();
}