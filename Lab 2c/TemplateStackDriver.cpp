// TemplateStackDriver.cpp
// by Brian Schick
// 1/27/2015

// To demonstrate a simple template class

//#include <iostream>
//using namespace std;

//#include "TemplateStack.h"

struct Vec2
{
	double x, y;
};

int main()
{
	cout << "Hello World" << endl;

	Stack<int> iStack;
	Stack<double> dStack;
	Stack<char> cStack;
	Stack<Vec2> v2Stack;

	// Push four things
	iStack.Push(4); iStack.Push(5); iStack.Push(6);
	dStack.Push(3.14159);
	Vec2 v = { 3.2, -5.0 };
	v2Stack.Push(v);

	int a; double b; Vec2 temp;

	// see the top thing
	if( iStack.Top(a) )
		cout << "iStack {4,5,6}.Top(): " << a << endl;
	else
		cout << "iStack {}.Top() failed" << endl;
	if( dStack.Top(b) )
		cout << "dStack {3.14159}.Top(): " << b << endl;
	else
		cout << "dStack {}.Top() failed" << endl;

	// pop a thing
	if( iStack.Pop() ) cout << "iStack popped" << endl;
	else cout << "iStack failed to pop" << endl;
	if( dStack.Pop() ) cout << "dStack popped" << endl;
	else cout << "dStack failed to pop" << endl;

	// see the next top thing
	if( iStack.Top(a) )
		cout << "iStack {4,5}.Top(): " << a << endl;
	else
		cout << "iStack {}.Top() failed" << endl;
	if( dStack.Top(b) )
		cout << "dStack {}.Top(): " << b << endl;
	else
		cout << "dStack {}.Top() failed" << endl;

	// pop a thing
	if( iStack.Pop() ) cout << "iStack popped" << endl;
	else cout << "iStack failed to pop" << endl;
	if( dStack.Pop() ) cout << "dStack popped" << endl;
	else cout << "dStack failed to pop" << endl;

	// see the next top thing
	if( iStack.Top(a) )
		cout << "iStack {4}.Top(): " << a << endl;
	else
		cout << "iStack {}.Top() failed" << endl;
	if( dStack.Top(b) )
		cout << "dStack {}.Top(): " << b << endl;
	else
		cout << "dStack {}.Top() failed" << endl;
}
