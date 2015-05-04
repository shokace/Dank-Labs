#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#include <string>
using namespace std;

template <class DataType>

class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(int size);
	inline DataType & operator[](int index);
	void changeSize(int newSize);

	inline int length() const;
	string err() const;
	int lsearch(const DataType& data);
private:
	DataType *elements;
	int capacity;
	DataType dud;
	int errorCode;
};

template <class DataType>
DynamicArray<DataType>::DynamicArray(int size)
{
	if (size < 1)
	{
		capacity = 1;
		errorCode = 1;
	}

	else
	{
		capcity = size;
		errorCode = 0;
	}

	elements = new DataType[capacity];
	for (int i = 0; i < capacity; i++)
	{
		elements[i] = 0;
	}
}

template <class DataType>
inline DataType & DynamicArray<DataType>::operator[](int index)
{
#ifndef DEBUG_ARRAY
	if (index < 0 || index >= capacity)//??
	{
		errorCode |= 2;
		return dud;
	}
#endif
	return elements[index];
}

template <class DataType>
void DynamicArray<DataType>::changeSize(int newSize)
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
inline int DynamicArray<DataType>::length() const
{
	return capacity;
}

template <class DataType>
string DynamicArray<DataType>::err()const
{
	if (errorCode == 0)
		return "No error.\n";

	string errorMessage = "";
	if (errorCode & 1)
	{
		errorMessage += "Nonpositive size passed into constructor, so\n";
		errorMessage += "the capacity was set to 1 by default.\n";
	}
	if (errorCode & 2)
		errorMessage += "Index out of range.\n";
	if (errorCode & 4)
	{
		errorMessage += "Nonpositive size passed into the changeSize, so\n";
		errorMessage += "the size of the array was not changed.\n";
	}
	return errorMessage;
}

template <class DataType>
int DynamicArray<DataType>::lsearch(const DataType& data)
{
	for (int i = 0; i < capacity; i++)
	{
		if (elements[i] == data)
			return i;
		else return -1;
	}
}
#endif
