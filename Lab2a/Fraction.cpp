// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2a
// Fraction.cpp

#include "Fraction.h"

// Add two fractions
Fraction operator+(const Fraction & f1, const Fraction & f2 )
{
  Fraction temp;

  temp.n = (f1.n * f2.d) + (f2.n * f1.d);
  temp.d = f1.d * f2.d;

  return temp;
}

// Multiply two fractions
Fraction operator*( const Fraction & f1, const Fraction & f2 )
{
  Fraction temp;
  temp.n = f1.n * f2.n;
  temp.d = f1.d * f2.d;
  return temp;
}

// Compare two fractions
bool operator>(const Fraction & f1, const Fraction & f2 )
{
  // Use a single float to compare both fractions.
  float n1 = f1.n * f2.d;
  float n2 = f2.n * f1.d;
  if (n1 > n2) return true;
  else return false;
}

// Multiply fractions by integers
Fraction operator*( const int & n, const Fraction & f1 )
{
  // Use a single float to compare both fractions.
  Fraction temp;
  temp.n = f1.n * n;
  temp.d = f1.d;
  return temp;
}

// Multiply fractions by integers
Fraction operator*( const Fraction & f1, const int & n )
{
  // Use a single float to compare both fractions.
  Fraction temp;
  temp.n = f1.n * n;
  temp.d = f1.d;
  return temp;
}
