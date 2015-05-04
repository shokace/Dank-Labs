// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2b
// Rectangle.h & RectangleDriver.cpp

#include <iostream>
#include <cassert>   // Assertions
#include "Rectangle.h" // Rectangles
#include "Fraction.h"  // Frations

#include "Rectangle.h"  // Ifndef test
#include "Fraction.h"

using namespace std;

int main()
{
  cout <<
    "// Alex Butorin, Petar Juric, Kevin Crabbe \n" <<
    "// Lab 2b \n"
    "// Rectangle.h & RectangleDriver.cpp \n\n";

  cout << "Testing Rectangle class \n\n";

  Rectangle<float> floaty1, floaty2;
  Rectangle<Fraction> frac1, frac2;

  // Object Copy/Assignment testing - Float data type
  {
    floaty1.setLength( 1 );
    floaty1.setWidth ( 1 );

    cout << "Object copy/assignment testing - Float data type\n";
    floaty2 = floaty1;

    cout << "Expected: 1/1/4/1. Actual: " << floaty2.getLength() << "/"  << floaty2.getWidth() << "/"  << floaty2.getPerimeter() << "/"  << floaty2.getArea() << ". \n\n";
    assert( floaty1.getLength() == floaty2.getLength() && floaty1.getWidth() == floaty2.getWidth()     );
    assert( floaty1.getPerimeter() == floaty2.getPerimeter() && floaty1.getArea() == floaty2.getArea() );
  }

  // Object Copy/Assignment testing - Fraction data type
  {


    cout << "Object copy/assignment testing - Fraction data type\n";
    floaty2 = floaty1;

    cout << "Expected: 1/1/4/1. Actual: " << floaty2.getLength() << "/"  << floaty2.getWidth() << "/"  << floaty2.getPerimeter() << "/"  << floaty2.getArea() << ". \n\n";
    assert( floaty1.getLength() == floaty2.getLength() && floaty1.getWidth() == floaty2.getWidth()     );
    assert( floaty1.getPerimeter() == floaty2.getPerimeter() && floaty1.getArea() == floaty2.getArea() );

  }
}
