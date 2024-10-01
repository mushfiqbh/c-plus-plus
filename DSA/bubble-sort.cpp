#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct StdInfo
{
    int id;
    string name;
    float cgpa;
};

bool comp(StdInfo a, StdInfo b)

{
    return a.cgpa < b.cgpa;
}

int main()
{
    // Sorting Array of Structure
    // int n = 6;
    // StdInfo arr[n];
    // arr[0] = {id : 103, name : "Ab", cgpa : 3.5};
    // arr[1] = {id : 101, name : "Ab", cgpa : 4.0};
    // arr[2] = {id : 106, name : "Ab", cgpa : 3.0};
    // arr[3] = {id : 105, name : "Ab", cgpa : 4.0};
    // arr[4] = {id : 102, name : "Ab", cgpa : 2.5};
    // arr[5] = {id : 104, name : "Ab", cgpa : 3.8};

    // sort(arr, arr + n, comp);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].id << " " << arr[i].cgpa << endl;
    // }

    // Sorting Array of Integers
    int phone = 1737542444;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = phone%10;
        phone = phone/10;
    }
    int sz = sizeof arr / sizeof(int);

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

    cout << "\nPass: " << pass << endl;
    cout << "Steps: " << steps << endl;

    return 0;
}