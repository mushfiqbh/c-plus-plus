#include <iostream>
using namespace std;

struct Node
{
    string data;
    Node *next;
    Node(string str)
    {
        data = str;
        next = NULL;
    }
};

struct Stack
{
    Node *head = NULL;
    int cnt = 0;

    int Size();
    bool Empty();
    void push(string str);
    string pop();
    string top();
};

int Stack::Size()
{
    return cnt;
}

bool Stack::Empty()
{
    return Size() == 0;
}

void Stack::push(string str)
{
    Node *n = new Node(str);

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

string Stack::pop()
{
    Node *h = head;
    head = head->next;
    string deletedData = h->data;

    delete h;
    cnt--;
    return deletedData;
}

string Stack::top()
{
    return head->data;
}

int main()
{
    int t;
    cin >> t; // number of test cases
    for (int i = 0; i < t; i++)
    {
        // print the case number
        cout << "Case " << i + 1 << ":" << endl;

        string command;
        string currentPage = "http://www.lightoj.com/"; // the current page
        Stack forward, backward;    // create forward and backward stacks

        // loop to input the commands until QUIT
        while (true)
        {
            cin >> command; // input the command
            if (command == "BACK")
            {
                // if the backward stack is empty, ignore the BACK command
                if (backward.Empty())
                {
                    cout << "Ignored" << endl;
                }
                else
                {
                    // otherwise, pop the top page from the backward stack and push it to the forward stack
                    forward.push(currentPage);
                    currentPage = backward.top();
                    backward.pop();
                    cout << currentPage << endl;
                }
            }
            else if (command == "FORWARD")
            {
                // if the forward stack is empty, ignore the FORWARD command
                if (forward.Empty())
                {
                    cout << "Ignored" << endl;
                }
                else
                {
                    // otherwise, pop the top page from the forward stack and push it to the backward stack
                    backward.push(currentPage);
                    currentPage = forward.top();
                    forward.pop();
                    cout << currentPage << endl;
                }
            }
            else if (command == "VISIT")
            {
                // if the command is VISIT, input the url
                string url;
                cin >> url;
                // push the current page to the backward stack and set the current page to the url
                backward.push(currentPage);
                currentPage = url;
                // the forward stack is emptied
                while (!forward.Empty())
                {
                    forward.pop();
                }
                cout << currentPage << endl;
            }
            else if (command == "QUIT")
            {
                // if the command is QUIT, break the loop
                break;
            }
        }
    }

    return 0;
}
