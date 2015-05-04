#include <string>
using namespace std;

#ifndef STATIC_ARRAY_H
#define STATIC_ARRAY_H

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

#include "MyStaticArray.cpp"

#endif // STATIC_ARRAY_H
