#include <iostream>
#include "Students.h"

Students::Students(){
    this->name = "";
    this->ID = 0;
};

Students::Students(std::string name, int ID){
    this->name = name;
    this->ID = ID;
};

int Students::getID() {
    return ID;
};

std::string Students::getName() {
    return name;
};

void Students::setID(int ID) {
    this->ID = ID;
};

void Students::setName(std::string name) {
    this->name = name;
};

LinkedList::LinkedList() {
    head = NULL;
    tail = NULL;
};

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

