#include <iostream>
#include "Node.cpp"

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Function to insert a node at the beginning of the linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;   // Point newNode's next to the current head
        head = newNode;         // Update head to be the new node
    }

    // Function to insert a node at the end of the linked list
    void insertAtEnd(int value) {
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
    void insertAtPosition(int value, int position) {
        if (position == 0) {
            insertAtBeginning(value); // If position is 0, insert at the beginning
            return;
        }

        Node* newNode = new Node(value);
        Node* current = head;

        for (int i = 0; i < position - 1 && current != nullptr; i++) {
            current = current->next;    // Traverse the list to find the node before the position
        }

        if (current != nullptr) {
            newNode->next = current->next;  // Link newNode to the next node
            current->next = newNode;        // Link the previous node to the newNode
        }
    }

    // Function to print the linked list
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};
