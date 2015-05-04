#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main()
{
	//prompt the user to enter the values and create the dynamic arr
	DynamicArray<int> arr;
	int numVal = 0;
	while (true)
	{
		int input;
		cout << "Please enter up to one hundred integers." << endl;
		cout << "Enter an integer or 'Q' to finish: ";
		cin >> input;
		if (input == 'q' || input == 'Q')//this happens after data entry is complete
		{
			cout << numVal << " values were entered." << endl;
			for (int i = 0; i < numVal; i++)
			{
				cout << arr[i] << ", ";
			}
			cout << endl;
		}
		//push value onto dynamic array
		else
		{
			arr[numVal] = input;
			numVal++;
		}
	}
}
