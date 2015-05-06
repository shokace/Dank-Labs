// TemplateStack.h
// by Brian Schick
// 1/27/2015

// To demonstrate a simple template class

// Is a Stack
// Push
// Pop
// Top
// Size

#ifndef TEMPLATESTACK_H
#define TEMPLATESTACK_H

template <class myType>
class Stack
{
public:
	const static unsigned int MAX_SIZE = 100;
private:
	unsigned int m_size;
	myType m_array[MAX_SIZE];
public:
	// default ctor makes m_size = 0; leaves the m_array uninitialized
	Stack();

	// Push
	// pushes a thing onto the stack if there is space, and returns true
	// if no space, returns false
	bool Push( const myType & );
	// Pop
	// pop the top thing off the stack if there is one, and return true
	// if nothing to pop, returns false
	bool Pop();
	// Top
	// copy the top thing onto the passed parameter, if there is a thing, and return true
	// else returns false and leaves the passed parameter unchanged.
	bool Top( myType & )const;
	// Size
	unsigned int Size() const { return m_size; }
};

// default ctor makes m_size = 0; leaves the m_array uninitialized
template < class myType >
Stack<myType>::Stack()
	:m_size(0)
{
}

// Push
// pushes a thing onto the stack if there is space, and returns true
// if no space, returns false
template <class myType>
bool Stack<myType>::Push( const myType & a_thing )
{
	// know that size is the same as the index of the next available spot
	if( m_size < MAX_SIZE )
	{
		m_array[m_size++] = a_thing;
		return true;
	}
	else
		return false;
}
// Pop
// pop the top thing off the stack if there is one, and return true
// if nothing to pop, returns false
template <class myType>
bool Stack<myType>::Pop()
{
	if( m_size == 0 ) return false;
	else
	{
		m_size--;
		return true;
	}
}

// Top
// copy the top thing onto the passed parameter, if there is a thing, and return true
// else returns false and leaves the passed parameter unchanged.

template <class myType>
bool Stack<myType>::Top( myType & a_blank )const
{
	if( m_size == 0 ) return false;
	else
	{
		a_blank = m_array[m_size-1];
		return true;
	}
}

#endif
