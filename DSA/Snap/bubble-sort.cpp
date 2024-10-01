#include <bits/stdc++.h>
using namespace std;

struct StdInfo
{
    int id;
    string name;
    float cgpa;
};

bool comp(StdInfo a, StdInfo b)
{
    return a.cgpa > b.cgpa;
}

int main()
{
    // Sorting array of integers
    int arr[] = {23, 12, 23, 93, 12, 45, 47, 65};
    int n = sizeof(arr) / sizeof(int);

    // sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Sorting array of structure
    int n = 3;
    StdInfo students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].id >> students[i].cgpa >> students[i].name;
    }

    // sort(students, students + n, comp);
    // BUBBLE SORT Below
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].cgpa < students[j + 1].cgpa)
            {
                swap(students[j], students[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].id << " " << students[i].name << endl;
    }
}
