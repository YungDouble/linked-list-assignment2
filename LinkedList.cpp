#include <iostream>
#include "Node.cpp"

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Function to insert a node at the beginning of the linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        /***
         * Insert your code here
        */

    }

    // Function to insert a node at the end of the linked list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        /***
         * Insert your code here
        */
    }

    // Function to insert a node at a specific position in the linked list
    void insertAtPosition(int value, int position) {
        Node* newNode = new Node(value);

        /***
         * Insert your code here
        */
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
