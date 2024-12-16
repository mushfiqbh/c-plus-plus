// Author: Mushfiq R.
#include <bits/stdc++.h>
using namespace std;

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


struct DLL
{
    Node *head = NULL;
    void insertHead(int d);
    void deleteHead();
    void deleteEnd();
    void deleteX(int x);
    void print();
};

void DLL::print()
{
    Node *h = head;
    while (h->next != NULL)
    {
        cout << h->data << " ";
        h = h->next;
    }
    cout << h->data << "\n";
}

void DLL::insertHead(int d)
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

void DLL::deleteHead()
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

void DLL::deleteEnd()
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

void DLL::deleteX(int x)
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    DLL dll;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s == "insert")
        {
            int d;
            cin >> d;
            dll.insertHead(d);
        }
        else if (s == "delete")
        {
            int x;
            cin >> x;
            dll.deleteX(x);
        }
        else if (s == "deleteFirst")
        {
            dll.deleteHead();
        }
        else if (s == "deleteLast")
        {
            dll.deleteEnd();
        }
    }
    dll.print();

    return 0;
}