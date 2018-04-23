#include <iostream>
#include "Students.h"

/*
Student Constructors
*/

//Required default constructor
Students::Students(){
    this->name = "";
    this->ID = 0;
};

//The actually used constructor
Students::Students(std::string name, int ID){
    this->name = name;
    this->ID = ID;
};

/*
Get Methods
*/

//Returns the student ID
int Students::getID() {
    return ID;
};

//Returns the student Name
std::string Students::getName() {
    return name;
};

/*
Set Methods
*/

//Changes the student ID to the given number
void Students::setID(int ID) {
    this->ID = ID;
};

//Changes the student name to the given name
void Students::setName(std::string name) {
    this->name = name;
};

/*
Assignment Linked List Constructors
*/

//The initial default constructor
LinkedList::LinkedList() {
    head = NULL;
    tail = NULL;
};

/*
Assignment Management
*/

//Adds assignments to student
void LinkedList::addAssignment(Assignments assignment) {
    Node *current = new Node;
    Node *temp = new Node;
    current->assignmentNode = assignment;
    temp = head;

    if(head == NULL){
        head = current;
        tail = current;
        return;
    }

    while(temp != tail){
        if(current->assignmentNode.getName().compare(temp->assignmentNode.getName()) == 0){
            std::cout << "Assignment already exist" << std::endl;
            return;
        }
        temp = temp->next;
    }

    tail->next = current;
    tail = tail->next;
};

//Removes assignments from students
void LinkedList::removeAssignment(std::string assignmentName) {
    Node *temp = new Node;
    temp = head;

   while(assignmentName.compare(temp->assignmentNode.getName()) != 0){
        temp = temp->next;
    }


   if(temp == head){
        head = head->next;
        delete temp;
        return;
   }
   else if(temp == tail){
        Node *temp2 = new Node;
        while(temp2->next != temp){
            temp2 = temp2->next;
        }
        tail = temp2;
        temp2->next = NULL;
        delete temp;
        return;
   }
   else{
       Node *temp3 = new Node;
       temp3 = head;
       while(temp3->next != temp){
           temp3 = temp3->next;
       }
       temp3->next = temp->next;
   }
};
