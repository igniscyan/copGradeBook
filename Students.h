
#pragma once
#ifndef STUDENTS_STUDENTS_H
#define STUDENTS_STUDENTS_H

#include <string>
#include <iostream>
#include "Assignments.cpp"

struct Node{
    Assignments assignmentNode;
    Node *next;
};

class LinkedList{
private:
    Node *head;
    Node *tail;
public:
    LinkedList();
    void addAssignment(Assignments assignment);
    void removeAssignment(std::string assignmentName);
};


class Students{
    private:
        std::string name;
        int ID;
    public:
        Students();
        Students(std::string name, int ID);
        LinkedList assignments;
        std::string getName();
        void setName(std::string name);
        int getID();
        void setID(int ID);
};

#endif //STUDENTS_STUDENTS_H
