// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2b
// Rectangle.h

#ifndef RECTANGLE_H
#define RECTANGLE_H

template <class DataType>
class Rectangle
{
public:

  // Setters for length and width
  void setWidth  ( const DataType & width  ) { w = width;  }
  void setLength ( const DataType & length ) { l = length; }


  // Getters for length and width
  DataType getWidth () const {return l;}
  DataType getLength () const {return w;}

  // Other functions
  bool  isLengthBigger () const
  {
    if ( l > w)
      return true;
    else return false;
  }
  float getPerimeter () const { return ( 2 * ( l + w)); }
  float getArea () const { return ( l * w ); }

private:
  DataType l, w; // Length and width

};

#endif
