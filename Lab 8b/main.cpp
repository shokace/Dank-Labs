
//  main.cpp
//  Lab 8b
//
//  Created by Petar Juric on 4/2/15.
//  Copyright (c) 2015 Petar Juric. All rights reserved.
//

#include <iostream>
#include <string>
#include "queue.h"


using namespace std;

struct Course
{
    string teacher;
    string name;
};


ostream &operator << (ostream &strm, const Course &course)
{
    strm << "Course Name: " << course.name << "\nCourse Teacher: " << course.teacher << "\n";
    return strm;
}


int main()
{
    Course L1;
    L1.teacher = "Frank";
    L1.name = "Math";

    Course L2;
    L2.teacher = "Mark";
    L2.name = "Bio";

    //int test
    Queue<int> int_test;
    cout << "initialized test object" << endl;
    cout << "test isEmpty: ";
    cout << int_test.isEmpty() << endl;

    for (int i = 1; i <= 5; i++)
    {
        int_test.enqueue(i);
    }
    while (int_test.isEmpty() != true)
    {
        int temp;
        int_test.dequeue(temp);
        cout << temp << " ";

    }

    //ADT Test
    Queue<Course> course_test;
    course_test.enqueue(L1);
    course_test.enqueue(L2);
    Course data;
    course_test.dequeue(data);
    cout << data << endl;
    course_test.dequeue(data);
    cout << data << endl;

    //cout << L1;
    //cout << L2;

    cout << "Press enter";
    cin.get();
}
