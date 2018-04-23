#include <iostream>
#include <iomanip>
#include "Courses.h"
#include <string>
#include "Assignments.h"
#include "Assignments.cpp"

using namespace std;

Courses::Courses(std::string name, int ID){
    
    courseID = 0;
    courseName = "";
    name = "";
    
}

//Getter methods
string Courses::getName(){
    
    return name;
    
}

Courses::getID(){
    
    return courseID;
    
}
string Courses::getCourseName(){
    return courseName;
}


int Courses::getPeriods(){
    
    return prID;
    
}

double Courses::getGradeFromID(int stdID){
    
    return grades;
    
}

Assignments[]* Courses::getAssignments(){
    
    return name;
}

//Setter methods

void Courses::setID(int ID){
    
    courseID = ID;
    
}
void Courses::setCourseName(string name){
    courseName = name;
    
}

void Courses::addPeriod(int prID) {
    int crs;
    
    cin >> prID;
    
    for(crs=0; crs<prID; crs+=prID) {
        
        prID++;
        
    }
    
}

void Courses::addAssignment(Assignments assignmentName) {
    Assignments Assignments;
    
    int asgm;
    
    cin >> assignmentName;
    
    for (asgm = 0; asgm < assignmentName; asgm += assignmentName) {
        
        assignmentName++;
        
    }
}
