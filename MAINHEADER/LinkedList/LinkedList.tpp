#include "LinkedList.h"


// Destructor method Define >>>
template <typename T>
LinkedList<T>::~LinkedList() {
  // Node<T> *curr = head;
  Node *curr = head;

  while( curr != NULL ) {
    // Node<T> *temp = curr;
    Node *temp = curr;
    curr = curr -> next;
    delete temp;
  }
}



// Insert at Head method Define >>>
template <typename T>
void LinkedList<T>::insertAtHead(T data) {
  // Node<T> *newNode = new Node<T>(data);
  Node *newNode = new Node(data);
  
  if(head == NULL) {
    head = newNode;
    tail = head;
  }
  else {
    newNode->next = head;
    head = newNode;
  }

  size++;
}



// Insert at tail method Define >>>
template <typename T>
void LinkedList<T>::insertAtTail(T data) {

  // Node<T> *newNode = new Node<T>(data);
   Node *newNode = new Node(data);

  if(head == NULL) {
    head = newNode;
    tail = head;
  }
  else {
    tail -> next = newNode;
    tail = newNode;
  }
  size++;
}



// Delete at Head method Define >>>
template <typename T>
int LinkedList<T>::deleteAtHead() {
  int n;
  if(head == NULL) {
    cout << "\nINKEDLIST IS ALREAY EMPTY\n";
    return -1;
  }
  else {
    // Node<T> *temp = head;
    Node *temp = head;
    
    head = head -> next;
    n = temp -> data;
    delete temp;

    if(head == NULL) {
      tail = NULL;
    }
  }
  size--;
  return n;
}




// Delete at tail method Define >>>
template <typename T>
int LinkedList<T>::deleteAtTail() {

  int n;
  if(head == NULL) {
    cout << "\nLINKEDLIST IS EMPTY\n";
    return -1;
  }
  else if(head->next == NULL) {
      n = head->data;
      delete head;
      head = tail = NULL;
      size = 0; // size reinitialized >>>
  }
  else {
    // Node<T> *temp = head;
        Node *temp = head;
    
      while (temp->next->next) {
        temp = temp->next;
      }

      // Delete the last node
      n = temp -> next -> data;
      delete temp->next;
      temp->next = nullptr;
      tail = temp -> next;
  }
  size--;
  return n;
}



// Get size of the linked list >>>
template <typename T>
size_t LinkedList<T>::getSize() {

  if(head == NULL)
    return 0;
  return size;
}



// search element in the linked list >>>
template <typename T>
bool LinkedList<T>::searchInList(T val) {
  // Node<T> *temp = head;
     Node *temp = head;

  while( temp != NULL ) {
    if(temp->data == val) {
      return true;
    }
    temp = temp -> next;
  }
  return false;
}


// Insert at position method Define >>>




// Show linkedlist method Define >>>
template <typename T>
void LinkedList<T>::printList() {

  if(head == NULL) {
    cout << "\nLINKEDLIST IS EMPTY\n";
    return;
  }
  else {
    // Node<T> *curr = head;
    Node *curr = head;
    
    cout << "\nLINKEDLIST IS: ";
    while(curr != NULL) {
      cout << curr->data;
      curr = curr -> next;
      if(curr != NULL) cout << "->";
    }
    cout << endl;
  }
}