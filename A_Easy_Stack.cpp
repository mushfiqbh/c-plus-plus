#include <iostream>
using namespace std;

// Structure of Node with data and next pointer
struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// Structure of Stack
struct Stack
{
    Node *head = NULL;
    int cnt = 0;

    int Size();
    bool Empty();
    void push(int d);
    int pop();
    int top();
};

// Return size of stack
int Stack::Size()
{
    return cnt;
}

// Check if stack is empty
bool Stack::Empty()
{
    return Size() == 0;
}

void Stack::push(int d)
{
    Node *newNode = new Node(d); // create new node

    if (head == NULL)
    {
        head = newNode; // if stack is empty, set head to new node
    }
    else
    {
        // else set next pointer of new node to head, and set head to new node
        newNode->next = head;
        head = newNode;
    }
    cnt++; // increment size of stack
}

int Stack::pop()
{
    Node *h = head;            // create new node pointed to head
    head = head->next;         // set head to next node
    int deletedData = h->data; // save data of deleted node

    delete h; // delete the head by the pointer
    cnt--;    // decrement size of stack
    return deletedData;
}

int Stack::top()
{
    if (head != NULL)
    {
        return head->data;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(nullptr);

    int t; // number of queries
    cin >> t;
    Stack stk; // create stack of integers

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            // if n equals 1 then input x and push onto stack
            int x;
            cin >> x;
            stk.push(x);
        }
        else if (n == 2)
        {
            // if n equals 2 and stack is not empty then pop from stack
            if (!stk.Empty())
            {
                stk.pop();
            }
        }
        else
        {
            // if n equals 3
            if (stk.Empty())
            {
                // if stack is empty print empty
                cout << "Empty!" << "\n";
            }
            else
            {
                // else print top
                cout << stk.top() << "\n";
            }
        }
    }

    return 0;
}