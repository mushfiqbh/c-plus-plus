#include <iostream>
using namespace std;

int main()
{
    // Sorting array of integers and counting steps
    int arr[] = {23, 12, 23, 93, 12, 45, 47, 65};
    int sz = sizeof(arr) / sizeof(int);

    int pass = 0, steps = 0;
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                steps++;
            }
        }
        pass++;
    }
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Pass: " << pass << endl;
    cout << "Steps: " << steps << endl;
}