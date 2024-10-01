#include <bits/stdc++.h>
using namespace std;

bool BinaryRecursion(int arr[], int low, int high, int key)
{
    int mid = (low + high) / 2;
    if (arr[mid] == key)    // Found
        return true;
    else if (low > high)    // Base Case
        return false;

    else if (arr[mid] < key)
    {
        low = mid + 1;
        BinaryRecursion(arr, low, high, key);
    }
    else
    {
        high = mid - 1;
        BinaryRecursion(arr, low, high, key);
    }
}

void BinarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == key)
        {
            cout << "Found in Binary Search" << endl;
            return;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "NOT found in Binary search" << endl;
}

int main()
{
    int arr[10] = {1, 3, 4, 8, 9, 10, 33, 35};
    int n = sizeof(arr) / sizeof(int);
    int high = n - 1;
    int low = 0;
    int key;
    cin >> key;
    BinarySearch(arr, low, high, key); // Normal Search

    if (BinaryRecursion(arr, low, high, key))
    {
        cout << "Found By Recursion" << endl;
    }
    else
    {
        cout << "NOT Found By Recursion" << endl;
    }
}