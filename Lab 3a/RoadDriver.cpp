//RoadDriver.cpp by Alex Butorin (1216985)

#include <iostream>
#include "Road.h"
#include "Road.h" // testing ifndef

using namespace std;

int main()
{
  float thickness, length, width, volume;

  thickness = 3;  // 3 in thick
  length    = 1;  // 1 mile long
  width     = 20; // 20 ft wide

  Road road( length, width );
    cout << "Testing 2float ctor. \n  Passed values: " << length << ", " << width
         << ".\n  Actual: " << road.getLength() << ", " << road.getWidth() << endl << endl;

  cout << "Testing Setters/Getters." << endl;
    cout << "  Testing with " << width << "in thick, " << length << " mile(s) long and " << width << "ft wide" << endl;

    road.setWidth(width);
    cout << "  Width: "  << road.getWidth()  << ", should be " << width  << endl;

    road.setLength(length);
    cout << "  Length: " << road.getLength() << ", should be " << length << endl;

    volume = road.asphalt( thickness );
    cout << "  Asphalt Volume: " << volume << ", should be 26400" << endl << endl;

    cout << "Testing with wrong values." << endl;
    cout << "  Testing with -2147483647in thick, 0m long and 0.4 ft wide" << endl;

    road.setWidth(0.4);
    cout << "  Width: " << road.getWidth() << ", should be 0.4" << endl;

    road.setLength(0);
    cout << "  Length: " << road.getLength() << ", should be 1" << endl;

    volume = road.asphalt( -2147483647);
    cout << "  Volume: " << volume << ", should be 880" << endl << endl;


  // Object copy testing
  {
    cout << "Object copy testing" << endl;
    const Road copyRoad = road;

    cout << "  Calling all const getters...\n  Length/Width: "
         << copyRoad.getLength() << ", "
         << copyRoad.getWidth()  << ", "
         << "should be " << road.getLength() << ", " << road.getWidth() << "." << endl << endl;
  }

  // Object assignment testing
  {
    Road anotherRoad(0, 0); anotherRoad = road;

    cout << "Object Assignment Testing" << endl;
    cout << "  Calling all const getters...\n  Length/Width: "
         << anotherRoad.getLength() << ", "
         << anotherRoad.getWidth()  << ", "
         << "should be " << road.getLength() << ", " << road.getWidth() << "." << endl;
  }
}
