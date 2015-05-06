int main()
{
	const int MAX_SUBJECT_CODES = 200;
	const int MAX_CLASSES = 100000;

	// Array that holds subject codes
	//StaticArray<SubjectCode, MAX_SUBJECT_CODES> subjects;
	SubjectCode subjects[MAX_SUBJECT_CODES];

	// Array that holds all classes;
	//StaticArray<Course, MAX_CLASSES> classes;
	Course classes[MAX_CLASSES];
	// While loop index
	int scheduleIndex = 0;

	// Subject code loop index
	int subjectCodeIndex = 0;

	// Open the file
	ifstream fin;
	fin.open("dvc-schedule.txt");
	if (!fin.good())
	{
		throw "Cannot open file";
	}

	// Read the file
	while (fin.good()) // So. Fin. Good.
	{
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

		// Create temporary struct
		Course temp;
		temp.term = term;
		temp.section = section;
		temp.subject = subjectCode;
		int duplicateCount = 0;

		// Check for duplicates in the classes array -  dat big O
		for (int i = 0; i <= scheduleIndex; i++)
		{
			// Check if term and section are unique.
			// If it's a duplicate, don't check the rest of the elements and ignore the current entry
			if ((classes[i].section == temp.section) && (classes[i].term == temp.term))
			{
				cout << "Duplicate found on scheduleIndex " << scheduleIndex << '\r' << endl;
				duplicateCount++;
				break;
			}

			// Check if we're on the last iteration of the loop
			// If so, we have not found a duplicate and we can add it to the class array
			if (i == scheduleIndex)
			{
				// Store in the array
				classes[scheduleIndex] = temp;
				scheduleIndex++;
			}
		}
		// Increase Counter
	} // end while loop

	// Close the file
	fin.close(); // So. Fin. Close.

	// Process the data
	// For each line of text that we read, run a loop
	// That compares subject codes.
	// If it's the same, increase counter, otherwise add new subject code.
	// 'i' = current class in schedule
	// 'j' = current subject code out of 200.
	cout << "Index: " << scheduleIndex << endl;
	for (int i = 0; i<scheduleIndex; i++)
	{
		// Check all existing subject codes
		for (int j = 0; j <= subjectCodeIndex; j++)
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
			if (j == subjectCodeIndex)
			{
				cout << "Adding new subject code, " << classes[i].subject << endl;
				subjects[j + 1].subject = classes[i].subject;
				subjects[j + 1].count = 0;
				subjectCodeIndex++;
				break;
			}
		} // Subject code FOR loop
	} // Schedule FOR loop

	// Sort the subject code array
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
		}
	}

	// Print the data finally!!
	for (int i = 0; i<subjectCodeIndex; i++)
	{
		cout << setw(5) << subjects[i].subject << " " << setw(4) << subjects[i].count << " classes" << endl;
	}

	//int main
}
