#include <iostream>
#include <stack>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string txt;
    cin >> txt; // input string

    int n = txt.length(); // length of the string
    stack<char> stk;     // create stack of characters

    for (int i = 0; i < n; i++)
    {
        // if the stack is empty or
        // two adjacent characters are different (+- or -+)
        // then push the character into the stack
        if (stk.empty() || stk.top() != txt[i])
        {
            stk.push(txt[i]);
        }
        // if two adjacent characters are same (++ or --)
        // then remove the character from the stack
        else
        {
            stk.pop();
        }
    }

    // if the stack is empty then the string is alternating
    cout << (stk.empty() ? "Yes" : "No");

    return 0;
}