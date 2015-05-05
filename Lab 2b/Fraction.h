// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2a
// Fraction.h

#include <iostream> // for << overloading
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

struct Fraction
{
  int n;
  int d;


};

// Add two fractions
Fraction operator+( const Fraction &, const Fraction & );
Fraction operator*( const Fraction &, const Fraction & );
bool     operator>( const Fraction &, const Fraction & );
Fraction operator*( const int      &, const Fraction & );
Fraction operator*( const Fraction &, const int      & );

bool     operator==( const Fraction &, const Fraction & );
ostream& operator<<(ostream &, const Fraction &);

#endif
