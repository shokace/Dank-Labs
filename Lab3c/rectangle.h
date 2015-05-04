#include <iostream>

#ifndef RECTANGLE_H
#define RECTANGLE_H

template <class DataType>
class Rectangle
{
public:
  // Default ctor does nothing
  Rectangle();

  // Parametrized ctor
  Rectangle     ( DataType length, DataType width )  {    l = length;    w = width;                     }

  void setLength( const DataType & length )          {    l = length;                                   }
  void setWidth ( const DataType & width )           {    w = width;                                    }
  bool lengthMoreThanWidth()                         {    if ( l > w ) return true; else return false;  }
  DataType perimeter ()                              {    return (2 * l + 2 * w);                       }
  DataType area ()                                   {    return ( l * w );                             }

private:
  // Width and length
  DataType w,l;
};
#endif // RECTANGLE_H
