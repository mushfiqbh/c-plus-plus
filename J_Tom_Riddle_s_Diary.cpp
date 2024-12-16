#include <iostream>
using namespace std;

/**
 * Checks if the given string txt is present in the given array arr.
 * @param txt The string to be searched in the array.
 * @param arr The array of strings.
 * @param n The size of the array.
 * @return true if the string is found in the array, false otherwise.
 */
bool existsAlready(string txt, string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // Check if the string is present in the array
        if (txt == arr[i])
        {
            return true;
        }
    }
    // If the string is not present in the array
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;   // Number of strings
    string arr[100]; // Create Array to store the strings

    for (int i = 0; i < n; i++)
    {
        string txt;
        cin >> txt; // Input the string
        if (existsAlready(txt, arr, n))
        {
            // If the string is already exists in the array
            cout << "YES" << endl;
        }
        else
        {
            // If the string is not present in the array
            cout << "NO" << endl;
            arr[i] = txt;   // Add the string to the array
        }
    }

    return 0;
}