/*
File Name: linked_list.cpp
Description: Learning linked lists in C++
Author: Josh Urbach
Created on May 6th, 2022
*/

#include <cstdlib>
#include <iostream>

#include "linked_list.h"

using namespace std;

//Constructor: Set all 3 attributes to NULL 
LinkedList::LinkedList(){
  head = NULL;
  curr = NULL;
  temp = NULL; 
}


void LinkedList::AddNode(int addData){
  nodePtr n = new node;
  n->next = NULL;
  n->data = addData;

  //Advances pointer to the last node in list, then has it point to n as the "next" node
  if(head != NULL){
    curr = head;
    while(curr->next != NULL){
      curr = curr->next;
    }
    curr->next = n;
  }
  else{
    head = n; //Happens if there is no list, this is the first node
  }
}


void LinkedList::DeleteNode(int delData){
  nodePtr delPtr = NULL;
  temp = head;
  curr = head;

  //Loops until the end of the list or once we found the data needed
  while(curr != NULL && curr->data != delData){
    temp = curr; 
    curr = curr->next;
  }

  //Checks if the current pointer is NULL and prints it wasnt found 
  if(curr == NULL){
    cout << delData << " was not in the list" << endl;
    delete delPtr; //garbage collection
  }
  else{ //delPtr is now pointing to a node we want to delete and temp has "patched" the hole we're going to make
    delPtr = curr;
    curr = curr->next;
    temp->next = curr;
    if(delPtr == head){
      head = head->next;
      temp = NULL;
    }
    delete delPtr;
    cout << "The value " << delData << " was deleted" << endl; 
  }
}


void LinkedList::PrintList(){
  curr = head;
  while(curr != NULL){
    cout << curr->data << endl;
    curr = curr->next;
  }
}