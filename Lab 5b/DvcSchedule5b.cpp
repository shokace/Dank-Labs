#include <fstream>
#include <iostream>
#include <string>
#include <exception>
#include <ctime>
#include <iomanip>

#include "StaticArray.h"

using namespace std;

//Data structure holds a course and its data
struct Course
{
	string term, section, subject;

};

//Data structure hold the name of unique subject codes and # courses of each subject code
struct SubjectCode
{
	string subject;
	int count;
};

int main()
{
  cout
    << "// Alex Butorin, Petar Juric, Kevin Crabbe \n"
    << "// Lab 5b, Schedule Reader \n"
    << "// DvcSchedule5b.cpp \n\n";

	const int MAX_SUBJECT_CODES = 200;
	const int MAX_CLASSES = 100000;

	// Array that holds subject codes
	//StaticArray<SubjectCode, MAX_SUBJECT_CODES> subjects;
	SubjectCode subjects[MAX_SUBJECT_CODES];

	// Array that holds all classes;
	//StaticArray<Course, MAX_CLASSES> classes;
	Course classes[MAX_CLASSES];

	int classIndex = 0;         // Counts how many non-duplicate classes we have
	int subjectCodeIndex = 0;   // Counts how many subject codes we have
  int duplicateCount = 0;     // Counts how many duplicates we have

	// Open the file
	ifstream fin;
	fin.open("dvc-schedule.txt");
	if (!fin.good())
	{
		throw "Cannot open file";
	}

	// Read the file line by line, convert to a struct and store in the class array
	while (fin.good())
	{
		// Read a line and split it into vars
    // Current line
    string line;
    getline(fin, line);

    // Parse the strings
    // skip blank lines
    if (line[0] == 0)  continue;

    size_t current, next = -1;
    current = next + 1;
    next = line.find_first_of("\t\n", current);
    string term = line.substr(current, next - current);

    current = next + 1;
    next = line.find_first_of("\t\n", current);
    string section = line.substr(current, next - current);

    current = next + 1;
    string course;
    if (current < line.length())
    {
      next = line.find_first_of("\t\n", current);
      course = line.substr(current, next - current);
    }

    current = next + 1;
    string instructor;
    if (current < line.length())
    {
      next = line.find_first_of("\t\n", current);
      instructor = line.substr(current, next - current);
    }

    current = next + 1;
    string whenWhere;
    if (current < line.length())
    {
      next = line.find_first_of("\t\n", current);
      whenWhere = line.substr(current, next - current);
    }

    if (course.find('-') == string::npos)
      continue;

    string subjectCode(course.begin(), course.begin() + course.find('-'));

    // Print the line
    //cout << term << " | " << section << " | "  << subjectCode << endl;
    //<< cours  e << " | " << instructor << " | " << whenWhere << " | "

		// Store parsed line in a struct
      Course temp;
      temp.term = term;
      temp.section = section;
      temp.subject = subjectCode;

		// Determine if current line/struct/class is a duplicate.
    for (int i = 0; i <= classIndex; i++)
    {
      // Check if term and section are unique.
      // If it's a duplicate, don't check the rest of the elements and ignore the current entry
      if ((classes[i].section == temp.section) && (classes[i].term == temp.term))
      {
        cout << '\r' << "Duplicate found on line " << setw(5) << classIndex << " (" << duplicateCount << " total) ";
        duplicateCount++;
        break;
      }

      // Check if we're on the last iteration of the loop
      // If so, we have not found a duplicate and we can add it to the class array
      if (i == classIndex)
      {
        // Store in the array
        classes[classIndex] = temp;
        classIndex++;
        break;
      }
    }

	} // End file parsing block
  // File has been completely processed. Close the file.
	fin.close();

	// Duplicates have been removed from the classes array.
	// Now assign every class to a subject code.
  // For each line of text that we read, run a loop
  // That compares subject codes.
  // If it's the same, increase counter, otherwise add new subject code.
  // 'i' = current class in schedule
  // 'j' = current subject code out of 200.
  cout << "Index: " << classIndex << endl;
  for (int i = 0; i<=classIndex; i++)
  {
    // Check all existing subject codes
    for (int j = 0; j < subjectCodeIndex; j++)
    {
      // If we find the current subject code in the list, increase counter
      // and break out of the loop, no need to check the rest.
      if (classes[i].subject == subjects[j].subject)
      {
        subjects[j].count++;
        break; //Don't check the rest of the subject codes
      }

      // If we're on the last iteration, we haven't found a class code like this
      // So we add a new class code and increase the counter
      if (j == subjectCodeIndex )
      {
        cout << "Adding new subject code, " << classes[i].subject << endl;
        subjects[j].subject = classes[i].subject;
        subjects[j].count = 0;
        subjectCodeIndex++;
        break;
      }
    } // End Subject code FOR loop
  } // End Schedule FOR loop
  // End Class -> Subject code assignment block

  // Subject codes and counts have been assigned. Sort them alphabetically.
  // Modified/backwards bubble sort, because efficiency is overrated
  for (int i = 0; i<subjectCodeIndex; i++)
  {
    for (int j = 0; j<(subjectCodeIndex - i); j++)
    {
      if (subjects[j].subject > subjects[j + 1].subject)
      {
        // Swap elements
        SubjectCode temp;
        temp = subjects[j];
        subjects[j] = subjects[j + 1];
        subjects[j + 1] = temp;
      }
    } // End j for
  } // End i for
  // Sorting block end

  // Print the data finally!!
  for (int i = 0; i<subjectCodeIndex; i++)
  {
    cout << setw(5) << subjects[i].subject << " " << setw(4) << subjects[i].count << " classes" << endl;
  }

} //int main
