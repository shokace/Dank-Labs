// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2c
// Calculator2.cpp
#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;
bool isOperand(string post);

int main()
{
	stack<double> stk;



  string postFix="";

	while ( postFix != "Q" && postFix != "q" )
  {
    cout << "Enter: ";

    // Print out the stack
    for (stack<double> dump = stk; !dump.empty(); dump.pop())
    {
      cout << dump.top() << ' ';
    }

    getline(cin, postFix);

    // Push string on stack
    if ( isOperand( postFix ) )
    {
      stk.push( atof( postFix.c_str() ) );
    }

    // Token is an operator
    else
    {
      // Ignore operator if there's less than 2 elements in the stack..
      if ( stk.size() >= 2 )
      {
          // Pop two elements, calculate, then push the result back in...
        double op1 = stk.top();
        stk.pop();

        double op2 = stk.top();
        stk.pop();

        // Calculate
        double result;
        switch ( atoi( postFix.c_str()) )
        {
          case '+':
            result = op1 + op2;
            break;
          case '-':
            result = op1 - op2;
            break;
          case '*':
            result = op1 * op2;
            break;
          case '/':
            result = op1 / op2;
            break;
        }

        // Push it back in.
        stk.push( result );

      } // end inner if
    } // End else

  } // End while

	cout << "Press enter to exit.";
	cin.get();

}

bool isOperand(string post)
{
	if (post == "/" || post == "*" || post == "+" || post == "-")
		return false;
	else
		return true;
}



/* Kevin's code

    // Push all eleme-me-me-ments on the stack...
    for (int i = 0; i < postFix.length(); i++)
    {
      if (isOperand(postFix[i]))
      {
        stk.push(atof(postFix.c_str()));
      }

      else //token must be an operator
      {
        // Get the first operand
        double operand2 = stk.top();
        stk.pop();

        if (operand2 == 0 && (postFix[i] == '/' || postFix[i] =='%'))
        {
          cout << "Error: Division by Zero\n";
        }

        double operand1 = stk.top();
        stk.pop();

        //operation
        double result;
        switch (postFix[i])
        {
        case '+':
          result = operand1 + operand2;
          break;
        case '-':
          result = operand1 - operand2;
          break;
        case '*':
          result = operand1*operand2;
          break;
        case '/':
          result = operand1 / operand2;
          break;
        }

        stk.push(result);
      }
	  }

	  */ //End Kevins code

