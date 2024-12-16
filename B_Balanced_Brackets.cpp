#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string txt)
{
    // if length of string is odd then brackets are not balanced
    if (txt.length() % 2 != 0)
    {
        return false;
    }

    stack<char> stk;    // create stack of characters

    for (int i = 0; i < txt.length(); i++)
    {
        // push opening brackets to stack
        if (txt[i] == '{' || txt[i] == '[' || txt[i] == '(')
        {
            stk.push(txt[i]);
        }
        // check for closing brackets
        else if (txt[i] == '}' || txt[i] == ']' || txt[i] == ')')
        {
            // if stack is empty there is no opening bracket to match
            if (stk.empty())
            {
                return false;
            }

            // if opening and closing brackets matched then pop from stack
            else if (stk.top() == '{' && txt[i] == '}' || stk.top() == '[' && txt[i] == ']' || stk.top() == '(' && txt[i] == ')')
            {
                stk.pop();
            }
            // if they don't match then return false
            else
            {
                return false;
            }
        }
    }

    // if stack is empty then all brackets are matched
    return stk.empty();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string txt;
        cin >> txt;
        // if brackets are balanced then print "YES" else print "NO"
        cout << (isBalanced(txt) ? "YES" : "NO") << "\n";
    }

    return 0;
}