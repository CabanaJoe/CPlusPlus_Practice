/**
 * Linked List - Create and Traverse Using Pointers
 * Define a simple Node struct and write two functions
 * — one to insert a new node at the front, and one to print the list.
 */

#include <iostream>


using namespace std;

// creating a struct in C++ with two members
// a variable 'data' that is an integer
// and a pointer to the next node of interest
// name goes after struct in c++ *****
struct Node
{
    int data;
    Node* next;
};


// insert funciton that inserts at the front
// if you want to change what a pointer points to, you pass a pointer to it
// head is a double pointer
// head is a pointer to the first node
// if we want to modify where head points inside the funciton we need a pointer to that pointer
// which is why we have Node** a double pointer.
void insert(Node** head, int value)
{
    // create a new node
    // 'new' reserves dynamic memory
    Node* newNode = new Node;

    // setting data and next pointer
    newNode->data = value;

    //pointing at the current head
    newNode->next = *head;


    // updating head
    *head = newNode;

}


// printList function that traverses and prints each node
void printList(Node* head)
{
    // creating pointer of type Node that points to the current head
    // so we can print the linked list
    Node* current = head;

    // while loops since we dont know the size of the list ahead of time.

    while(current != NULL)
    {

        // print current->data
        cout << current->data << endl;
        
        // move to next node
        current = current->next;

    }

}



int main()
{

    Node* head = NULL;

    insert(&head, 4);
    insert(&head, 1);
    insert(&head, 7);
    insert(&head, 9);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 6);
    insert(&head, 5);

    printList(head);

}