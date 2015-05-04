#include <string>

#ifndef STATIC_ARRAY_H
#define STATIC_ARRAY_H

#define DEBUG_ARRAY

using namespace std;

template <class DataType>

class Array
{
public:
	Array(int size);                   // Default ctor
	DataType & operator[](int index);  // Bracket operator
	void changeSize(int newSize);      //

	int length() const;
	string err() const;

private:
	DataType *elements;
	int capacity;
	DataType dud;
	int errorCode;
};


// Default ctor
template <class DataType>
Array<DataType>::Array(int size)
{
  // Set error code to zero by default
  errorCode = 0;

  // Capacity check
  if (size < 1)
	{
		capacity = 1;
		errorCode = 1;
	}
	else
	{
		capacity = size;

	}

	// Allocate memory
	elements = new DataType[capacity];

  // Initialize all elements to zero.
  for( int i=0; i<capacity; i++)
  {
    elements[i] = 0;
  }
}

// Destructor
template <class DataType>
Array<DataType>::~Array(int size)
{
  delete [] elements;
}

template <class DataType>
DataType & Array<DataType>::operator[](int index)
{
#ifdef DEBUG_ARRAY
	if (index < 0 || index >= capacity)
	{
		errorCode |= 2;
		return dud;
	}
#endif
	return elements[index];
}

template <class DataType>
void Array<DataType>::changeSize(int newSize)
{
	if (newSize < 1)
	{
		errorCode |= 4;
		return;
	}
	DataType *newArray = new DataType[newSize];

	int limit = (newSize > capacity) ? capacity : newSize;

	for (int i = 0; i < limit; i++)
		newArray[i] = elements[i];

	delete[] elements;
	elements = newArray;
	capacity = newSize;
}

template <class DataType>
int Array<DataType>::length()const
{
	return capacity;
}

template <class DataType>
string Array<DataType>::err()const
{
	if (errorCode == 0)
	{
		return "no error.\n";
	}

	string errorMessage = "";
	if (errorCode & 1)
	{
		errorMessage += "Nonpositive size passed into constructor, defaulted to 1.\n";
	}
	if (errorCode & 2)
	{
		errorMessage += "Index out of range\n";
	}
	if (errorCode & 4)
	{
		errorMessage += "Nonpositive size passed into changesize, array not changed.\n";
	}
	return errorMessage;
}

#endif // STATIC_ARRAY_H


