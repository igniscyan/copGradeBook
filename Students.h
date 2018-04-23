#pragma once
#ifndef STUDENTS_STUDENTS_H
#define STUDENTS_STUDENTS_H

#include <string>
#include <iostream>
#include "Assignments.cpp"

//Used for the LinkedList class for assignments
struct Node{
    Assignments assignmentNode;
    Node *next;
};

//Class to keep track of assignments student has done
class LinkedList{
private:
    Node *head;
    Node *tail;
public:
    LinkedList();
    void addAssignment(Assignments assignment);
    void removeAssignment(std::string assignmentName);
};

//The values and methods used by the students object
class Students{
    private:
        std::string name;
        int ID;
    public:
		//Constructors
        Students();
        Students(std::string name, int ID);

		//Assignment linked list
        LinkedList assignments;

		//Get methods
        std::string getName();
		int getID();

		//Set methods
        void setName(std::string name);
        void setID(int ID);
};

#endif //STUDENTS_STUDENTS_H
