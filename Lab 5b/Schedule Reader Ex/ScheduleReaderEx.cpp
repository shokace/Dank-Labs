// ScheduleReader.cpp
// by Brian Schick
// 2/12/2015

// to read and parse the dvc-schedule.txt file

// Record Format:
// Term <tab> Section <tab> Course <tab> Instructor <tab> WhenWhere <tab>
// Sometimes course, Instructor, and WhenWhere are missing
// All parts are strings

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//char * token;
	//char buf[1024]; //what is the buffer for
	const char* const tab = "\t";// what is this for

	// open the file
	ifstream fin;
	fin.open("dvc-schedule.txt");
	if( !fin.good() ) 
		throw( exception( "I/O Error" ) );

	// Read the file
	while( fin.good() )
	{
		string line;
		getline(fin,line);
		//strcpy(buf,line.c_str());

		//if( buf[0] == 0 ) continue; // skip blank lines
		if( line[0] == 0 )  continue;

		// parse the line.
		// Term <tab> Section <tab> Course <tab> Instructor <tab> WhenWhere <tab>
		//const string term( token = strtok(buf,tab) );
		//const string section( token = strtok( NULL, tab ) );
		//const string course( token = strtok( NULL, tab ) ? token : "" );
		//const string instructor( token = strtok( NULL, tab ) ? token : "" );
		//const string whenWhere( token = strtok( NULL, tab ) ? token : "" );
		//if( course.find('-') == string::npos ) continue; // this course does not have a number. skip it.
		//const string subjectCode( course.begin(), course.begin() + course.find('-') );
		size_t current, next = -1;
		current = next+1;
		next=line.find_first_of("\t\n", current );
		string term = line.substr(current,next-current);

		current = next+1;
		next=line.find_first_of("\t\n", current );
		string section = line.substr(current,next-current);

		current = next+1;
		string course;
		if( current < line.length() )
		{
			next=line.find_first_of("\t\n", current );
			course = line.substr(current,next-current);
		}

		current = next+1;
		string instructor;
		if( current < line.length() )
		{
			next=line.find_first_of("\t\n", current );
			instructor = line.substr(current,next-current);
		}

		current = next+1;
		string whenWhere;
		if( current < line.length() )
		{
			next=line.find_first_of("\t\n", current );
			whenWhere = line.substr(current,next-current);
		}

		if( course.find('-') == string::npos ) 
			continue;

		string subjectCode( course.begin(), course.begin() + course.find('-') );

		// Print the line
		cout << term << '|' << section << '|' << course << '|' <<
			instructor << '|' << whenWhere << '|' << subjectCode << endl;
	}

	// Close the file
	fin.close();
	return 0;
}