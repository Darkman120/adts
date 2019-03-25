#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions
using namespace std;

#ifndef LIST_H
#define LIST_H

class List //begin List definition 
{
  private:
    class Node;//forward declaration (defined in the implementation file)
    
    Node* frontPtr = nullptr;
    int num_elements = 0;
    
  public:
     ~List();//destructor
     void insertAt(int element, int k);//insert element at location k
     void removeAt(int k);//remove element at location k
     int size();//return the number of elements in the List
     int getAt(int k);//get element at location k
     void clear();//remove all data
     

};//end List definition

#endif
