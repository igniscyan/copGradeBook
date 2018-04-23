#include <iostream>
#include "Courses.h"
#include <string>

/*
Constructors
*/

//Default constructor
Courses::Courses(){

}

/*
Get Methods
*/

//Get course name
string Courses::getName(){
    return name;
}

//Get course ID
Courses::getID(){
    return courseID;
}

//Get course periods
Courses::getPeriods(){
    return period;
}

//Get gets a grade
double Courses::getGradeFromID(int stdID){
    if (grades.find(ID) == grades.end())
    {
        return 0;
    }
    else
    {
        return grades[ID];
    }

}

//Get assignment array
Assignment[]* Courses::getAssignments(){
    return assignments;
}

//Get gradebook for a period
Gradebook* Courses::getPeriodGradebook(int prID){
return;
}

/*
Set Methods
*/

//Set course ID
void Courses::setID(int ID){
    courseID = ID;
}

//Add course period
void Courses::addPeriod(int prID) {
    int i, courseCount = 0;

    cin >> courseCount;

    for (i = 0; i < courseCount; i++) {

        cin >> courseID;

        cin >> name;

        courseCount++;
    }
}

//Add assignment to course
void Courses::addAssignment(Assignment assignmentName){


    }
