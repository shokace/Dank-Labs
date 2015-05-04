// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2b
// Rectangle.h

#ifndef FRACTION_H
#define FRACTION_H

template <class DataType>
class Rectangle
{
public:

  // Setters for length and width
  void setWidth  ( const DataType & );
  void setLength ( const DataType & );

  // Getters for length and width
  DataType getWidth () const {return l;}
  DataType getLength () const {return w;}

  // Other functions
  bool  isLengthBigger const ();
  float getPerimeter   const ();
  float getArea        const ();

private:
  DataType l, w; // Length and width


};



  // Setters for length and width

  template <class DataType>
  void Rectangle<DataType>::setWidth  ( const DataType & width  ) { w = width;  }

  template <class DataType>
  void Rectangle<DataType>::setLength ( const DataType & length ) { l = length; }

  // Other functions

  template <class DataType>
  bool  Rectangle<DataType>::isLengthBigger const ();

  template <class DataType>
  float Rectangle<DataType>::getPerimeter   const ();

  template <class DataType>
  float Rectangle<DataType>::getArea        const ();

#endif
