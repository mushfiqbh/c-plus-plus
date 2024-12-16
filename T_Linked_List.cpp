#include <iostream>
using namespace std;

// structure of Node with data, next pointer and previous pointer
struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

// structure and methods of Doubly Linked List
struct DLL
{
    Node *head = NULL;    // Head pointer
    Node *pointer = NULL; // Pointer to current node

    void insertAtPointer(int d)
    {
        Node *newNode = new Node(d);

        if (pointer == NULL) // If the list is empty
        {
            head = newNode;    // Insert at head
            pointer = newNode; // Set pointer to head
        }
        else
        {
            newNode->next = pointer;    // Insert before pointer
            newNode->prev = pointer->prev;  // Link previous node

            if (pointer->prev) // If pointer is not the head
                pointer->prev->next = newNode;  // Link previous node
            else // If inserting before head
                head = newNode; // Set head

            pointer->prev = newNode;    // Link new node
            pointer = newNode;  // Move pointer
        }
    }

    void deleteAtPointer()
    {
        if (pointer == NULL) // if list is empty
            return;

        if (pointer->prev)
            pointer->prev->next = pointer->next; // Link next node to previous
        else // If deleting the head
            head = pointer->next;

        if (pointer->next)
            pointer->next->prev = pointer->prev; // Link previous node

        Node *del = pointer;   // Delete current node
        pointer = pointer->next ? pointer->next : pointer->prev; // Move pointer
        delete del;

        if (head == NULL) // If the list is now empty
            pointer = NULL;
    }

    void changePointer(int direction)
    {
        if (pointer == NULL)
            return; // Return if list is empty

        // if direction is 1, move right
        if (direction == 1 && pointer->next != NULL) // Move right
            pointer = pointer->next;
        else if (direction == -1 && pointer->prev != NULL) // Else Move left
            pointer = pointer->prev;
    }

    void updateElement(int value)
    {
        if (pointer != NULL)
            pointer->data = value; // Update data
    }

    int print()
    {
        if (pointer == NULL)
            return -1; // Return -1 for empty list or invalid pointer
        return pointer->data;   // Return data of current node
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  // for faster input/output

    DLL dll;    // create Doubly Linked List instance
    int t;
    cin >> t; // number of test cases

    while (t--)
    {
        char ch;
        cin >> ch; // input command

        if (ch == '+')
        {
            int d;
            cin >> d; // input data
            dll.insertAtPointer(d);
        }
        else if (ch == '-')
        {
            dll.deleteAtPointer(); // delete current node
        }
        else if (ch == '=')
        {
            int d;
            cin >> d; // input data
            dll.updateElement(d);
        }
        else if (ch == '<')
        {
            dll.changePointer(-1); // move left
        }
        else if (ch == '>')
        {
            dll.changePointer(1); // move right
        }
        else if (ch == '!')
        {
            cout << dll.print() << "\n"; // print current node
        }
    }

    return 0;
}
