# Insert a Node at a specific position in a linked list

This challange is part of a tutorial track by https://www.youtube.com/mycodeschool and is accompanied by a video lesson

## Introduction
Given the pointer to the head node of a linked list and an integer to insert at a certain position, create a new node with the given integer as its  attribute, insert this node at the desired position and return the head node.

A position of 0 indicates head, a position of 1 indicates one node away from the head and so on. The head pointer given may be null meaning that the initial list is empty.

**Example**
- head refers to the first node in the list 1 -> 2 -> 3
- data = 4
- position = 2
- Insert a node at position  with . The new list is 1 -> 2 -> 4 -> 3

### Function Description
- Complete the function insertNodeAtPosition in the editor below. It must return a reference to the head node of your finished list. 
- insertNodeAtPosition has the following parameters:
    + head: a SinglyLinkedListNode pointer to the head of the list
    + data: an integer value to insert as data in your new node
    + position: an integer position to insert the new node, zero based indexing

### Returns
- SinglyLinkedListNode pointer: a reference to the head of the revised list

### Input Format
- The first line contains an integer , the number of elements in the linked list.
- Each of the next **n** lines contains an integer SinglyLinkedListNode[i].data.
- The next line contains an integer **data**, the data of the node that is to be inserted.
- The last line contains an integer **position**.

### Constraints
- 1 <= n <= 1000
- 1 <= SinglyLinkedListNode[i].data <= 1000, where SinglyLinkedListNode[i] is the ith element of the linked list.
- 0 <= position <= n.

### Note: 
- My set up: Apple M1 with visual studio code, NO PLUGIN
- I ran into this issues
```
Node.cpp:6:41: error: use of undeclared identifier 'nullptr'
    Node(int value) : data(value), next(nullptr) {}
```
- Run this
```cplus
g++ -std=c++11 Node.cpp LinkedList.cpp driver.cpp -o driver
```
- Output
```
// Output
Original List: 1 3 7 9 
List after insertion: 1 3 5 7 9 

// Explanation
// The initial linked list is . Insert  at the position  which currently has  in it. The updated linked list is .
```


