#include <iostream>

// Fraction header

struct Fraction
{
  // Numerator and denominator
  int n,d;
};

  // Add two fractions together
  Fraction operator+( const Fraction & f1, const Fraction & f2 )
  {
    Fraction temp;
    temp.n = ( f1.n * f2.d + f2.n * f1.d );
    temp.d = ( f2.d * f2.d );
    return temp;
  }

  // Multiplying fractions
  Fraction operator*( const Fraction & f1, const Fraction & f2 )
  {
    Fraction temp;
    temp.n = ( f1.n * f2.n );
    temp.d = ( f1.d * f2.d );
    return temp;
  }

  // Comparing fractions
  bool operator>( const Fraction & f1, const Fraction & f2 )
  {
    if( (f1.n * f2.d) > (f2.n * f1.d) )
      return true;
    else
      return false;
  }

  // Multiplying by an integer
  Fraction operator*( const Fraction & f, int n )
  {
    Fraction temp;
    temp.n = f.n * n;
    return temp;
  }

  Fraction operator*( int n, const Fraction & f )
  {
    Fraction temp;
    temp.n = f.n * n;
    return temp;
  }
