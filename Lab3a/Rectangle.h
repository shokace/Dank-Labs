// Alex Butorin
// Lab 2
// COMSC-210 Lab 2 Overloaded Operators, Templates, and Abstraction

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
  void setLength ( double len) {length = len; }
  void setWIdth  ( double wid) {width  = wid; }
  bool isLengthGreaterThanWidth ();
  double perimeter ();
  double area ();


private:
  double length;
  double width;

};


#endif // RECTANGLE_H
