#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#include <string>
using namespace std;

template <class DataType>

class DynamicArray
{
public:
	Array(int size);
	inline DataType & operator[](int index);
	void changeSize(int newSize);

	inline int length() const;
	string err() const;
private:
	DataType *elements;
	int capacity;
	DataType dud;
	int errorCode;
};
#include "DynamicArray.cpp"
#endif
