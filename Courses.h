

#ifndef COURSES_COURSES_H
#define COURSES_COURSES_H
#include <string>
#include <Gradebook.h>
#include <Assignment.h>

using namespace std;

class Courses{
private:
    string name;
    int courseID;
    int period[];
    Gradebook* periodGB[];
    Assignment* courseAssignments[];

public:

    Courses();

    //getter methods
    string getName;
    int[] getPeriods();
    int getID;
    double getGradeFromID(int stdID);
    Assignment[]* getAssignments();
    Gradebook * getPeriodGradebook(int prID);

    //setter methods
    void setID;

    void addPeriod(int prID);
    void addAssignment(Assignment assignmentName);
};
