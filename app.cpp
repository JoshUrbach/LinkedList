#include <iostream>
#include <cstdlib>

#include "linked_list.h"

int main() {

  LinkedList Josh; 

  Josh.AddNode(25); //Test Add Node
  Josh.AddNode(8);
  Josh.AddNode(3);
  Josh.PrintList();

  Josh.DeleteNode(8); //Test Delete Node
  Josh.PrintList();

  Josh.DeleteNode(75); //test a value not in the list

  Josh.AddNode(80);
  Josh.AddNode(50);

  Josh.DeleteNode(25); // Test front node
  
  
}