// Author: Mushfiq R.
#include <iostream>
using namespace std;

// structure of Node
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

// structure of Doubly Linked List
struct DLL
{
    Node *head = NULL;

    // print Doubly Linked List
    void print()
    {
        Node *h = head;
        while (h->next != NULL)
        {
            cout << h->data << " ";
            h = h->next;
        }
        cout << h->data << "\n";
    }

    // insert node at head
    void insertHead(int d)
    {
        Node *newNode = new Node(d);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // delete node at head
    void deleteHead()
    {
        if (head != NULL)
        {
            Node *h = head;
            head = head->next;
            if (head != NULL)
            {
                head->prev = NULL;
            }
            delete h;
        }
    }

    // delete node at end
    void deleteEnd()
    {
        if (head == NULL)
        {
            return;
        }
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *h = head;
            while (h->next != NULL)
            {
                h = h->next;
            }
            h->prev->next = NULL;
            delete h;
        }
    }

    // delete node with value x
    void deleteX(int x)
    {
        Node *h = head;
        while (h != NULL)
        {
            if (h->data == x)
            {
                if (h->prev != NULL)
                {
                    h->prev->next = h->next;
                }
                if (h->next != NULL)
                {
                    h->next->prev = h->prev;
                }
                delete h;
                return;
            }
            h = h->next;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    DLL dll;    // create Doubly Linked List instance
    int t;
    cin >> t;   // number of test cases
    while (t--)
    {
        string s;
        cin >> s;   // input command

        if (s == "insert")
        {
            int d;
            cin >> d;   // input data
            dll.insertHead(d);  // insert node at head
        }
        else if (s == "delete")
        {
            int x;
            cin >> x;   // input data x
            dll.deleteX(x); // delete node with value x
        }
        else if (s == "deleteFirst")
        {
            dll.deleteHead();  // delete node at head
        }
        else if (s == "deleteLast")
        {
            dll.deleteEnd(); // delete node at end
        }
    }

    dll.print();    // print Doubly Linked List

    return 0;
}