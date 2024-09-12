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

    Node(int d)
    {
        data = d;
        next = NULL;
    }
}

struct SLL
{
    Node *head = NULL;
    void insertHead(int d);
    void insertEnd(int d);
    void insertAtPos(int d, int pos);
    void deleteHead();
    void deleteTail();
    void deleteAtPos(int pos);
    void searchItem(int item);
    void print();
};

void SLL::insertHead(int d)
{
    Node *newNode = new Node();
    newNode->data = d;
    newNode->next = NULL;

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

void SLL::insertEnd(int d)
{
    Node *newNode = new Node(d);

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

void SLL::insertAtPos(int d, int pos)
{
    if (pos < 0)
    {
        return;
    }

    Node *newNode = new Node(d);

    if (pos == 0)
    {
        head = newNode;
    }
    else
    {
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
    li.deleteAtPos(2);
    li.print();
    li.searchItem(20);

    return 0;
}
