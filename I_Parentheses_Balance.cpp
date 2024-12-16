#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;   // input number of test cases
    cin.ignore();   // ignore the newline character

    while (t--)
    {
        string txt;
        getline(cin, txt); // input the string with spaces

        stack<char> stk;      // stack to store opening brackets
        bool balanced = true; // flag to check if the string is balanced

        for (int i = 0; i < txt.length(); i++)
        {
            // IF the current character is an opening bracket
            if (txt[i] == '(' || txt[i] == '[')
            {
                // Push opening brackets to the stack
                stk.push(txt[i]);
            }
            // IF the current character is a closing first bracket
            else if (txt[i] == ')')
            {
                // Check if the stack is empty or the top element is not matching first opening bracket
                if (stk.empty() || stk.top() != '(')
                {
                    balanced = false;
                    break;
                }
                // Else the top element is matching first opening bracket, pop it
                stk.pop();
            }
            // IF the current character is a closing third bracket
            else if (txt[i] == ']')
            {
                if (stk.empty() || stk.top() != '[')
                {
                    // If the stack is empty or the top element is not matching third opening bracket
                    balanced = false;
                    break;
                }
                // Else the top element is matching third opening bracket, pop it
                stk.pop();
            }
        }

        // Check if the stack is empty and the string is balanced
        if (stk.empty() && balanced)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}
