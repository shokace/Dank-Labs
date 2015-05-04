// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2a
// FractionDriver.cpp

#include <iostream>   // For ios and cout
#include <cassert>    // Assertions
#include "Fraction.h" // Class being tested
#include "Fraction.h" // Ifndef test

using namespace std;

int main()
{
  cout << "Alex Butorin, Petar Juric, Kevin Crabbe \n"
       << "Lab 2a - Fraction.h, Fraction.cpp & FractionDriver.cpp \n";
  cout << "Declaring Fraction structs, fractions f1=3/4 and f2=5/9 \n\n";

  Fraction f1, f2;
  f1.n = 3;
  f1.d = 4;

  f2.n = 5;
  f2.d = 9;

  // Object copy testing
  {
  cout << "Object copy testing. Expected result is 3/4. ";
  Fraction fcopy1 = f1;
  cout << "Actual result is " << fcopy1.n << "/" << fcopy1.d << endl << endl;
  assert(3 == fcopy1.n && 4 == fcopy1.d);
  }

  // Object assignment testing
  {
  cout << "Object assignment testing. Expected result is 5/9. ";
  Fraction fcopy2; fcopy2 = f2;
  cout << "Actual result is " << fcopy2.n << "/" << fcopy2.d << endl << endl;
  assert(5 == fcopy2.n && 9 == fcopy2.d);
  }

  // Other driver testing
  {
  cout << "Test if (3/4 > 5/9). Expected result is true. ";
  cout << "Actual result is ";

  if( f1 > f2 ) { cout << "True" ; }
           else { cout << "False"; }
  cout << "\n\n";

  cout << "Test if (5/9 > 3/4). Expected result is false. ";
  cout << "Actual result is ";
  if( f2 > f1 ) { cout << "True";}
  else {cout << "False";}
  cout << "\n\n";

  cout << "Test * fraction/fraction overloading;\n Expected result is 15/36. ";
  Fraction temp = f1 * f2;
  cout << "Actual result is " << temp.n << "/" << temp.d << endl << endl;
  assert( temp.n == 15 && temp.d == 36 );

  cout << "Test (int * fraction) & (fraction * int) ovrload;\n Expected results are 15/4 and 10/9. Actual results are: ";
  temp = f1 * 5;
  cout << temp.n << "/" << temp.d << ", ";
  assert( temp.n == 15 && temp.d == 4 );

  temp = f2 * 2;
  cout << temp.n << "/" << temp.d << endl << endl;
  assert( temp.n == 10 && temp.d == 9 );

  }

  cin.get(); // Pause

}
