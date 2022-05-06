/*
File Name: linked_list.h
Description: Learning linked lists in C++
Author: Josh Urbach
Created on May 6th, 2022
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList{

private: //Attributes

  typedef struct node{
    int data; 
    node* next;
  }* nodePtr;

  nodePtr head;
  nodePtr curr;
  nodePtr temp;
  

public: //function prototypes

  //constructor
  LinkedList();

  //Add a node passing in data 
  void AddNode(int addData);

  //Delete a node removing data
  void DeleteNode(int delData);

  //Prints the Linked List
  void printList();

  
};
#endif /* LINKED_LIST_H  */