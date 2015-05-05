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
  DataType getWidth () const {return w;}
  DataType getLength () const {return l;}

  // Used to check if length is larger than width
  bool  isLengthLarger () const
  {
    if ( l > w)
      return true;
    else return false;
  }

  DataType getPerimeter () const { return ( 2 * ( l + w)); }
  DataType getArea      () const { return ( l * w );       }

  // Overloaded operator for rectangle assignment/copy
  bool operator=( const DataType & rect)
  {
    l =  rect.getLength();
    w =  rect.getWidth ();
  }

  bool operator==( const Rectangle & rect )
  {
    // If all elements are equal then the two rectangles are equal...
    if( ( l == rect.getLength() ) && ( w == rect.getWidth() ) )
      return true;
    else return false;
  }

private:
  DataType l, w; // Length and width

};

#endif
