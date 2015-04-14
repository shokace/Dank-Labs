// SchickBrianExampleStack.h
// by Brian Schick
// 2/10/2015

// To demonstrate a static array class

#ifndef STACK_H
#define STACK_H

#include <exception> // for std::exception

template <class MyType, int MaxSize>
class Stack
{
public:
	// Returned by [] if there is an index error
	//static MyType Dummy;
private:
	unsigned int const m_MAX_SIZE;
	MyType m_Array[MaxSize];
	unsigned int m_top;
public:
	Stack();
	Stack( Stack const & );
	~Stack();
	
	// Push ( MyType )
	//   puts the passed MyType on top of the stack, if available, and returns true
	//   if no space to put the passed MyType, returns false
	bool Push( MyType const & );
	// Pop()
	//   removes the top of the stack, if there are things to remove, and returns true
	//   if the stack is empty, pop returns false.
	bool Pop();
	// Top()
	//   returns a copy of the top of the stack.
	//   if the stack is empty, throws an std::exception.
	MyType Top() const;
	// operator[]( i )
	//   returns the i element from the array, if i is valid
	//   else throws a std::exception
	MyType & operator[]( unsigned int i );
	MyType const & operator[]( unsigned int i ) const;
	// getSize()
	//   returns how many things are in the stack
	unsigned int getSize() const { return m_top; }
	// getMaxSize()
	//   returns the maximum size of the stack
	unsigned int getMaxSize() const { return m_MAX_SIZE; }
};

template <class MyType, int MaxSize>
	Stack<MyType,MaxSize>::Stack()
		:m_MAX_SIZE(MaxSize),m_top(0)
	{
	}

template <class MyType, int MaxSize>
	Stack<MyType,MaxSize>::Stack( Stack<MyType,MaxSize> const & theS )
		:m_MAX_SIZE(theS.m_MAX_SIZE),m_top(theS.m_top)
	{
	}

template <class MyType, int MaxSize>
	Stack<MyType,MaxSize>::~Stack()
	{
	}
	
	// Push ( MyType )
	//   puts the passed MyType on top of the stack, if available, and returns true
	//   if no space to put the passed MyType, returns false
template <class MyType, int MaxSize>
	bool Stack<MyType,MaxSize>::Push( MyType const & a_Thing )
	{
		if( m_top < m_MAX_SIZE ) // have room to push
		{
			// push
			m_Array[m_top] = a_Thing;
			m_top++;
			return true;
		}
		return false;
	}

	// Pop()
	//   removes the top of the stack, if there are things to remove, and returns true
	//   if the stack is empty, pop returns false.
template <class MyType, int MaxSize>
	bool Stack<MyType,MaxSize>::Pop()
	{
		if( m_top == 0 ) return false;
		m_top--;
		return true;
	}

	// Top()
	//   returns a copy of the top of the stack.
	//   if the stack is empty, throws an std::exception.
template <class MyType, int MaxSize>
	MyType Stack<MyType,MaxSize>::Top() const
	{
		if( m_top == 0 )
			throw( exception( "Exception: Top is empty" ) );
		else
		{
			return m_Array[m_top-1];
		}
	}

	// operator[]( i )
	//   returns the i element from the array, if i is valid
	//   else throws a std::exception
template <class MyType, int MaxSize>
	MyType & Stack<MyType,MaxSize>::operator[]( unsigned int i )
	{
		static MyType dummy;
		if( i < m_top )
		{
			return m_Array[i];
		}
		else
			throw( exception("Exception(1): index out of range error.") );
		return dummy; // never gets here.
	}

template <class MyType, int MaxSize>
	MyType const & Stack<MyType,MaxSize>::operator[]( unsigned int i ) const
	{
		static MyType dummy;
		if( i < m_top )
		{
			return m_Array[i];
		}
		else
			throw( exception("Exception(2): index out of range error.") );
		return dummy; // never gets here.
	}

#endif