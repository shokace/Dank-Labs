//RoadDriver.cpp by

#include <iostream>

//include road twice
#include "Road.h"
#include "Road.h"

using namespace std;

int main()
{
  Road testRoad;
    float thickness_in,length_m,width_ft, volume_cuft;

    thickness_in = 3; // 3 in thick
    length_m     = 1; //1 mile long
    width_ft     = 20; //20 ft wide

  //Testing with normal values

    //thickness
    cout << "Testing with 3in thick, 1m long and 10ft wide" << endl << endl;
    testRoad.setWidth(width_ft);
    cout << "Width: " << testRoad.getWidth() << ", should be " << width_ft << endl;

    //length
    testRoad.setLength(length_m);
    cout << "Length: " << testRoad.getLength() << ", should be " << length_m << endl;

    //volume
    volume_cuft = testRoad.asphalt( thickness_in);
    cout << "Volume: " << volume_cuft << ", should be 26400" << endl;

  //Testing with crappy values
  cout << endl << "Testing with -2147483647in thick, 0m long and 0.4 ft wide" << endl;

    //width
    testRoad.setWidth(0.4);
    cout << "Width: " << testRoad.getWidth() << ", should be 0.4" << endl;

    //length
    testRoad.setLength(0);
    cout << "Length: " << testRoad.getLength() << ", should be 1" << endl;

    //thickness/volume
    volume_cuft = testRoad.asphalt( -2147483647);
    cout << "Volume: " << volume_cuft << ", should be 880" << endl;

    Road copyRoad;
    Road thirdRoad;

}
