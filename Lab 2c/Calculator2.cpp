// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2c
// Calculator2.cpp

#include "TemplateStack.h"
#include "TemplateStack.h" //ifndef test
#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
  // hi
  cout
    << "// Alex Butorin, Petar Juric, Kevin Crabbe \n"
    << "// Lab 2c \n"
    << "// Calculator2.cpp \n" ;

  // Variables to hold input string and converted number
  string iss = "";
  double isn = 0;
  Stack<double> ops;

  // While the user hasn't pressed q
  while( iss != "q" && iss !="Q" )
  {
    getline(cin, iss);
    isn = atof( iss.c_str() );


  }
}
