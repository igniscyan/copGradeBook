#include "Assignments.h"
#include <string>
#include <map>

//ASSIGNMENT CONSTRUCTORS

//Required default constructor used if the client did not add a name and ID
Assignments::Assignments()
{
    assignmentName = "null";
    assignmentID = 0;
    maxScore = 0;
    minScore = 0;
    meanScore = 0;
}

//Main constructor, sets name and ID variables when given
Assignments::Assignments(std::string name, int ID)
{
    assignmentName = name;
    assignmentID = ID;
    maxScore = 0;
    minScore = 0;
    meanScore = 0;
}


//GET METHODS
//returns the value of the assignment name
std::string Assignments::getName()
{
    return assignmentName;
}
//returns the value of the assignment ID
int Assignments::getID()
{
    return assignmentID;
}
//returns value of grade from the assignment ID
double Assignments::getGrade(int ID)
{
    //Checks if the assignment ID can be found in grades, if not returns 0
    if (grades.find(ID) == grades.end())
    {
        return 0;
    }
    else
    {
        return grades[ID];
    }
}
//returns max score that has been set from assignments
double Assignments::getMaxScore()
{
    return maxScore;
}
//returns min score that has been set from assignments
double Assignments::getMinScore()
{
    return minScore;
}
//returns mean score that is set in assignments
double Assignments::getMeanScore()
{
    return meanScore;
}

//SET METHODS
//Sets assignment name to the name that is provided
void Assignments::setName(std::string name)
{
    assignmentName = name;
}
//sets assignment ID to the ID that is provided
void Assignments::setID(int ID)
{
    assignmentID = ID;
}
//Adds a grade with student and grade value associated with it to the grades array
void Assignments::addGrade(int studentID, double grade)
{
    grades[studentID] = grade;
}
//Sets max score to assigned value
void Assignments::setMaxScore(double score)
{
    maxScore = score;
}
//Sets min score to assigned value
void Assignments::setMinScore(double score)
{
    maxScore = score;
}
//Sets mean score to assigned value
void Assignments::setMeanScore(double score)
{
    meanScore = score;
}

//TURNED IN ASSIGNMENTS

//Returns the first entry of the turned in array
int Assignments::getTurnedInArray()
{
    return turnedInArray;
}

//Retruns amount of students in the turned in array
int Assignments::getTurnedIn()
{
    return numTurnedIn;
}

//Returns the first entry of the incomplete array
int Assignments::getIncompleteAssgnArray()
{
    return incompleteAssgnArray;
}

//Returns how many students are in the incomplete array
int Assignments::getIncomplete()
{
    return numIncomplete;
}

//sets the category for the assignment
void Category::setCategory(std::string name)
{
    this->name = name;
}
//returns the category for the assignment
std::string Category::getCategory()
{
    return name;
}