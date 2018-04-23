#include <iostream>
#include "Courses.h"
#include <string>

Courses::Courses(){

}

//Getter methods
string Courses::getName(){
    return name;
}

Courses::getID(){
    return courseID;
}


Courses::getPeriods(){
    return period;
}

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

Assignment[]* Courses::getAssignments(){
    return assignments;
}

Gradebook* Courses::getPeriodGradebook(int prID){
return;
}
//Setter method
void Courses::setID(int ID){
    courseID = ID;
}

void Courses::addPeriod(int prID) {
    int i, courseCount = 0;

    cin >> courseCount;

    for (i = 0; i < courseCount; i++) {

        cin >> courseID;

        cin >> name;

        courseCount++;
    }
}




void Courses::addAssignment(Assignment assignmentName){


    }
