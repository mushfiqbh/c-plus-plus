#include <iostream>
using namespace std;

void printArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int pos = 2, val = 25, sz = 5;

    // insert element at position pos
    for (int i = sz - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    sz++;
    printArr(arr, sz);

    // delete element at position pos
    for (int i = pos; i < sz - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    sz--;
    printArr(arr, sz);

    return 0;
}