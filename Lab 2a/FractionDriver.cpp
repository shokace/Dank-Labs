// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2a
// FractionDriver.cpp

#include <iostream>
#include "Fraction.h"
#include "Fraction.h" // Ifndef test

using namespace std;

int main()
{
  cout << "Alex Butorin, Petar Juric, Kevin Crabbe" << endl
       << "Lab 2a - Fraction.h, Fraction.cpp & FractionDriver.h" << endl << endl;

  cout << "Declaring Fraction structs, fractions f1=3/4 and f2=5/9" << endl;
  Fraction f1, f2;
  f1.n = 3;
  f1.d = 4;

  f2.n = 5;
  f2.d = 9;

  cout << "Object assignment testing - should output 3/4: ";
  Fraction fcopy = f1;
  cout << fcopy.n << "/" << fcopy.d << endl;

  cout << "Compare 3/4 t 5/9 Result should be true: ";
  if( f1 > f2 ) { cout << "True" << endl;}
  else {cout << "False" << endl;}

  cout << "Compare 5/9 to 3/4 Result should be false: ";
  if( f2 > f1 ) { cout << "True" << endl;}
  else {cout << "False" << endl;}

  cout << "Test fraction multiplication; 3/4 * 5/9 should come out as 15 / 36: ";
  Fraction temp = f1 * f2;
  cout << "  " << temp.n << "/" << temp.d << endl;

  cout << "Multiply by integer; 3/4 * 5 should be 15/4, and 5/9 * 2 should be 10/9: ";
  temp = f1 * 5;
  cout << "  " << temp.n << "/" << temp.d << ", ";

  temp = f2 * 2;
  cout << "  " << temp.n << "/" << temp.d << endl;

  cin.get();

}
