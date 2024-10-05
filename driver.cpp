/**
Programmer: Davos DeHoyos
Programming Assignment: 2
Description: This is a example of a singly linked list and basic functionality
Course: COSC 2436 Programming Fundamentals III Data Structures
Date: 10/01/2024
*/

#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList myList;

    // Test inserting at the beginning
    myList.insertAtBeginning(3);
    myList.insertAtBeginning(1);
    std::cout << "List after inserting at the beginning: ";
    myList.printList();  // Expected: 1 3

    // Test inserting at the end
    myList.insertAtEnd(5);
    myList.insertAtEnd(7);
    std::cout << "List after inserting at the end: ";
    myList.printList();  // Expected: 1 3 5 7

    // Test inserting at a specific position
    myList.insertAtPosition(4, 2);  // Insert 4 at position 2
    std::cout << "List after inserting 4 at position 2: ";
    myList.printList();  // Expected: 1 3 4 5 7

    // Test inserting at position 0 (beginning)
    myList.insertAtPosition(0, 0);  // Insert 0 at position 0
    std::cout << "List after inserting 0 at position 0: ";
    myList.printList();  // Expected: 0 1 3 4 5 7

    // Test inserting at an invalid position
    myList.insertAtPosition(10, 10);  // Invalid position
    std::cout << "Attempt to insert at invalid position: ";
    myList.printList();  // Expected: 0 1 3 4 5 7

    return 0;
}

