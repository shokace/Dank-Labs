// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2a
// Fraction.h

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

#endif
