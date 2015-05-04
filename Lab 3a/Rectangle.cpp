// Alex Butorin
// Lab 2
// COMSC-210 Lab 2 Overloaded Operators, Templates, and Abstraction

#include "Rectangle.h"

  bool isLengthGreaterThanWidth ()
  {
    if (len > wid)
      return true;
    else
      return false;
  }

  double perimeter ()
  {
    return (2 * length + 2 * width);
  }

  double area ()
  {
    return length * width;
  }

