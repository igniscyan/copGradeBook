
#pragma once
#include <string>
#include <map>

struct Category{
    private:
        std::string name;
public:
        //Category functions for the assignments
        void setCategory(std::string name);
        std::string getCategory();
};

class Assignments {
private:
    std::string assignmentName;
    int assignmentID;

    //Student ID and grade
    std::map<int, double> grades;

    //Score_Analysis
    double maxScore;
    double minScore;
    double meanScore;

    int turnedInArray;
    int numTurnedIn;
    int incompleteAssgnArray;
    int numIncomplete;

    Category assignmentCategory;

public:
    //Constructors
    Assignments();
    Assignments(std::string name, int ID);

    //Get Methods
    std::string getName();
    int getID();
    double getGrade(int ID);

    //Set Methods
    void setName(std::string name);
    void setID(int ID);
    void addGrade(int studentID, double grade);

    //Get Score Analysis
    double getMaxScore();
    double getMinScore();
    double getMeanScore();

    //Set Score Analysis
    void setMaxScore(double score);
    void setMinScore(double score);
    void setMeanScore(double score);

    //Turned in and incomplete arrays
    int getTurnedInArray();
    int getTurnedIn();
    int getIncompleteAssgnArray();
    int getIncomplete();

};


