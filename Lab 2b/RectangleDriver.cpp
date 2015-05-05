// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2b
// Rectangle.h & RectangleDriver.cpp

#include <iostream>
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

  Rectangle<float> Float_Rectangle1, Float_Rectangle2;
  Rectangle<Fraction> Fraction_Rectangle1, Fraction_Rectangle2;

  cout << "Object copy/assignment testing - Float data type\n";
  {
    Float_Rectangle1.setLength( 1 );
    Float_Rectangle1.setWidth ( 1 );


    Float_Rectangle2 = Float_Rectangle1;

    cout << "  Expected: 1/1/4/1. Actual: "
         << Float_Rectangle2.getLength()
         << "/"  << Float_Rectangle2.getWidth()
         << "/"  << Float_Rectangle2.getPerimeter()
         << "/"  << Float_Rectangle2.getArea() << ". \n";

    cout << "  Confirm that all getters and '==' overloading is working \n";
    {
      if ( Float_Rectangle1 == Float_Rectangle2)
        cout << "    Lengths and widths are equal. \n";
      else
        cout << "    Lengths and widths are NOT equal. \n";

      if ( Float_Rectangle1.getArea() == Float_Rectangle2.getArea() && Float_Rectangle1.getPerimeter() == Float_Rectangle2.getPerimeter() )
        cout << "    Areas and perimeters are equal. \n";
      else
        cout << "    Areas and perimeters are NOT equal. \n";

    } // end testing getters and == overloading

  cout << endl;
  } // end object copy and assignment testing with float data type

  cout << "Object copy/assignment testing - Fraction data type\n";
  {
    // Temporary fractions
    Fraction length, width;

    // Assign values
    length.n = 1;
    length.d = 2;

    width.n  = 1;
    width.d  = 4;

    // Assign fractions to rectangle length and width
    Fraction_Rectangle1.setLength( length );
    Fraction_Rectangle1.setWidth ( width );

    // Assign rectangle 2 to rectangle 1
    Fraction_Rectangle2 = Fraction_Rectangle1;

    // Confirm correct values/calculations

    cout << "Expected: 1/2, 1/4, 12/8, 1/8. Actual: "
       << Fraction_Rectangle2.getLength()
       << ", "  << Fraction_Rectangle2.getWidth()
       << ", "  << Fraction_Rectangle2.getPerimeter()
       << ", "  << Fraction_Rectangle2.getArea()
       << ". \n";

    cout << "  Confirm that all getters and '==' overloading is working \n";
    {
      if ( Fraction_Rectangle1 == Fraction_Rectangle2)
        cout << "    Lengths and widths are equal. \n";
      else
        cout << "    Lengths and widths are NOT equal. \n";

      if ( Fraction_Rectangle1.getArea() == Fraction_Rectangle2.getArea() && Fraction_Rectangle1.getPerimeter() == Fraction_Rectangle2.getPerimeter() )
        cout << "    Areas and perimeters are equal. \n";
      else
        cout << "    Areas and perimeters are NOT equal. \n";

    } // end testing getters and == overloading

  cout << endl;
  }


} //end int main
