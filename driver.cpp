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

    myList.insertAtBeginning(3);
    myList.insertAtEnd(7);
    myList.insertAtBeginning(1);
    myList.insertAtEnd(9);

    std::cout << "Original List: ";
    myList.printList();

    myList.insertAtPosition(5, 2); // Inserting 5 at position 2

    std::cout << "List after insertion: ";
    myList.printList();

    return 0;
}
