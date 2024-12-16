#include <iostream>
using namespace std;

// structure of Node
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

// structure of Stack with head and size
struct Stack
{
    Node *head = NULL;
    int cnt = 0;

    int Size()
    {
        return cnt; // return size of stack
    }

    bool Empty()
    {
        return Size() == 0; // check if stack is empty
    }

    // push data in stack
    void push(int d)
    {
        Node *n = new Node(d);

        if (head == NULL)
        {
            head = n;
        }
        else
        {
            n->next = head;
            head = n;
        }
        cnt++;
    }

    // pop data from stack
    int pop()
    {

        Node *h = head;
        head = head->next;
        int deletedData = h->data;

        delete h;
        cnt--;
        return deletedData;
    }

    // return top element
    int top()
    {
        if (head == NULL)
        {
            return -1;
        }
        return head->data;
    }
};

int main()
{
    int n;  // number of elements
    int arr[1000]; // array to store the elements

    while (cin >> n && n != 0) // input n and loop until n = 0
    {
        // input the array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int current = 0; // current position
        int idx = 0;     // current index
        Stack stk;  // create stack

        while (idx < n) // loop until idx = n
        {
            // pop elements from the stack until the top element is equal to the current position
            while (!stk.Empty() && stk.top() == current + 1)
            {
                current++; // increment the current position
                stk.pop();
            }
            if (arr[idx] != current + 1) // if the current element is not equal to the current position
            {
                stk.push(arr[idx]); // push the current element into the stack
            }
            else
            {
                current++; // else increment the current position
            }
            idx++; // increment the index
        }

        // pop elements from the stack until the top element is equal to the current position
        while (!stk.Empty() && stk.top() == current + 1) // loop until the top element is equal to the current position
        {
            current++; // increment the current position
            stk.pop(); // pop the top element
        }

        // print  yes if the current position is equal to n
        cout << (current == n ? "yes" : "no") << endl;
    }

    return 0;
}
