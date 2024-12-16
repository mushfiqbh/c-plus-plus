#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;  // Input the number of test cases
    deque<int> dq;      // Create a deque
    bool isReversed = false; // Track the state of reversal

    while (t--)
    {
        string txt;
        cin >> txt; // Input the command

        if (txt == "back")
        {
            if (dq.empty())
            {
                // If there are no elements in the deque
                cout << "No job for Ada?" << '\n';
            }
            else
            {
                if (isReversed)
                {
                    // If the deque is reversed, back is the front
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
                else
                {
                    // If the deque is not reversed, back is the back
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
            }
        }
        else if (txt == "front")
        {
            if (dq.empty())
            {
                // If there are no elements in the deque
                cout << "No job for Ada?" << '\n';
            }
            else
            {
                if (isReversed)
                {
                    // If the deque is reversed, front is the back
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
                else
                {
                    // If the deque is not reversed, front is the front
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
            }
        }
        else if (txt == "reverse")
        {
            // Toggle the reverse state, front and back will be swapped
            isReversed = !isReversed;
        }
        else if (txt == "push_back")
        {
            // Input an integer for push to the back
            int x;
            cin >> x;
            if (isReversed)
            {
                // If the deque is reversed, push_back is push_front
                dq.push_front(x);
            }
            else
            {
                // If the deque is not reversed, push_back is push_back
                dq.push_back(x);
            }
        }
        else if (txt == "toFront")
        {
            // Input an integer for push to the front
            int x;
            cin >> x;
            if (isReversed)
            {
                // If the deque is reversed, toFront is toBack
                dq.push_back(x);
            }
            else
            {
                // If the deque is not reversed, toFront is toFront
                dq.push_front(x);
            }
        }
    }

    return 0;
}