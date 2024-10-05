#include <iostream>
#include "Node.h"
#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

    // Helper function to check if a position is valid
    // Returns true if the position is within the bounds of the current list
    bool LinkedList::isValidPosition(int position) {
        if (position < 0) {
            return false;
        }
        int currentIndex = 0;
        Node* current = head;
        while (current != nullptr) {
            current = current->next;
            currentIndex++;
        }
        return position <= currentIndex;    // Return true is position is valid
    }

    // Function to insert a node at the beginning of the linked list
    void LinkedList::insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;   // Point newNode's next to the current head
        head = newNode;         // Update head to be the new node
    }

    // Function to insert a node at the end of the linked list
    void LinkedList::insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode; // If the list is empty, set the newNode as head
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;    // Traverse to the last node
        }
        current->next = newNode;    // Append the new node to the end
    }

    // Function to insert a node at a specific position in the linked list
    void LinkedList::insertAtPosition(int value, int position) {

        // Test if valid position passed
        if (!isValidPosition(position)) {
            std::cout << "Invalid Position" << std::endl;
            return;
        }
        if (position == 0) {
            insertAtBeginning(value); // If position is 0, insert at the beginning
            return;
        }

        Node* newNode = new Node(value);
        Node* current = head;
        int currentIndex = 0;

        // Traverse to the position before the desired one
        while (current != nullptr && currentIndex < position - 1) {
            current = current->next;
            currentIndex++;
        }

        // If we have reached the end of the list, append the node at the end of the list
        if (current == nullptr) {
            insertAtEnd(value);
        } else {
            newNode->next = current->next;  // Link the new node to the current position
            current->next = newNode;        // Link the previous node to the newNode
        }

    }

    // Function to print the linked list
    void LinkedList::printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
