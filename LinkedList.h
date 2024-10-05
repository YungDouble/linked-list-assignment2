#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"   // Include Node definition

class LinkedList {
public:
    // Pointer to the head of the linked list
    Node* head;

    // Constructor to initialize the linked list
    LinkedList();

    // Helper function to check if a position is valid
    bool isValidPosition(int position);

    // FUnction to insert a node at the beginning of the linked list
    void insertAtBeginning(int value);

    // Function to insert a node at the end of the linked list
    void insertAtEnd(int value);

    // Function to insert a node at a specific position in the linked list
    void insertAtPosition(int value, int position);

    // Function to print the linked list
    void printList();

};

#endif //LINKEDLIST_H
