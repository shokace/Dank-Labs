// Alex Butorin, Petar Juric, Kevin Crabbe
// Lab 2c
// Calculator2.cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isOperand(char post);

int main()
{
	stack<double> stk;
	string postFix;
	cout << "Please enter the postfix expression: ";
	getline(cin, postFix);

	for (int i = 0; i < postFix.length(); i++)
	{
		if (isOperand(postFix[i]))
		{
			stk.push(atof(postFix.c_str()));
		}
			
		else //token must be an operator
		{
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
	cout << "The result is: " << stk.top() << endl;
	stk.pop();

	//exit
	cout << "Please press enter to exit: ";
	cin.get();

}

bool isOperand(char post)
{
	if (post == '/' || post == '*' || post == '+' || post == '-')
		return false;
	else
		return true;
}
