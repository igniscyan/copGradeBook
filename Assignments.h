#pragma once
#include <string>
class Assignments {
private:
	std::string name;
	int assignmentID;
	Student turnedInArray[];
	Student incompleteAssgnArray[];
	double meanScore;
	struct category;
	double maxScore;
	double minScore;
public:
	string getName();
	int getID();
	Student[] getTurnedInArray();
	double getMaxScore();
	void setCategory(category.name);
	string getCategory();
	Student[] getIncompleteAssgnArray();
	double getMinScore();


};