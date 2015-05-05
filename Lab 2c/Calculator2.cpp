// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2c
// Calculator2.cpp

#include "TemplateStack.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
  // hi
  cout
    << "// Alex Butorin, Petar Juric, Kevin Crabbe"
    << "// Lab 2c"
    << "// Calculator2.cpp" ;

  // Variables to hold input string and converted number
  string iss = "wwewewew";
  float isn = 0;

  // While the user hasn't pressed Q
  while( iss != "q"  )
  {
    getline(cin, iss);
    cout << iss;
    // Convert input stream string to input stream float
    //isn = atof( iss.c_str( tolower( iss )));

    // Now we can evaluate

  }




}
