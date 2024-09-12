#include <iostream>
using namespace std;

int findIndexRec(int arr[], int item, int low, int high)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (item == arr[mid])
    {
        return mid;
    }
    else if (item < arr[mid])
    {
        return findIndexRec(arr, item, low, mid - 1);
    }
    else
    {
        return findIndexRec(arr, item, mid + 1, high);
    }
}

int findIndex(int arr[], int item, int sz)
{
    int low = 0, high = sz - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (item == arr[mid])
        {
            return mid;
        }
        else if (item < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {3, 12, 23, 44, 54, 67, 77, 84, 91, 97};

    cout << findIndex(arr, 67, 10) << endl;
    cout << findIndexRec(arr, 67, 0, 10);
    return 0;
}