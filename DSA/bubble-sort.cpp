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
    int n = 6;
    StdInfo arr[n];
    arr[0] = {id : 103, name : "Ab", cgpa : 3.5};
    arr[1] = {id : 101, name : "Ab", cgpa : 4.0};
    arr[2] = {id : 106, name : "Ab", cgpa : 3.0};
    arr[3] = {id : 105, name : "Ab", cgpa : 4.0};
    arr[4] = {id : 102, name : "Ab", cgpa : 2.5};
    arr[5] = {id : 104, name : "Ab", cgpa : 3.8};

    sort(arr, arr + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].id << " " << arr[i].cgpa << endl;
    }

    // // Sorting Array of Integers
    // int arr[10] = {21, 43, 11, 89, 56, 44, 98, 34, 67, 34};
    // int sz = sizeof arr / sizeof(int);

    // for (int i = 0; i < sz-1; i++)
    // {
    //     for (int j = 0; j < sz - i - 1; j++)
    //     {
    //         if(arr[j] > arr[j+1])
    //         {
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    // for (int i = 0; i < sz; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}