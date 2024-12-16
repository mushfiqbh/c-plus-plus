#include <iostream>
using namespace std;

// create Node structure with data and next pointer
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

// create Queue structure with front and rear pointer
struct Queue
{
    Node *front = NULL;
    Node *rear = NULL;
    int cnt = 0;

    int Size();
    bool Empty();
    void push(int d);
    int pop();
    int Front();
};

int Queue::Size()
{
    return cnt; //  return size of queue
}

bool Queue::Empty()
{
    return Size() == 0; // return true if queue is empty
}

void Queue::push(int d)
{
    Node *n = new Node(d);
    if (front == NULL)
    {
        // if queue is empty then make front and rear point to new node
        front = rear = n;
    }
    else
    {
        // else set next pointer of rear to new node
        rear->next = n;
        rear = n;
    }
    cnt++;  // increment size of queue
}

int Queue::pop()
{
    if (Size() == 0)
    {
        return -1; // return -1 if queue is empty
    }
    else if (front == rear)
    { 
        // if queue has only one element
        int deletedData = front->data;  // save data of deleted node
        Node *del = front;
        front = rear = NULL;    // set front and rear to NULL

        delete del; // delete the head by the pointer
        cnt--;  // decrement size of queue
        return deletedData;
    }
    else
    {
        // else set front to next node
        Node *h = front;    // create new node
        front = front->next;    // set front to next node
        int deletedData = h->data;  // save data of deleted node

        delete h;   // delete the head by the pointer
        cnt--;  // decrement size of queue
        return deletedData;
    }
}

int Queue::Front()
{
    return front->data; // return front of queue
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // for fast I/O

    int t;
    cin >> t;  // number of test cases
    Queue que; // create a instance of Queue struct

    while (t--)
    {
        int n;
        cin >> n; // input first number

        // if n equals 1 then input second number and push onto queue
        if (n == 1)
        {
            int x;
            cin >> x;
            que.push(x);
        }
        // if n equals 2 and queue is not empty then pop from queue
        else if (n == 2)
        {
            if (!que.Empty())
            {
                que.pop();
            }
        }
        // if n equals 3
        else
        {
            // if queue is empty then print "Empty!"
            if (que.Empty())
            {
                cout << "Empty!" << "\n";
            }
            // else print the front of the queue
            else
            {
                cout << que.Front() << "\n";
            }
        }
    }

    return 0;
}