#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

struct SLL
{
    Node *head = NULL;
    void insertHead(int value);
    void insertEnd(int value);
    void insertAtPos(int value, int pos);
    void deleteHead();
    void deleteTail();
    void deleteAtPos(int pos);
    void searchItem(int item);
    void print();
};

/**
 * Inserts a new node at the beginning of the list.
 *
 * If the list is empty, head is set to the new node.
 * Otherwise, the new node is inserted before the current head node and the
 * head pointer is updated to point to the new node.
 *
 * @param value The data to be stored in the new node.
 */
void SLL::insertHead(int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

/**
 * Inserts a new node at the end of the list.
 *
 * If the list is empty, head is set to the new node.
 * Otherwise, the new node is appended to the end of the list
 * by traversing the list until the last node is found and its
 * next pointer is set to the new node.
 *
 * @param value The data to be stored in the new node.
 */
void SLL::insertEnd(int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

/**
 * Inserts a new node at the given position in the list.
 *
 * If the position is 0, the new node is inserted at the beginning of the list.
 * If the position is greater than the length of the list, the new node is not
 * inserted. Otherwise, the new node is inserted after the node at the given
 * position in the list.
 *
 * @param value The data to be stored in the new node.
 * @param pos The position in the list where the new node is to be inserted.
 */
void SLL::insertAtPos(int value, int pos)
{
    if (pos < 0)
    {
        return;
    }

    Node *newNode = new Node(value);

    if (pos == 0)
    {
        head = newNode;
    }
    else    {
        Node *current = head;
        int count = 0;

        while (current != NULL && count < pos - 1)
        {
            current = current->next;
            count++;
        }

        if (current == NULL)
        {
            delete newNode;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }
}

/**
 * Prints the contents of the list.
 *
 * If the list is empty, prints a message.
 * Otherwise, prints the data of each node in the list, separated by a space.
 */
void SLL::print()
{
    if (head == NULL)
    {
        cout << "List is empty\n";
    }
    else
    {
        Node *h = head;
        while (h != NULL)
        {
            cout << h->data << " ";
            h = h->next;
        }
        cout << endl;
    }
}

/**
 * Deletes the first node in the list.
 *
 * If the list is empty, prints a message.
 * Otherwise, deletes the node at the head of the list and updates the head
 * pointer to point to the next node in the list.
 */
void SLL::deleteHead()
{
    if (head == NULL)
    {
        cout << "List is empty\n";
    }
    else
    {
        Node *h = head;
        head = head->next;
        delete h;
    }
}

/**
 * Deletes the last node in the list.
 *
 * If the list is empty, prints a message.
 * If the list has one node, deletes the node and sets the head to NULL.
 * Otherwise, traverses the list to find the second-to-last node, deletes its
 * next node, and sets its next pointer to NULL.
 */
void SLL::deleteTail()
{
    if (head == NULL)
    {
        cout << "List is empty\n";
    }
    else if (head->next == NULL)
    {
        Node *h = head;
        head = NULL;
        delete h;
    }
    else
    {
        Node *h = head;
        while (h->next->next != NULL)
        {
            h = h->next;
        }
        Node *g = h->next;
        h->next = NULL;
        delete g;
    }
}

/**
 * Deletes the node at the given position in the list.
 *
 * If the list is empty, prints a message.
 * If the position is 1, deletes the first node and sets the head to its next node.
 * Otherwise, traverses the list to find the node at the given position, deletes
 * it, and sets the next pointer of the previous node to the node after the
 * deleted node.
 *
 * @param pos The position of the node to delete in the list.
 */
void SLL::deleteAtPos(int pos)
{
    if (head == NULL)
    {
        cout << "List is empty\n";
    }
    else if (pos == 1)
    {
        Node *h = head;
        head = h->next;
        delete h;
    }
    else
    {
        Node *h = head;
        for (int i = 1; i <= pos - 2; i++)
        {
            h = h->next;
        }
        Node *g = h->next;
        h->next = g->next;
        delete g;
    }
}

/**
 * Searches the list for the given item.
 *
 * Traverses the list until the given item is found or the end of the list is
 * reached. If the item is found, prints a message and returns. Otherwise, prints
 * a different message.
 *
 * @param item The item to search for in the list.
 */
void SLL::searchItem(int item)
{
    Node *h = head;

    while (h != NULL)
    {
        if (h->data == item)
        {
            cout << "Item Found\n";
            return;
        }
        h = h->next;
    }
    cout << "Item Not Found\n";
}

int main()
{
    SLL li;
    li.insertHead(4);
    li.insertHead(6);
    li.insertHead(5);

    li.print();
    li.deleteHead();
    li.print();
    li.deleteTail();
    li.print();

    return 0;
}
