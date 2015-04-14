#ifndef STATIC_ARRAY
#define STATIC_ARRAY

#include <exception>


template <class DataType, int cap>
class StaticArray
{
private:

	unsigned int const capacity;
	DataType elements[cap];


public:
	//include getters and setters
	StaticArray();
	StaticArray(StaticArray const &);

	DataType & operator[] (unsigned int i);
	DataType const & operator[] (unsigned int i) const;
	unsigned int getMaxSize() const { return capacity; }


	int lsearch(const DataType& value) const
	{
		for (int i = 0; i < capacity; i++)
		{
			if (value == elements[i])
				return i;

		}
			return - 1;
	}

};

//capacity of the array is set to cap and the size is set to 0
template <class DataType, int cap>
StaticArray<DataType, cap>::StaticArray()
	:capacity(cap)
{
	for (int i = 0; i < cap; i++)
	{
		elements[i] = DataType();
	}
}

template <class DataType, int cap>
StaticArray<DataType, cap>::StaticArray(StaticArray const & obj) :capacity(cap)
{
	for (int i = 0; i < capacity; i++)
		elements[i] = obj[i];
}



template <class DataType, int cap>
DataType & StaticArray<DataType, cap>::operator[](unsigned int i)
{
	static DataType dummy;
	if (i < cap)
	{
		return elements[i];
	}
	else
		throw  "Exception(1): index out of range error.";
	return dummy; // never gets here.
}

template <class DataType, int cap>
DataType const & StaticArray<DataType, cap>::operator[](unsigned int i) const
{
	static DataType dummy;
	if (i < cap)
	{
		return elements[i];
	}
	else
		throw "Exception(2): index out of range error.";
	return dummy; // never gets here.
}

#endif
