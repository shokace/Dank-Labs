// Alex Butorin
// Lab 2
// COMSC-210 Lab 2 Overloaded Operators, Templates, and Abstraction

#include "Fraction.h"

Fraction operator+( Fraction one, Fraction two );
Fraction operator*( Fraction one, Fraction two )
{
  Fraction temp;
  temp.n = one.n * two.n;
  temp.d = one.d * two.d;
  return temp;
}

bool     operator>( Fraction one, Fraction two )
{

}

Fraction operator*( Fraction one, int      two )
{

}

Fraction operator*( int      one, Fraction two )
{


}


