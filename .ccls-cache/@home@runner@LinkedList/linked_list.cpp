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

  if(head != NULL){
    
  }
}