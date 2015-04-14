// SchickBrianExampleStack.cpp
// by Brian Schick
// 2/10/2015

// to demonstrate a static array class

#include "SchickBrianExampleStack.h"
#include "SchickBrianExampleStack.h"

#include <iostream>
#include <string>
using namespace std;

template <class MyType, int MaxSize>
void PrintStack( Stack<MyType,MaxSize> const & theStack )
{
	for( unsigned int i = 0; i < theStack.getSize(); i++ )
		cout << theStack[i] << endl;
}

void TestStack()
{
	//Stack();
	Stack<string,10> strStack;
	cout << "Stack<string,10> Def Ctor MaxSize: " << strStack.getMaxSize() << endl;

	//Stack( Stack const & );
	Stack<string,10> strStack2(strStack);
	cout << "Stack<string,10> Copy Ctor MaxSize: " << strStack.getMaxSize() << endl;

	//~Stack();

	//
	//// Push ( MyType )
	////   puts the passed MyType on top of the stack, if available, and returns true
	////   if no space to put the passed MyType, returns false
	//bool Push( MyType const & );
	strStack.Push( string("Hello") );

	//// Top()
	////   returns a copy of the top of the stack.
	////   if the stack is empty, throws an std::exception.
	//MyType Top() const;
	cout << "strStack has " << strStack.getSize() << " items. the top is " <<
		strStack.Top() << endl;

	//// getSize()
	////   returns how many things are in the stack
	//unsigned int getSize() const { return m_top; }

	//// getMaxSize()
	////   returns the maximum size of the stack
	//unsigned int getMaxSize() const { return m_MAX_SIZE; }
	// Tested!

	//// Pop()
	////   removes the top of the stack, if there are things to remove, and returns true
	////   if the stack is empty, pop returns false.
	//bool Pop();
	if( strStack.Pop() ) cout << "Popped" << endl;
	else cout << "Pop on empty" << endl;
	if( strStack.Pop() ) cout << "Popped" << endl;
	else cout << "Pop on empty" << endl;

	// test for top of empty stack.
	try
	{
		cout << strStack.Top() << endl;
	}
	catch ( exception & e )
	{
		cout << e.what() << endl;
	}

	//// operator[]( i )
	////   returns the i element from the array, if i is valid
	////   else throws a std::exception
	//MyType & operator[]( unsigned int i );
	strStack.Push( string("Hi") );
	strStack.Push( string("There") );
	strStack.Push( string("This") );
	strStack.Push( string("Is") );
	strStack.Push( string("A") );
	strStack.Push( string("Stack") );
	strStack.Push( string("Example") );
	//MyType const & operator[]( unsigned int i ) const;
	try
	{
		for( unsigned int i = 0; i < 8; i++ )
		{
			cout << strStack[i] << endl;
			strStack[i] += " string " + to_string(i);
		}
	}
	catch ( exception & e )
	{
		cout << e.what() << endl;
	}

	try
	{
		for( unsigned int i = 0; i < 8; i++ )
		{
			cout << strStack[i] << endl;
		}
	}
	catch ( exception & e )
	{
		cout << e.what() << endl;
	}

	PrintStack( strStack );

	Stack<float,4> floatStack;
	for( double d = 0.0; d < 10.0; d += 1.1 )
		cout << d << ( floatStack.Push(d) ? " Pushed" : " No Space" ) << endl;

	PrintStack( floatStack );

	for( unsigned int i = 0; i < 6; i++ )
		cout << ( floatStack.Pop() ? "Popped" : "Empty Pop" ) << endl;
}

int main()
{
	cout << "Hello World" << endl;
	TestStack();
}