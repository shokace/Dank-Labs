#include <iostream>
#include <string>
#include "StaticArray.h"

using namespace std;

// Function Prototypes
void getElements(Array<int> & numbers);
float calcAverage(const Array<int> & avnums);

int main()
{
	Array<int> nums(2);

	getElements(nums);
	float average = calcAverage(nums);
	cout << "Average is " << average << endl;

}

// Asks the user for array numbers
void getElements(Array<int> & numbers)
{
	// Holds current array index. Starts at zero, incremented by one after every user entry.
	int index = 0;

	// Input string
	string line;

  // Prompt the user
	cout << "Enter a positive integer, -1 to stop" << endl;

	// Keep entering numbers until the user enters -1. All numbers should have been initialized to zero by the constructor.
	while (numbers[index] != -1)
	{
			// Check if we reached the size limit. If true, then double the array size.
			if (index == numbers.length())
				numbers.changeSize(index * 2);

      // Read text line, convert it to a number
      getline(cin, line);
      numbers[index] = stoi(line);

      // Increase index by one.
      index++;
	}
}

float calcAverage(const Array<int> & avnums)
{
	int sum = 0;
	for (int i = 0; i <= avnums.length(); i++)
	{
		sum += avnums[i];
	}
	cout << "calcAverage : " << avnums.err();
	return sum / float(avnums.length());
}
