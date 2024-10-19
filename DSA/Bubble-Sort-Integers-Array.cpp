#include <iostream>
using namespace std;

int main()
{
    // Sorting array of integers and counting steps
    int arr[] = {7, 47, 27, 53, 38, 33};
    int sz = sizeof(arr) / sizeof(int);

    int pass = 0, steps = 0;
    for (int i = 0; i < sz - 1; i++)
    {
        pass++;
        bool swapped = false;
        for (int j = 0; j < sz - i - 1; j++)
        {
            steps++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Pass: " << pass << endl;
    cout << "Steps: " << steps << endl;
}