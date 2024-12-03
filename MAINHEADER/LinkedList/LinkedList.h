#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <iostream>
using namespace std;


template <typename T>
class LinkedList {
  private:
    struct Node {
      T data;
      Node *next;

      Node(T val) {
        data = val;
        next = NULL;
      }
    };
    Node *head;
    Node *tail;
    size_t size;

  public:
    LinkedList() {
      head = NULL;
      tail = NULL;
      size = 0;
    }
    ~LinkedList(); // Destructor 
    void insertAtHead(T val);
    void insertAtTail(T val);
    int deleteAtHead();
    int deleteAtTail();
    void printList();
    size_t getSize();
    bool searchInList(T val);
};

#include "LinkedList.tpp"

#endif